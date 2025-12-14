/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((-((-var_1 & (arr_5 [i_1 - 3] [i_1 - 3])))));
                arr_7 [i_0] = (-((var_11 ? (arr_0 [i_0] [i_1]) : ((((arr_3 [12]) & var_8))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (!540431955284459520);
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] [i_2] = (min((min(((var_1 | (arr_0 [i_0] [i_1]))), ((min((arr_2 [i_3] [i_1 - 2]), (arr_12 [i_2] [i_1 - 1] [i_1] [i_2] [i_2] [i_3])))))), var_4));
                        }
                    }
                }
                var_15 = (min(var_15, -var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            {
                var_16 ^= ((((((arr_16 [10] [10]) ^ (~var_1)))) ? (~16383) : var_1));

                /* vectorizable */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    arr_22 [i_4] [i_4] [20] [i_4] = ((((!(arr_21 [i_4] [i_4] [i_6]))) ? (arr_14 [16] [16]) : ((-14 ? (arr_18 [i_4]) : var_8))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] = 19202;
                                arr_29 [i_7] [i_5 - 1] [16] [i_7 + 1] [i_8] = (((~var_11) && (arr_14 [i_4] [i_5 + 1])));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_35 [i_4 - 2] [i_5] [i_9] [i_10] = (var_10 & (((((!(arr_33 [i_4 - 3] [i_5 - 1] [i_9] [i_10] [i_9] [i_9])))) | 48208)));
                        var_17 = (max(var_17, (~var_9)));
                    }
                    arr_36 [i_5] = ((((max((arr_34 [i_4] [i_4] [i_4] [i_5 - 1] [i_9]), var_10)) ^ var_0)));
                    arr_37 [i_5] [19] [i_9] [i_4] = (min(var_0, (min(17327, ((var_7 ? var_6 : var_10))))));
                }
            }
        }
    }
    var_18 = (min(var_0, (var_0 + var_2)));
    #pragma endscop
}
