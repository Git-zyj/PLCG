/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = ((~(max(var_0, var_13))));
    var_17 = (max(var_17, -43));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 &= ((((((arr_2 [i_2 - 3] [i_2 - 3] [i_2 - 3]) ? (arr_4 [i_2 - 3] [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? ((14063901023192872286 ? (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 3]) : (arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 2]))) : (var_13 <= var_14)));
                    var_19 = (((arr_1 [i_0]) / (((!var_11) ? (arr_2 [i_1 + 2] [i_1 + 1] [i_2 - 2]) : -var_8))));
                    var_20 = (((((var_9 < (((38 ? var_14 : 18)))))) < (((!(arr_2 [i_0] [i_2 + 1] [i_1 + 2]))))));
                    var_21 = (max(0, ((14063901023192872263 ? ((46 ? 14063901023192872298 : -73)) : 4047175050177797192))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 ^= ((((((((70368744177663 < (arr_6 [i_5]))))) < ((var_9 | (arr_8 [i_7] [i_6] [i_4]))))) ? ((((arr_16 [i_3] [i_7 + 2] [i_3] [i_6] [i_7 + 3]) < (arr_17 [i_3] [i_7 - 1] [i_5] [i_6] [i_7] [i_6] [i_7])))) : ((((118 ? (arr_9 [6] [i_5] [i_4]) : var_2))))));
                                var_23 = (min((((arr_17 [i_3] [i_4] [i_5] [i_6] [i_7 + 4] [15] [i_4]) | (arr_16 [15] [i_6] [i_5] [13] [i_7 - 1]))), ((min(var_7, var_14)))));
                            }
                        }
                    }
                    arr_18 [i_5] = ((((max(((var_5 ? var_4 : 3101313821)), (max((arr_6 [i_4]), (arr_11 [i_5])))))) ? (((min(var_1, var_1)))) : (var_3 * var_11)));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_24 *= (((-12 ? 1 : 1173374817)) | (arr_20 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 - 2]));
                                var_25 *= -3666738902;
                                var_26 *= (arr_19 [i_3] [i_4] [i_5] [i_8 - 2]);
                                var_27 = ((((((arr_13 [i_8 - 1] [i_5] [i_5]) ? (arr_8 [i_8 - 2] [i_8 + 1] [i_8 - 2]) : var_8))) + (arr_20 [i_3] [i_4] [19] [i_8] [i_4] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
