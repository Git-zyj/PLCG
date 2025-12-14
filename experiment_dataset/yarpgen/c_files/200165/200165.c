/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = -67;
        var_19 = ((~((~(arr_0 [i_0])))));
        var_20 = ((var_13 ? (arr_3 [i_0]) : (arr_3 [i_0])));
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = -2048;
            var_23 = ((+(((arr_6 [i_1]) ? (arr_2 [i_1]) : var_17))));
            var_24 = (min(1, -120));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_25 = (((((arr_1 [i_2]) ? (arr_4 [i_1] [i_1]) : (arr_2 [i_4]))) & (arr_17 [i_5] [i_2] [7] [7] [i_5])));
                            var_26 = 26190;
                            arr_20 [i_5] [i_4] = var_15;
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_27 = (min(var_27, ((((((~(arr_22 [i_1] [i_6])))) >= ((var_10 ? (((max((arr_12 [i_1] [i_6]), (arr_18 [i_6] [i_1]))))) : ((var_13 % (arr_18 [i_1] [i_1]))))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_28 *= (((arr_15 [i_8] [5] [5] [i_8] [i_1]) ^ (arr_19 [i_6] [i_7] [i_7] [i_8] [i_6])));
                        var_29 *= 45674;
                    }
                }
            }
            var_30 = var_3;
        }
        arr_29 [i_1] = (((((max(-87, (arr_11 [i_1] [i_1] [i_1]))))) ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : 1));
        arr_30 [i_1] [i_1] = var_5;
        arr_31 [i_1] = ((~(((arr_12 [i_1] [i_1]) ? (arr_18 [i_1] [i_1]) : var_3))));
        arr_32 [i_1] [i_1] = ((min((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_1] [i_1]))));
    }
    var_31 = 65535;
    var_32 = ((var_3 || (((var_15 ? var_8 : (var_7 + var_2))))));
    #pragma endscop
}
