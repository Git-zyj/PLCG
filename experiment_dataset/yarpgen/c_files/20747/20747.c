/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max((((var_9 != var_2) / var_8)), var_6)))));
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -55070;
        var_12 -= (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = ((var_4 ? var_3 : 10437));
        arr_7 [i_1] [i_1] = ((!(((arr_5 [i_1]) <= 55070))));
        arr_8 [0] [0] = (var_0 || 0);
        var_14 ^= ((arr_6 [i_1 + 1] [i_1 + 2]) ? -83 : 0);
        var_15 = (-(arr_5 [i_1 + 1]));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3 - 2] [i_4] [11] = ((((var_4 | (arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 2]))) < (arr_9 [i_3] [i_4 - 1])));
                    var_16 ^= 50;
                    arr_16 [i_2] [i_3] [i_3] [i_4 - 1] = var_7;
                    var_17 = (min((max(-103, 9174746906027161152)), ((max(93, 18319)))));
                }
            }
        }
        arr_17 [1] = ((((arr_9 [i_2 + 2] [i_2 - 2]) ? (((arr_13 [11] [i_2] [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2]))) : ((var_4 ? 6026013598201419846 : 58185)))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, ((((min((arr_22 [i_2 - 1]), (arr_11 [i_2 + 1]))) ^ 1)))));
                    arr_24 [i_2] [i_6 + 1] [i_2] [i_5] = ((((max((arr_18 [i_5 + 1]), (arr_18 [i_5 + 2])))) ? 2973846007886584579 : ((max(55081, -18320)))));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_28 [i_2] [i_7] [i_5] [i_6] [i_7] [i_7] &= (arr_18 [i_5]);
                        var_19 *= var_1;
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_20 = (max(var_20, ((-1165244658309732679 ? ((4562225609592489709 / (arr_23 [i_2]))) : (((arr_26 [i_5 + 1] [i_5] [i_5 + 2]) ? var_8 : (arr_26 [i_5 + 2] [i_5] [i_5 + 1])))))));
                        arr_33 [i_5] [i_5] [i_6] [i_8] = (((max((((arr_19 [i_2]) - 67092480)), (arr_30 [i_6 - 1] [i_5 + 1] [i_5 + 1] [i_8] [i_2] [i_2 + 2]))) * ((min((((arr_31 [i_5] [i_5] [i_5] [i_5]) ? 65535 : 18348)), (58185 != 9223372036854775807))))));
                        arr_34 [i_2] [i_2] [i_5] [i_8] = 6;
                    }
                }
            }
        }
        var_21 = (max(var_21, 1));
        arr_35 [i_2] = (((((((1 ? -26355 : (-9223372036854775807 - 1)))) ? (arr_11 [i_2]) : 23)) > ((((max(var_1, (arr_29 [i_2] [i_2])))) ? ((0 ? 1353547388549677851 : 1)) : (((arr_11 [i_2]) ? 5575530014675461684 : -1))))));
    }
    var_22 = var_7;
    #pragma endscop
}
