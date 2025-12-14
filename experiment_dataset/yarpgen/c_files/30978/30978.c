/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 &= (((max((((-(arr_0 [i_2])))), (~4624638789704443204))) - (((min(var_14, (arr_4 [i_0] [i_1] [i_0])))))));
                    var_17 |= (max(((~((((arr_1 [i_2]) <= (arr_0 [i_2])))))), ((((arr_5 [i_1 + 1] [i_2] [i_1 + 2]) >= (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_18 = (max((max(var_5, (arr_15 [i_3 + 3] [i_3 + 2] [i_5 + 1]))), (((var_1 ? var_13 : (var_13 + var_9))))));

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_19 *= 6203631927869891020;
                            var_20 = ((!(arr_17 [i_3] [i_5] [i_5])));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_21 *= (arr_8 [i_6]);
                            var_22 |= (((((max(-85, (arr_25 [i_8] [i_4] [i_4] [i_4] [i_3])))) && ((max((arr_24 [1] [i_5]), 4035225266123964416))))));
                        }
                        var_23 = (max((((arr_21 [i_5 - 1]) ? (arr_21 [i_5 - 1]) : (arr_18 [i_3 + 2] [i_5 - 1] [i_3] [i_6 + 1]))), (arr_18 [i_3 + 2] [i_5 + 1] [i_3] [i_6 - 1])));
                        var_24 = ((!((!((max(-8083054084245971458, (arr_22 [i_3] [i_3] [i_3] [i_3] [i_6 - 2]))))))));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_25 = ((((min(var_4, (arr_17 [i_3] [i_3 + 2] [i_3])) - (arr_14 [i_3 + 1])))));
                        var_26 = ((~((((arr_12 [i_4] [i_5] [i_9]) == ((((arr_12 [i_3] [i_3] [i_3]) && var_4))))))));
                        var_27 = ((((((((!(arr_13 [i_3] [i_3] [4])))) * (((!(arr_25 [i_3] [i_4] [i_3] [3] [i_9]))))))) ? (min(var_2, (((~(arr_20 [i_3] [i_3] [i_3] [i_3])))))) : (arr_18 [i_5 - 1] [i_4] [i_3] [i_9])));
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        var_28 ^= ((-(max(((-5876121215055674328 ? (arr_15 [i_3] [i_5] [9]) : 1)), 56))));

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_29 |= arr_25 [2] [i_4] [i_5] [i_5] [i_11];
                            var_30 = (((((((min(81, 1))) >= (var_6 >> 3))))) - (max((arr_17 [i_10 + 1] [i_5 + 2] [i_3 + 3]), var_13)));
                            var_31 = (~17179860992);
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            var_32 *= ((-var_9 - ((var_7 ? (arr_9 [i_3]) : 0))));
                            var_33 |= (!29763);
                        }
                        var_34 = (max(var_34, (((max(0, 18446744073709551615))))));
                        var_35 -= max((max(((-(arr_9 [i_10]))), -var_9)), (((min(var_2, var_1)) << (((arr_9 [i_3]) - 3558370254768095350)))));
                    }

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_36 = ((-((((~var_1) > (!var_13))))));
                        var_37 = ((arr_25 [11] [i_3] [i_4] [i_5] [i_13]) >= (((arr_37 [i_3] [i_3 + 2] [3] [i_5 + 2] [i_5 + 2]) % var_4)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
