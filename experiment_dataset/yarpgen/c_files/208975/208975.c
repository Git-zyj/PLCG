/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((~((max(var_5, var_5))))))));
                arr_8 [i_1] = (((var_5 || var_1) ? ((max((arr_3 [i_0 - 1] [18]), var_11))) : (max((arr_0 [i_1]), var_0))));
                arr_9 [i_0] [i_0] |= ((((((-2147483647 - 1) ? ((var_13 ? 1 : 1)) : var_7))) & (min(4294967295, 1))));
                var_17 = (max((min(var_7, (arr_3 [i_0 - 1] [i_0 - 1]))), ((((arr_4 [i_0 - 1]) % var_7)))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_18 |= var_8;
                    var_19 -= var_8;
                    var_20 += var_10;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_0]);
                                var_22 = ((((max((((arr_0 [i_0]) ? (arr_19 [i_5]) : 1)), (~1)))) || (((1 ? var_3 : ((12 ? 235 : 4294967278)))))));
                                arr_22 [i_5] = (min((~1), (((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_18 [i_0] [i_0 - 1] [i_5] [i_5])))));
                            }
                        }
                    }
                    var_23 = ((((-26477 ? var_15 : ((65535 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_4 [i_1])))))) ? var_7 : (var_6 - var_13));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = ((~((1 ? (arr_14 [i_0 - 1] [i_6 - 1]) : 2424506995))));
                                var_25 = (((((arr_25 [i_0] [i_6 + 1] [i_7] [i_7] [i_0]) == 23)) ? var_3 : (((var_11 && (arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_3]))))));
                            }
                        }
                    }
                    var_26 = (min(var_26, 1));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_29 [i_8] = 1;
                    var_27 = (min(var_27, (((22 >> (-15 + 19))))));
                    var_28 &= ((24528 || 24534) - var_14);
                    arr_30 [i_1] [14] &= var_12;

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_0] [i_8] = (arr_33 [i_1] [i_1] [6]);
                        arr_35 [i_8] [i_9] [i_9] [i_8] [i_1] [i_8] = 1;
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0 - 1] [i_8] = (min(2147483647, 255));
                        var_29 = var_8;
                    }
                }
            }
        }
    }
    var_30 = (min((((!((max(var_8, -1)))))), var_8));
    var_31 = ((~(((var_13 && (((var_11 ? var_3 : var_10))))))));
    var_32 ^= (max((((~65515) ? (max(1, -5286250243767744981)) : (((max(1, var_10)))))), (1 || 1)));
    #pragma endscop
}
