/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((~-1643219818) << ((((((~(~var_15))) + 1234255295700890159)) - 16))));
        var_17 += ((((((!var_0) ? 3961373809 : -109))) / 6659419935703464580));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (6659419935703464575 > ((((~0) ? 0 : 3608721681))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_1] [i_4] [i_4 + 1] [i_1] = (var_10 % -32);
                                var_18 = max(-298503284, 9223372036854775807);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] [i_7] [i_3] [i_6 - 2] [i_3] = (max(((var_2 ? (arr_11 [i_7] [i_6 - 1]) : 11777)), (arr_15 [i_7] [i_6 - 1] [i_3] [4])));
                                arr_25 [i_7] [i_2] [i_3] [i_6] [i_3] = (((min(((var_4 ? (arr_12 [i_1] [i_1]) : 65535)), (~56863))) % (arr_21 [3] [3])));
                                arr_26 [i_1] [7] [i_7] = var_16;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_2] [i_2] [7] = (((arr_16 [i_1] [i_1] [i_3]) > ((min((-22 != 877), (arr_14 [i_3]))))));
                        arr_30 [i_1] [i_1] [i_8] [i_1] [i_3] [i_8] = 49154;
                        arr_31 [0] [i_3] = ((!(arr_22 [i_1] [i_2] [i_2] [i_2] [i_1])));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_1] [i_9] = (max((!32767), 8693));
                        var_19 += ((~(((arr_16 [i_3] [i_3] [i_2]) ? var_6 : var_16))));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_20 = ((max(var_14, ((2288603384616099952 ? 46911 : 18552)))));
                            arr_38 [i_1] [i_2] [13] [3] [6] = var_11;
                            var_21 -= (((arr_14 [i_3]) ^ ((~((var_6 ? -9223372036854775802 : (arr_37 [i_1] [i_1] [i_1] [i_9] [i_9] [i_9])))))));
                        }
                        arr_39 [i_2] [i_2] [i_9] = ((((!(arr_35 [i_2] [i_9]))) || var_5));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [i_2] [i_3] [i_11] [i_1] [i_2] = ((((((arr_9 [i_11]) - var_3))) ? (arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [i_11]) : ((max((arr_8 [i_1] [i_2] [i_1]), (arr_9 [i_11]))))));
                        var_22 = (max(var_22, var_8));
                        var_23 = 91;
                    }
                }
            }
        }
        arr_44 [i_1] &= (~52916);
        var_24 -= ((~((1 ? ((205 ? var_2 : 117)) : 0))));
    }
    var_25 ^= (32745 >> 1);
    #pragma endscop
}
