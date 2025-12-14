/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_14 ? ((((min(0, 2548))) ? (min(var_13, var_2)) : var_8)) : 16109034862275479328));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((min(2337709211434072288, 6)) ^ var_3));
                arr_6 [i_1] = (var_5 * 0);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 = ((var_8 == ((((arr_5 [i_0 + 2] [2] [i_0 + 3]) >= (arr_7 [i_0] [1] [i_0 + 2]))))));
                    var_19 = ((var_6 / (+-97)));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (min(((-(arr_2 [i_0] [i_0 - 2] [i_1]))), (min(1, var_9))));
                    var_20 = (min(var_20, ((max((min((arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 3]), ((max((arr_5 [i_0 + 3] [i_1] [i_2]), var_12))))), ((min((arr_1 [i_0 + 1]), (~7668542781098280436)))))))));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3 + 2] [i_1] = ((~((((((arr_5 [i_0] [i_1] [i_0]) ? var_3 : 96))) ? (min(var_3, var_15)) : (3988646411 != 141863388262170624)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_21 ^= ((((((-26801 + 2147483647) >> (((((-2147483647 - 1) - -2147483638)) + 33))))) && 0));
                                var_22 *= ((!(((var_14 ? 1 : (arr_4 [i_5 - 1]))))));
                                var_23 = 2947725337;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_0] [i_3] = ((((((((var_6 || (arr_12 [i_0] [i_1] [i_3])))) - ((var_2 ? (arr_10 [10]) : var_9))))) || ((((((14024 ? 4294967295 : 9))) ? (((var_0 ? 157 : (arr_13 [i_0] [i_0] [i_0])))) : (((arr_2 [i_0] [i_1] [i_3]) | var_3)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_1] [i_6] = ((~((((arr_17 [15] [i_0 - 1] [i_7 - 2] [i_6] [i_6] [i_1]) != (arr_17 [i_0] [i_0 + 1] [i_7 - 2] [i_0 + 1] [5] [i_3]))))));
                                arr_30 [i_3] [i_3] = var_13;
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_33 [1] [13] [13] = (min((((((arr_5 [i_0 + 2] [i_1] [i_8]) <= 99)) ? (arr_7 [i_8 + 2] [i_0 - 2] [15]) : (arr_2 [i_0 - 2] [i_0 - 1] [i_8 + 1]))), (((230 | 10609655710065059693) ^ ((((arr_17 [i_0] [i_0] [5] [5] [i_8] [11]) ^ var_6)))))));
                    var_24 -= (min((((var_10 ? -64 : (arr_2 [i_0] [16] [i_0])))), ((1054 ? (((max(var_8, var_12)))) : ((var_12 ? var_7 : var_7))))));
                    arr_34 [i_0 + 2] [i_0] [i_0 + 3] [i_0] = (max(10609655710065059707, (((-(arr_32 [i_0] [13] [i_0] [i_8 - 1]))))));
                    var_25 = (99 > -519972404);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_39 [i_9] [12] [12] &= (max(((max((3032028164 != 2337709211434072288), var_10))), var_12));
                var_26 = (min(var_26, (((max(((min(65024, var_2))), var_11))))));
                arr_40 [i_10] |= ((2605272266 ? -1 : 3579207197086295000));
                var_27 -= (var_5 > var_3);
            }
        }
    }
    var_28 = (max(var_28, ((min(((var_0 ? var_8 : var_12)), (((!((min(65024, 18446744073709551615)))))))))));
    #pragma endscop
}
