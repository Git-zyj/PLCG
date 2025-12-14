/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [0] = ((((((min(4681669922405750377, (arr_0 [i_0]))) <= (~26634)))) ^ (max(38902, var_15))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 |= (arr_5 [i_0] [14]);
            var_19 *= (max((((17812262332210971885 >= -4681669922405750376) << (127 - 107))), (!-4681669922405750377)));
            arr_6 [i_0] [i_1] = 18446744073709551615;
            var_20 = (2147483647 - 15324943068070888839);
            arr_7 [6] [6] [i_1] = ((~(arr_0 [0])));
        }
        var_21 = (min(var_21, ((((240 && (var_12 | -7)))))));
    }
    var_22 = (min(((((max(var_14, var_6))) * var_6)), (((!(var_12 & var_12))))));
    var_23 = ((min(var_3, 4681669922405750377)));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [12] [0] [i_3] [i_2] |= ((-(arr_9 [i_2] [i_3])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_24 = (max(var_24, -135717631513850828));
                        var_25 ^= var_4;
                        var_26 += ((-(14358369920859417113 <= -9195969210982063143)));
                        var_27 = arr_4 [i_2 + 1] [i_5] [i_3];
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_23 [3] [i_6] [i_3] [2] [i_3] [i_2 + 1] = (((!(!52811))));
                            var_28 = (arr_18 [i_2 + 1] [i_7] [i_6]);
                            var_29 = (((min(2864340391, -2730183172575506301))));
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_30 = (1014248704 == 50545);
                            var_31 = (min(var_7, (var_8 / 536870656)));
                            arr_28 [i_4] [11] = ((~(((-69 + 2147483647) << (((((10808 ^ -1) + 10814)) - 5))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_32 = (((((((arr_20 [i_2 + 1] [1] [i_2 + 1] [i_9]) != -959577271)))) - (~var_12)));
                            arr_31 [5] [i_2 + 1] [2] [i_6] [5] [i_4] = (var_3 / var_3);
                            var_33 += -959577271;
                            var_34 |= ((((-9195969210982063130 / (arr_20 [i_2] [i_4] [i_2] [i_9]))) / (((959577270 / (arr_14 [i_6] [i_6] [4]))))));
                            arr_32 [i_2] [i_3] [i_4] [i_3] [i_9] |= 1;
                        }
                        arr_33 [i_3] [i_3] [i_4] [14] = var_7;
                    }
                    arr_34 [i_2] [i_3] [9] [i_3] = (min((max(1, -7175793968173037914)), (arr_14 [i_3] [i_3] [i_3])));
                    var_35 |= (-14 & (var_6 >> 3));
                    var_36 *= (max((max((max(var_8, (arr_24 [i_2 - 1] [i_2] [13] [i_3] [1] [i_2 - 1] [i_4]))), ((((arr_26 [i_2] [i_2 - 1] [13]) || 108))))), (((((max(16840246049407431783, var_7))) || (arr_26 [0] [3] [0]))))));
                }
            }
        }
    }
    #pragma endscop
}
