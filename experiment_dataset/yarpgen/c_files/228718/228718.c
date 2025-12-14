/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = arr_3 [i_0] [i_0];
                var_21 = 34;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_22 = ((((((((arr_1 [i_0] [i_1]) & 33419))) ? (((arr_5 [i_1] [i_1] [i_1] [i_1]) ? 34 : (arr_2 [i_1] [i_1]))) : ((214 ? (arr_6 [i_0] [i_1] [i_1]) : (arr_6 [i_1] [i_1] [i_1]))))) + 188));
                    var_23 = (max(var_23, ((((arr_0 [i_0] [i_1]) ? (((((!(arr_6 [i_0] [i_0] [i_2]))) || (arr_3 [i_1 + 1] [i_0 - 1])))) : ((max((-22541 >= 4227858432), (arr_4 [i_2])))))))));
                    var_24 = (arr_6 [i_0] [i_1] [i_1]);
                    var_25 = ((188 ? ((1 ? ((43363 ? (arr_3 [i_1] [i_0]) : 42)) : 24191)) : (((((arr_4 [i_1]) + 2147483647)) >> (((max(39077, 16491404033220653546)) - 16491404033220653521))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_4] [i_4] [i_3] [i_1] [i_1] = ((((((arr_4 [i_1]) ? 1065353216 : 22526))) ? (((arr_13 [i_1] [i_3] [i_3]) << (((arr_0 [i_1] [i_0]) - 4265016470)))) : (arr_8 [i_0 - 1] [i_1])));
                                var_26 = (arr_6 [i_1] [i_4] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_27 = (arr_3 [i_6] [i_3]);
                                var_28 = ((var_2 ? ((~(arr_11 [i_0] [i_1]))) : (((!(arr_11 [i_0] [i_1]))))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_29 = (arr_28 [i_0 - 1] [i_1 + 2] [i_10 - 1]);
                                var_30 *= 6637496870395598936;
                                arr_30 [0] &= (((((~((1 ? 338180742 : (arr_10 [i_10] [12] [i_0] [12] [i_0])))))) ? (min(((1 * (arr_29 [i_0] [i_0] [i_0] [i_0]))), 3956786553)) : (arr_18 [14] [i_1] [i_9])));
                                var_31 = (var_10 || (arr_11 [i_9 - 2] [i_1]));
                                arr_31 [i_1] = ((148 - (((((arr_10 [i_10] [i_1] [i_8] [i_1] [i_0]) ? var_0 : (arr_18 [i_1] [i_1] [i_9]))) | ((var_5 ? (arr_7 [i_9] [i_8] [i_1] [i_0]) : 7))))));
                            }
                        }
                    }
                    var_32 = (arr_21 [i_8] [i_1] [i_0]);
                    var_33 = (max(var_33, (((2147483633 ? var_0 : 338180733)))));
                    var_34 += 1;
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_35 -= ((((arr_29 [i_0] [i_0] [i_11] [i_12]) ? (arr_9 [i_11] [i_11] [i_11]) : (arr_28 [i_0] [i_1] [i_11]))));
                            var_36 = (max(var_36, -24191));
                        }
                    }
                }
                var_37 -= ((3956786538 >> (((((arr_0 [i_0 - 1] [i_1 - 1]) & (arr_0 [i_0 + 1] [i_1 - 1]))) - 4265016478))));
            }
        }
    }
    var_38 = var_4;
    #pragma endscop
}
