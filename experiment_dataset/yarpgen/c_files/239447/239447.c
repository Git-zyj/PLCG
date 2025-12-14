/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_10 = (((var_3 ? 113 : (arr_1 [i_0 + 2]))));
                            arr_12 [i_3] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (arr_7 [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_11 = (((arr_1 [i_4 + 2]) ? (min((max((arr_4 [i_5]), var_4)), (123 + var_2))) : var_1));
                            var_12 = ((-263274248 / -1673929705) - var_8);
                        }
                    }
                }
                arr_18 [i_0] = (((arr_14 [i_0 + 2]) >= (max((arr_0 [i_0]), ((max(var_3, (arr_15 [i_0] [i_0] [i_1] [i_1 + 1] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_13 ^= var_2;
                            var_14 = ((~(max((min(var_9, var_2)), (var_9 ^ var_6)))));
                            var_15 = (max(((-1874680060253296712 ? (max(var_8, 6935382410731782516)) : -21659)), 6935382410731782524));
                            var_16 = ((max((arr_10 [i_6] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1]), (arr_10 [i_7] [i_7] [i_1 + 2] [i_1 - 2] [i_1] [i_1]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min(-4985059568101987806, 45)))));
                                var_18 = var_0;
                                arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (((((-2892453547173936187 ? 1554614909 : -1073741824))) ? (max(var_0, (arr_34 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 2]))) : ((max(var_5, (arr_27 [i_12 - 3]))))));
                                var_19 = var_0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_43 [i_8] [i_14] [i_8] [i_8] [i_8] = (max((arr_5 [i_13 + 2] [i_13 + 3] [i_13 + 3]), (((arr_5 [i_13 + 2] [i_13 + 3] [i_13 + 2]) ^ (arr_5 [i_13 + 3] [i_13 + 1] [i_13 + 1])))));
                            arr_44 [i_14] [i_9] = (max((arr_23 [i_14 + 3] [i_13 + 2]), ((((arr_41 [i_9] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_14]) ? (arr_41 [i_9] [i_13] [i_13 + 2] [i_14 - 2] [i_14 + 2]) : var_2)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((max(var_3, var_8)) <= (((11 ? 3394842570 : -2052)))))) >> (!var_5)));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 3; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 13;i_17 += 1)
            {
                {
                    arr_55 [i_15] [i_17] [i_17] [i_15] = (min((arr_21 [i_15] [i_15] [i_16 - 3] [i_16 - 3]), ((max((min(169, var_4)), (arr_3 [i_16]))))));
                    arr_56 [i_17] [i_17] [i_15] = ((((max((arr_8 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 - 2]), (arr_8 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2]))))) <= (min(-19987, (var_7 | var_4))));
                    var_21 = ((~(arr_4 [i_17 - 1])));
                    var_22 = (min(var_22, ((min((((1673929705 ? -21663 : 65082))), 900124736)))));
                    var_23 ^= (min(-2052, 21638));
                }
            }
        }
    }
    #pragma endscop
}
