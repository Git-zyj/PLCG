/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 &= var_11;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (arr_8 [i_0] [11] [i_3] [1]);
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((((((arr_5 [i_0] [12] [i_0]) ? (arr_13 [i_0 + 3] [i_1 + 1] [i_2] [i_3]) : (arr_1 [i_3]))) & (((min((arr_0 [i_0]), 6218)))))) | -18446744073709551610);
                        var_20 = (max(var_20, var_3));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_21 = (max(var_21, (arr_3 [i_0 + 1])));
                        var_22 ^= (arr_17 [i_0 - 3] [i_1] [i_2] [i_1] [i_4] [i_4]);
                        var_23 = 10818;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_24 = (max((arr_0 [i_0 - 3]), ((-(arr_0 [i_0 + 1])))));
                        arr_20 [i_1] [i_0] |= ((~((0 & (arr_5 [i_1 + 1] [i_0 + 1] [i_0 - 2])))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_25 = (arr_13 [i_6] [i_2] [i_1] [4]);
                        arr_23 [i_6] [i_0 - 4] [i_1] [i_1 + 1] [i_0 - 4] [i_0] = (((~1185935608) ? ((((1914572624 - (arr_12 [5]))) + -1)) : ((((((arr_1 [i_0]) ? -18 : (arr_0 [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_26 = (min(((-(arr_3 [i_7 - 1]))), (max((arr_3 [i_7 - 1]), (arr_3 [i_7 + 2])))));
                                var_27 = ((27176 ? ((min((arr_25 [i_2] [i_7 + 1] [i_7] [i_8] [i_8 - 1]), ((65535 << (238 - 231)))))) : 46));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (var_10 ? (min(((var_7 ? var_1 : var_7)), 18446744073709551615)) : (((~var_14) ? 8127930660981009075 : var_11)));
    #pragma endscop
}
