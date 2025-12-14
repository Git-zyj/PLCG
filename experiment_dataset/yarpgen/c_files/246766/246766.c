/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 ^= ((~(~2655070299)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_16 = (((arr_0 [i_0 - 2] [i_0 + 1]) ^ var_12));
                        arr_12 [i_1] [i_1] [i_1] [i_3] = (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 2]);
                        var_17 = ((1 ? var_8 : var_3));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((((((~(!var_10))) + 2147483647)) >> ((((var_1 ? ((2701155156083480535 ? 33554431 : 16106127360)) : (15745588917626071080 || 606825))) - 33554413))));
                        var_19 = (((var_1 + 2147483647) >> (((!((((arr_0 [i_0] [i_0]) ? var_11 : 2701155156083480535))))))));
                        arr_16 [i_1] = ((!((min((arr_0 [i_1] [i_4]), (arr_0 [i_1] [i_4]))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_1] [i_0 - 3] = (((arr_9 [i_5]) ^ (((var_13 <= (arr_7 [i_0 - 4] [i_1] [i_4] [i_1]))))));
                            var_20 = 102;
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_21 *= ((((min((arr_2 [2]), (arr_11 [i_0] [i_2] [i_2])))) ? ((-(arr_11 [i_0 + 1] [i_0 + 1] [i_2]))) : (max((arr_2 [1]), (arr_11 [i_1] [i_1] [i_2])))));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0 - 3] [i_0] [i_0] [i_1] = (arr_18 [i_0] [i_0] [i_2] [i_0 - 3] [i_2]);
                            var_22 = (max(var_22, (((((!2701155156083480548) ? (arr_10 [i_6] [i_6] [i_1] [i_1]) : (((!(arr_17 [i_0] [i_1] [i_1] [i_1] [i_0]))))))))));
                            var_23 = (arr_9 [i_2]);
                            arr_27 [i_1] = var_14;
                            arr_28 [i_1] [i_1] = (((919149915 / ((511 ? (arr_22 [i_7] [i_1] [i_2] [i_1] [i_0]) : (arr_23 [i_0] [i_1] [i_2] [i_6] [i_7]))))));
                        }
                        var_24 ^= ((arr_7 [i_0 - 2] [i_0 - 2] [i_1] [4]) ? (((!(arr_15 [i_0] [i_0] [i_6] [i_0] [i_1] [i_2])))) : 1);
                        var_25 = (((--9) ? (var_12 / var_2) : ((min(((-1212452675978352470 ? -117 : 1)), (((arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_6]) ? 7 : -2)))))));
                        var_26 = (((((((arr_21 [i_0] [i_0] [i_2] [i_6]) ? var_9 : var_6)))) ? (((((3233 ? (arr_21 [i_0] [i_1] [i_0] [i_6]) : var_8))) ? 4286834819 : (arr_13 [i_0 - 4] [i_0 - 4]))) : var_10));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1] = (min((((((max(var_3, (arr_10 [i_0] [i_1] [i_2] [i_8])))) ? ((((arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_2] [i_1] [i_8]) ^ var_1))) : (~var_12)))), (((((var_3 ? 22393 : var_5))) ? var_3 : (arr_14 [i_1] [i_1] [i_1])))));
                        var_27 ^= (arr_13 [i_0 - 1] [i_1]);
                    }
                }
            }
        }
    }
    var_28 = var_8;
    #pragma endscop
}
