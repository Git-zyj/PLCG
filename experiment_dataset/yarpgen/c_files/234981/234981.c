/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((min(6064490390806427779, 31)), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((var_4 ? ((max(var_8, (arr_1 [i_0] [i_0])))) : var_9)), (((((-(arr_0 [i_0])))) ? var_10 : var_8))));
                arr_6 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_14 = ((11062239951569725408 >> (20756 - 20746)));

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_15 = ((~((var_1 ? var_3 : (arr_7 [i_2 - 1])))));
                        arr_16 [i_2] [i_2] [10] [i_4] [i_2] [i_5] |= ((((min((arr_15 [6] [6] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), var_12))) ? ((((arr_15 [10] [i_5 + 3] [i_5] [20] [i_5] [2]) ^ (arr_15 [18] [i_5] [i_5] [i_5 + 3] [12] [i_5])))) : (max(12382253682903123858, 1))));
                    }
                    var_16 = (arr_10 [i_4] [18] [i_2]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((+((((((arr_9 [20] [20]) || var_9)) && (arr_17 [i_2 - 1] [0] [i_4] [5] [5])))))))));
                                var_18 = (max(var_18, (((((((arr_14 [10] [8] [1] [i_6]) ^ var_0))) | (0 & var_3))))));
                                arr_23 [i_2] [10] [i_7] = (((arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) | var_6));
                                var_19 = (((~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_7] [i_2]))));
                                var_20 = (max(var_20, (((~(((arr_22 [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_22 [i_7] [i_7] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_22 [i_7] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (6064490390806427761 ^ 25706);
    #pragma endscop
}
