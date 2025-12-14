/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((((~var_15) + 2147483647)) >> (var_11 + 869873454101683370))), (177 <= 1053850715)));
    var_18 = (max(var_18, (((var_14 ? var_16 : ((var_0 ? var_7 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    var_19 &= ((var_14 ? (((arr_7 [i_1]) << (-1053850715 + 1053850738))) : (arr_0 [i_0 - 1])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_20 = 1053850715;
                        var_21 = (min(var_21, (arr_6 [6] [i_1] [i_2] [i_3])));
                        var_22 = ((-(arr_6 [i_2 + 2] [i_0 - 2] [i_2] [i_3])));
                        arr_10 [i_2] [2] [i_2] = (((var_9 >> (((arr_0 [i_0]) - 758637799)))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_0 - 2] = ((var_15 ? (arr_3 [i_0] [i_1]) : -14289));
                        var_23 = (-571673756747973719 - -100);
                        var_24 = ((1533008680 ? -7517623907115798572 : 0));
                        var_25 = (((~var_4) ? (arr_8 [i_2 + 1]) : (arr_3 [i_2] [i_1])));
                    }
                }
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_26 = 496;
                    arr_16 [i_0] [i_5] [i_5] = var_16;
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_27 += min((min((((~(arr_4 [i_0] [i_1] [i_6])))), 1)), (((!((((arr_9 [2] [i_0] [2] [i_1] [i_6] [i_6]) ? var_16 : -388839767)))))));
                    var_28 = var_11;
                }
                arr_19 [i_1] [i_0] = max(496, (min((arr_2 [i_0]), ((((arr_18 [i_1] [i_0] [i_0] [i_0]) ? -5 : (arr_9 [i_0 - 3] [i_0] [i_1] [i_1] [i_1] [i_1])))))));
                var_29 -= (((((0 % ((min(99, (arr_12 [0] [1] [1] [i_1]))))))) + (((((var_8 ? (arr_8 [i_1]) : (arr_17 [i_1] [i_0] [6])))) ? (18014261070528512 ^ var_1) : 3))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_30 = 9223372036854775807;
                            var_31 = (min(var_31, ((min(((var_1 ^ (~18211536431481456720))), (min((arr_9 [i_0 - 2] [i_0] [i_0] [i_1] [i_0 - 1] [i_0]), (((arr_22 [i_1]) ? 0 : 0)))))))));
                            var_32 = (!(arr_4 [i_0] [i_0] [i_8]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_33 = (min(var_33, -var_0));
                                arr_38 [i_0 + 1] [i_1] [i_1] [i_1] [i_10] [i_11] [9] = (((((((500 ? var_11 : (arr_22 [i_11])))))) == (min(((var_13 ? (arr_17 [i_11] [6] [8]) : (arr_2 [i_1]))), (arr_22 [i_11])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
