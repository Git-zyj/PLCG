/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = (min(((((arr_7 [i_0] [8] [i_2] [i_0 - 3]) == 0))), (min((arr_7 [i_0] [i_1] [i_2] [i_0 - 1]), (arr_0 [i_0 + 1])))));
                        arr_12 [i_3] [i_3] [i_3] [i_0] [i_3] [7] = ((var_4 * ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3]) == ((((arr_0 [i_2]) ? var_11 : 1))))))));
                        var_20 ^= ((1 > 17385) >= ((9223372036854775807 ? 1 : 0)));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 -= ((((min((((arr_13 [i_5 + 2] [1] [i_2] [1] [i_0 + 2]) ^ var_9)), -3))) / (arr_7 [i_0] [6] [i_2] [i_4])));
                                var_22 = (arr_5 [i_4] [i_2] [i_1]);
                                var_23 = (min(4398046511103, ((2161275638 ? (arr_10 [i_0] [i_0 - 2] [i_4 + 1] [i_4]) : (arr_10 [i_0] [i_0 - 2] [i_4 - 1] [i_4 + 1])))));
                            }
                        }
                    }
                    var_24 = (min(var_24, (arr_13 [8] [6] [i_1] [8] [i_2])));
                    var_25 |= ((((((arr_8 [10] [i_1] [i_0] [i_2] [i_2]) ? (arr_10 [2] [i_0 + 1] [i_0 - 1] [i_0 - 2]) : (arr_8 [4] [i_1] [i_0] [i_0] [4])))) ? (((((min(-299788334, 0))) ? ((min(0, 44607))) : 1))) : var_10));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_7] = (-((min(1, (arr_13 [i_7 - 1] [i_0] [i_7 - 1] [i_0] [i_0 - 3])))));
                                var_26 = (((var_15 / 2147483647) * (((var_2 ? (((arr_18 [i_7] [i_1]) ? (arr_18 [i_0] [i_6]) : 1)) : (arr_19 [i_0] [i_0] [0] [i_7]))))));
                                var_27 = (arr_17 [i_0] [i_0] [i_0] [i_0]);
                                var_28 = (!((max((min((arr_4 [i_2] [i_1] [i_0]), 47842)), -18692))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, ((min((((((min(1, 0))) * var_1))), ((((max(var_5, var_8))) ? (-6907199510027611677 | 17694) : var_8)))))));
    #pragma endscop
}
