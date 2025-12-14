/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((min((((-(arr_0 [i_0])))), (var_7 / 19))) | 4294967293));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_0] = (((4294967284 >= (arr_7 [i_1 + 2] [i_4 - 1] [i_4]))) ? ((~((var_5 ? -119 : var_0)))) : (arr_7 [i_0] [i_1 - 1] [i_2]));
                                var_12 = ((+(((arr_12 [i_4] [i_4 + 2] [i_4] [i_4] [i_4 + 1]) ? (((arr_7 [i_0] [i_3] [i_0]) ? 4294967295 : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1]))) : (~var_0)))));
                            }
                        }
                    }
                    var_13 = (~(((arr_1 [i_1] [i_1 + 2]) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_1 [17] [i_1 + 2]))));
                    var_14 = (max(var_14, ((max(((((max(var_5, (arr_9 [i_2] [i_2] [20] [i_1] [i_1] [i_0])))) ? ((var_7 ? var_2 : (arr_3 [4] [i_1 + 2] [i_2]))) : (((~(arr_12 [i_0] [i_1] [i_2] [i_1] [i_2])))))), (((~(((arr_7 [i_2] [11] [i_0]) << (((arr_3 [0] [i_1 - 1] [i_2]) - 8882549665180739631))))))))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_15 += ((+(((arr_15 [i_0] [i_1 - 1] [i_2]) * (arr_8 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_2])))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((!(((min(1100237067, 1073479680))))));
                        var_16 = (max((max(var_2, (var_2 | 16653089617291631718))), (((!(arr_10 [i_0]))))));
                        var_17 = min(((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]))), (~var_2));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_18 = (arr_17 [i_0] [i_1] [i_1] [i_2] [i_6]);
                        var_19 = (-36 ? (~var_5) : (arr_6 [i_0] [i_2] [i_6]));
                        var_20 |= (-127 - 1);
                        var_21 = (var_4 > var_7);
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_22 += (arr_14 [i_1 - 1] [i_1 - 1] [i_7 - 1] [i_7 - 1]);

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_7] [i_8] = (arr_22 [i_1] [i_1]);
                            var_23 = ((4303205000453236233 / var_2) ? 13 : 122);
                        }
                        var_24 = (arr_21 [i_0] [i_1] [i_0] [i_7 - 1] [i_1 + 1]);
                    }
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_25 = var_5;
                        arr_33 [i_0] [i_9 + 3] [i_2] [i_9 - 1] [i_2] [16] &= var_4;
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_5));
    var_27 = (!var_10);
    #pragma endscop
}
