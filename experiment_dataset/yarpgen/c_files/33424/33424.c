/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (min((min(((1792 ? 1792 : 1792)), 246)), var_13));
                    var_16 = ((var_5 ? ((min((arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 2]), var_2))) : var_0));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_17 = ((-var_3 ? (arr_1 [i_0 + 1]) : ((255 ? 14262574388541064024 : 1792))));
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = (var_14 - var_10);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [11] [3] = ((((arr_11 [i_0 - 3] [i_1] [i_2]) ? var_1 : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 3]))));
                        var_18 = (((((~0) ? ((var_2 ? var_1 : var_4)) : var_1)) + (255 != 58)));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, ((((((arr_4 [i_0] [i_2] [i_5]) * (arr_12 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0])))) * ((((var_13 ? var_1 : var_4)) / (((arr_15 [i_0] [i_0] [i_0] [i_2] [i_2]) * (arr_8 [i_0] [i_0] [i_2] [i_5])))))))));
                        var_20 = (((((var_5 != (arr_5 [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3])))) << ((var_2 % (arr_12 [i_0] [6] [6] [i_5] [i_2])))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_21 = ((((((var_2 ? (arr_16 [i_6]) : var_6)))) ^ (((arr_23 [i_6] [i_7] [i_7] [i_8]) | (arr_23 [i_6 + 2] [3] [i_8] [i_7])))));
                    arr_26 [20] [20] [i_8] [i_6] = (max((max((arr_20 [i_6 - 1] [i_6 - 1]), ((-1803 ? 2890803150701314439 : 1788)))), (((var_12 >= (~var_14))))));
                    arr_27 [i_6] [i_6] [i_8] [i_6] = (((arr_22 [i_8] [i_7] [i_6 - 1] [15]) && (-127 ^ -31447)));
                }
            }
        }
    }
    #pragma endscop
}
