/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_11));
    var_17 = max((68 ^ var_9), (((((max(212, 193))) ? (130 < var_5) : (max(43, var_0))))));
    var_18 = (-3 * var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 49;
        var_19 = ((0 ? 465901152664413189 : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 &= (((arr_5 [i_1]) ? -1 : 10714597716784485218));
        var_21 = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = (max(var_22, (((max((var_8 < var_15), 182))))));
        var_23 = (max(var_23, (((max((arr_6 [i_2]), 0))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_24 *= (((arr_8 [i_2]) == (var_15 < 3560913330)));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_25 = (max((((-2147483647 - 1) ? (max(var_11, (arr_12 [i_4] [i_2]))) : (arr_12 [i_2] [i_2]))), ((max((arr_9 [i_3]), ((max(63, 223))))))));
                var_26 = ((-((max(var_15, 60113)))));
            }
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                var_27 = ((43 ? 465901152664413193 : 188));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_20 [i_7] [i_7] [i_5] [i_7] [i_2] = -var_6;
                            var_28 = (arr_17 [i_2] [i_7] [i_7] [i_2]);
                            var_29 = var_10;
                            var_30 += 255;
                        }
                    }
                }
                var_31 += (~1);
            }
            var_32 = (max(var_32, ((((((((13467475359968161775 ? 3560913330 : 10714597716784485223))))) / (max(var_1, 193)))))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_33 *= (0 == 0);
                arr_26 [i_9] [i_8] [i_2] [i_2] = (((var_4 % 65535) ? var_7 : ((1 ? 63146 : var_2))));
                var_34 &= (!var_10);
                var_35 -= -1;
            }
            var_36 = (max((((2137222226 ^ (arr_7 [i_2] [i_2])))), ((-((65529 ? (arr_22 [i_2] [i_8]) : (arr_10 [i_2])))))));
        }
    }
    #pragma endscop
}
