/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [i_0 + 3])));
        var_14 = (max(var_14, (arr_0 [i_0])));
        var_15 ^= 195666655;
        var_16 *= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = arr_7 [i_3];
                            var_17 *= (((arr_13 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0] [16]) ? (arr_11 [i_1] [i_1] [i_2] [i_1] [i_0]) : (max(-3637973062567514598, 0))));
                            var_18 *= (arr_0 [i_4]);
                            arr_15 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_3] [i_2] = (min((arr_8 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_4]), (max((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 - 1]), (arr_5 [i_1] [i_1] [i_3 + 2])))));
                        }
                        arr_16 [i_2] [i_1] [i_1] [i_3] = (arr_1 [i_0 - 1]);
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_2] [i_2] [i_2] = -237;
                        arr_20 [i_2] [i_1] [i_1] = max((arr_12 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_2 + 1] [i_2 - 1] [i_5 + 2]), (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1]));
                        var_19 += ((max((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_5] [i_5 + 2] [i_1]), (arr_8 [i_0] [i_0 + 3] [i_1] [i_2] [i_2] [i_5]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_2] [i_2] = (((arr_7 [i_2 + 1]) ? (arr_9 [i_2] [i_2]) : (arr_11 [i_0 + 3] [i_1] [i_2] [i_6] [i_6])));
                        arr_24 [i_2] [i_2] [i_1] [i_2] [i_2] = (((arr_10 [i_0 + 1] [i_2] [i_0 + 3] [i_0 + 2] [i_0 + 1]) ? 233 : ((17623539475747966714 ? (arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6]) : 30095))));
                        var_20 ^= 80;
                        var_21 = (max(var_21, (arr_6 [i_1] [i_1] [i_1] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_2] [i_7] = (((arr_9 [i_2] [i_2]) ? (arr_21 [i_7] [i_2 - 1] [i_0 + 2]) : (-9223372036854775807 - 1)));
                        var_22 = (arr_22 [i_2 + 1] [i_2] [i_2] [i_0]);
                    }
                    arr_29 [i_0] [i_1] [i_1] [i_2] |= ((246 ? (arr_2 [i_0] [i_0] [i_0 + 3]) : (max((min(17623539475747966721, (arr_1 [i_0 + 1]))), 579))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_23 = (arr_33 [i_8]);
        var_24 = ((min((arr_30 [i_8]), (arr_31 [i_8]))));
    }
    #pragma endscop
}
