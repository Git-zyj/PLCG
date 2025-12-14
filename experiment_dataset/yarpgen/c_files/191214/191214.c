/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (var_8 ? (min(((var_2 << (var_8 - 3703876540502053345))), (max(1040187392, 3254779904)))) : var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = var_8;
                    arr_8 [i_0] = ((min((arr_0 [i_0]), 2779979752)));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                        var_17 += ((((min(2227357653, -2002346044423070988))) ? (max((arr_6 [i_0] [i_1] [i_2] [i_0]), var_7)) : (((arr_4 [i_1 + 2] [i_1 + 1] [i_2 - 4]) ? (arr_4 [i_0] [i_1 + 2] [i_2 - 3]) : (arr_6 [i_0] [i_1] [i_0] [i_3 - 1])))));
                        arr_12 [i_0] = (((arr_10 [i_0]) ? ((((arr_4 [i_3 + 1] [i_1 + 2] [4]) % var_6))) : ((-3941729884252752656 ? (2779979769 == var_4) : ((var_3 ? var_6 : (arr_1 [i_3])))))));
                        var_18 *= (max((arr_1 [i_1 + 2]), ((max((((arr_4 [i_0] [i_2] [i_2]) + var_1)), (max(var_6, var_6)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 ^= min((((3254779904 >= 2779979752) ? 5695611994732474640 : (~var_0))), (max(((((arr_14 [i_4] [i_2] [i_1] [i_0]) >= var_9))), (min((arr_15 [i_5] [i_4] [i_2] [i_1 + 1] [0]), var_13)))));
                                var_20 = ((var_2 ? (max(var_4, (max(var_2, 148165379)))) : ((~(max(1040187386, var_1))))));
                                arr_19 [i_0] [i_0] [i_0] [1] [i_0] = min((((arr_4 [i_0] [i_0] [i_1 + 2]) ? 3254779906 : (arr_4 [i_0] [i_1 + 2] [i_1 - 1]))), (max((arr_4 [i_2] [i_1] [i_1 - 1]), var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
