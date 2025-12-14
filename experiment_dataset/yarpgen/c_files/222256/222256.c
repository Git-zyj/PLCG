/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4029579360;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0] [i_0]) <= (((arr_3 [1]) ? (arr_3 [1]) : var_3))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    var_21 = (((0 ? var_16 : (arr_4 [8] [8] [i_2]))));
                    arr_10 [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_1 - 2] [i_0 + 1]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 1])));
                    var_22 &= ((-30718 ? (arr_0 [i_0]) : (arr_3 [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = 4029579360;
                                arr_15 [i_0] = var_12;
                                var_24 += (((arr_6 [i_4]) && (arr_3 [i_3])));
                                var_25 = ((((arr_12 [i_4] [i_2]) * (arr_7 [i_0]))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (arr_12 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = (arr_22 [i_5 + 1] [i_6] [i_5 - 1] [i_5 + 1]);
                    var_28 = (arr_20 [i_5] [i_5] [i_7]);
                }
            }
        }
    }
    var_29 *= (min(var_1, var_13));
    var_30 = var_12;
    #pragma endscop
}
