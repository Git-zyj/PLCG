/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = ((((max((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 - 2] [1])))) ? (((~190) & ((var_12 | (arr_2 [0] [1]))))) : ((((arr_0 [i_0 - 1] [i_0 - 2]) ? (var_3 || var_3) : (!16327460081719613063))))));
        var_14 *= (((((55976 ^ (((arr_2 [i_0] [4]) ? 25756 : (arr_0 [i_0] [4])))))) & (0 | 4294967295)));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [0] = var_0;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] = ((2119283991989938557 ? ((((((-5605 ? -32 : -846485344)) < (arr_3 [i_1 - 1]))))) : 4294967291));
            arr_11 [i_1] = max(var_8, (arr_3 [1]));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_17 [1] [i_3] [i_3] [i_4] = (min(((min((arr_6 [i_1] [i_3 + 2] [i_3]), (((arr_0 [19] [i_2]) & 16413))))), (max(var_6, (arr_13 [i_1] [i_3] [i_4])))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_20 [15] [i_2] [i_3] [4] [i_3] [5] = (max((arr_12 [20] [i_3]), (((17741868424618443938 || (arr_16 [i_4 + 1] [3] [i_4 + 1] [16]))))));
                            arr_21 [14] [i_2] [i_3] [i_3] [i_5] [i_2] = (max((max((arr_18 [i_1] [i_1] [i_1 - 3] [i_3 + 2] [i_3]), (arr_14 [1]))), (var_3 > -10187)));
                            arr_22 [1] [10] [i_3] [i_5] = (arr_4 [i_1] [2]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_26 [18] [i_2] [4] [1] [14] [i_2] [0] |= var_3;
                            arr_27 [i_3] [19] [i_3] [i_4] [1] = ((19 + (((((((arr_14 [i_4]) < -93))) == (arr_12 [i_1] [i_3]))))));
                            var_15 = (i_3 % 2 == 0) ? (((((min((arr_18 [i_3] [1] [11] [i_4 - 2] [i_3]), 1))) << (2119283991989938557 - 2119283991989938528)))) : (((((((min((arr_18 [i_3] [1] [11] [i_4 - 2] [i_3]), 1))) + 2147483647)) << (((2119283991989938557 - 2119283991989938528) - 29)))));
                        }
                        var_16 = (min(var_16, (((((-(arr_18 [18] [i_2] [12] [2] [i_2]))) | (((arr_18 [2] [2] [22] [i_2] [i_2]) ? 27 : -7)))))));

                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_17 = (((((arr_0 [i_4 + 1] [i_7 + 1]) >> (((arr_0 [i_4 + 1] [i_7 + 1]) - 513814044)))) >= (max(var_4, (arr_0 [i_4 - 1] [i_7 + 1])))));
                            var_18 = (min((~var_1), (var_8 ^ var_9)));
                            var_19 = var_7;
                        }
                    }
                }
            }
            arr_30 [12] = 1;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_40 [i_9] [6] [1] [i_8] [i_10] [22] = -1222180835;
                            arr_41 [i_10] |= ((~(arr_36 [7] [16] [16] [i_9] [i_9])));
                            var_20 = var_8;
                        }
                    }
                }
            }
        }
    }
    var_21 = (max((~var_5), var_6));
    var_22 = ((var_9 - (((1 ? var_5 : var_12)))));
    #pragma endscop
}
