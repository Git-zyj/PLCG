/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = 0;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_13 = (arr_5 [i_2]);
                                var_14 = ((~(!-3750)));
                                arr_10 [i_2] [i_1] [0] [1] [i_1] [i_3] [13] = (~-101);
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, ((max(var_3, (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5]))))));
                                var_16 = (((((~39043) ? (!3743) : (min((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5]), 18446744073709551609))))) ? -var_11 : (((~(arr_6 [i_2] [10] [i_2] [i_5])))));
                                arr_15 [i_2] [i_1] [i_2] [7] [i_5] = ((((((arr_6 [i_2] [i_1] [i_1] [1]) << (65533 - 253)))) <= (max((arr_14 [i_1] [i_3]), 0))));
                                var_17 = (max(var_17, var_4));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                            {
                                var_18 = (min(var_18, (((~(arr_17 [0] [0] [i_2] [i_1] [10]))))));
                                var_19 = 11091680139540475087;
                                var_20 = (arr_1 [i_0]);
                                var_21 &= var_4;
                                arr_19 [i_2] [i_1] [i_2] [i_1] = (max((arr_8 [i_0] [i_1] [i_1] [i_3] [i_2]), ((-(min(var_11, var_6))))));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                var_22 = ((((((!((min(65525, var_9))))))) + ((((var_11 ? (arr_16 [i_2] [i_1] [i_1] [i_2]) : (arr_13 [i_0] [i_2] [i_2] [i_0] [i_7] [i_2]))) | (((~(arr_18 [i_0] [i_1] [4] [10] [4]))))))));
                                var_23 = (min(var_23, ((max((~65535), -3744)))));
                                var_24 = (arr_21 [i_0] [0] [i_1] [3] [i_3] [i_3] [i_2]);
                                arr_22 [i_0] [i_2] = (!var_5);
                            }
                        }
                    }
                }
                arr_23 [i_0] = (min(16938450648051771684, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                var_25 *= (min((arr_11 [i_0] [i_0] [11] [i_1] [13] [i_1]), ((((((-3747 + 2147483647) >> (-775591505 + 775591512)))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [i_1]) : ((-642122068 ? -3719 : 15))))));
                var_26 = (((arr_21 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1]) ^ var_9));
            }
        }
    }
    var_27 = var_9;
    var_28 = (max(var_28, (((~(~var_3))))));
    var_29 = var_7;
    #pragma endscop
}
