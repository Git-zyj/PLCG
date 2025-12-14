/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -2674393435617582711;
    var_12 = (min(var_12, (((var_10 ? ((min((var_4 & var_5), (!var_2)))) : var_10)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = var_6;
        var_14 = (((max(-32752, 2674393435617582711)) >> ((max(var_2, (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = arr_8 [i_0] [i_0];
                    var_16 = (((((~(arr_1 [i_0])))) ? ((max(var_4, 124))) : 26));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_17 = var_6;
                        var_18 = ((!((min((arr_10 [i_0] [i_1] [12] [i_2] [i_1] [i_3]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_19 = -1371474658;
                        var_20 = var_2;
                    }
                    arr_12 [i_0] [i_0] [i_2 + 3] [i_0] = ((-(max(9099372142615030645, 70334384439296))));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((arr_7 [i_2] [i_2 + 1] [i_4 - 1] [i_2]) >= (arr_7 [i_2] [i_2 + 2] [i_4 + 1] [i_4])))));
                        var_22 = (max(var_22, (((var_10 ? (!9625333925321189808) : (arr_7 [i_4 + 3] [i_2 + 2] [i_1] [i_0]))))));
                        arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = 4127012315;
                        var_23 = (((511 ? 1371474658 : var_2)));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_24 ^= ((!(arr_18 [i_5 + 1])));
        var_25 *= ((!((max((arr_19 [i_5 - 1]), var_6)))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_26 ^= var_3;
        var_27 = (min(var_27, ((((!9099372142615030645) ? ((928225308 ? 51973 : (arr_1 [2]))) : -28151)))));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_28 = (!9347371931094520971);
        var_29 = 255;
        var_30 = (max(1, 70334384439296));
        arr_25 [1] = var_7;
        var_31 = ((-((-(arr_0 [i_7 + 1])))));
    }
    #pragma endscop
}
