/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_6, ((-(min(268435456, 65528))))));
    var_14 = (((var_2 ? ((max(127, -12656))) : (min(1008, var_10)))));
    var_15 = ((-(((((var_3 ? 12651 : var_4))) ? (min(12, var_9)) : var_2))));
    var_16 = (min(var_16, ((min(var_8, var_8)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = var_2;
        var_18 = (max(-0, (!-12656)));
        arr_4 [i_0] [i_0] = ((12661 ? (((arr_3 [i_0]) | (arr_3 [i_0]))) : (arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_8 [i_1] = (((((~(arr_5 [i_1 + 1])))) ? (((arr_7 [i_1] [i_1 + 1]) ? (arr_7 [i_1] [i_1 + 1]) : (arr_7 [i_1] [i_1 + 1]))) : (((~(arr_5 [i_1]))))));
        arr_9 [i_1] = var_1;

        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] = 12672;
            var_19 = (max(((-7313 ? ((var_12 ? 3855576774 : (arr_11 [i_1] [i_1] [i_1 + 1]))) : ((-768077405 ? -12672 : var_1)))), 16128));
            var_20 -= (3855576779 << 1);
            var_21 = (-(min((arr_3 [i_1 + 1]), ((min(0, (arr_5 [i_2])))))));
            var_22 = (max(var_22, (((((arr_10 [i_1 + 1] [4]) ? (arr_10 [i_1 + 1] [2]) : (arr_10 [i_1 + 1] [6]))) | (!12661)))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] = (arr_7 [i_1 + 1] [i_3 + 1]);
            var_23 = (((((arr_2 [i_3]) ? 1 : -12663))) ? 13 : ((2059846171 ? var_8 : 42809)));
            var_24 = ((-9223372036854775787 ? (255 >= var_3) : ((2147483647 ? 1 : 1416392396))));
            var_25 = (-(arr_13 [i_1 + 1] [i_1 + 1] [i_1]));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 += ((281474976710655 ? (((arr_2 [i_4]) ? var_3 : 12661)) : ((-1017567207 / (arr_2 [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_27 = ((-1017567207 + (arr_20 [i_6] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_5] [4] [i_6] = (((arr_21 [i_6] [i_5] [i_6] [i_8]) ? (arr_23 [i_8] [i_7] [i_5] [i_4]) : (arr_23 [i_5] [i_5] [i_6] [i_6])));
                                var_28 += (-(arr_23 [i_4] [i_4] [i_6] [i_8]));
                            }
                        }
                    }
                    arr_28 [12] [i_4] [i_4] |= ((var_1 ? (arr_17 [i_4]) : (arr_21 [i_4] [i_4] [i_5] [i_6])));
                }
            }
        }
        arr_29 [i_4] [i_4] = ((-12686 ? (arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [10] [i_4])));
    }
    #pragma endscop
}
