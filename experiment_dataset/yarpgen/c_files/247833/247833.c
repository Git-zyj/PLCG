/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = ((((-(arr_0 [1] [i_0]))) + ((var_5 ? var_16 : var_4))));
        var_21 = (((var_8 < 2139095040) ? ((((((((arr_2 [i_0] [i_0]) + 2147483647)) << 1))) ? (!var_11) : (arr_2 [i_0] [i_0]))) : (((!(((arr_0 [12] [i_0]) || var_16)))))));
        var_22 = var_1;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((var_12 | (arr_3 [i_1])));
        arr_7 [i_1] = ((((-(min(var_11, 528482304))))) > (((arr_3 [i_1]) * ((var_0 ^ (arr_2 [i_1] [i_1]))))));
        arr_8 [i_1] = (((max((arr_5 [i_1]), (arr_2 [i_1] [i_1]))) % ((((var_14 < (arr_3 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_23 -= ((((((var_6 && (((var_10 ? 1 : var_7))))))) | (arr_11 [i_2])));
        var_24 += (arr_9 [i_2] [i_2]);

        /* vectorizable */
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            var_25 = (var_0 >> 0);
            var_26 = (((arr_12 [i_3] [i_3 - 3]) >= (arr_12 [i_3 + 1] [i_3 + 1])));

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                var_27 = (arr_14 [i_2] [i_4] [i_3 + 2]);
                arr_17 [19] [3] = (arr_9 [i_3 - 3] [i_4]);
                var_28 = ((!(arr_16 [i_3 - 1])));
                arr_18 [i_2] [i_2] [i_3] [i_2] = (arr_12 [i_3 - 2] [i_3]);
                var_29 = (arr_9 [i_3] [i_3 - 2]);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_30 = (((arr_22 [i_7]) < (arr_21 [i_3] [i_3 - 3] [i_6 - 1])));
                            arr_26 [i_7] [i_7] [i_5] [i_7] [i_2] = ((var_13 ? var_5 : var_10));
                            arr_27 [1] [i_2] [i_2] [i_2] [i_7] [i_7] = (!var_5);
                        }
                    }
                }
                var_31 = var_4;
                var_32 = ((var_12 & (((0 ? var_7 : var_13)))));
            }
        }
        arr_28 [i_2] = (((((arr_20 [i_2] [i_2] [i_2]) && (arr_20 [i_2] [i_2] [13]))) ? (!var_0) : (arr_20 [i_2] [19] [i_2])));
    }
    var_33 &= 1;
    var_34 = var_1;
    var_35 = min(((max(var_13, var_4))), ((max(var_15, var_18))));
    #pragma endscop
}
