/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((!((((arr_1 [i_0]) * (max(var_6, var_1)))))));
        arr_3 [i_0] = (((arr_0 [0] [i_0]) ? (((((!4294967295) && ((((arr_1 [8]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))) : var_9));
        arr_4 [i_0] = (((((-(arr_2 [i_0])))) ? (min(var_7, 4294967286)) : (((16273744710106137969 ? 0 : (-2147483647 - 1))))));
        arr_5 [i_0] = (!10);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_13 = ((((((((var_9 ? (arr_13 [5] [i_2] [8] [i_3] [i_4]) : var_5))) ? (min(var_2, 18)) : (((var_2 ? 6699 : var_5)))))) ? ((((min(var_2, (arr_8 [10] [1] [i_1])))))) : (arr_14 [i_3 - 2] [i_3 - 1] [i_4] [i_3 - 2] [i_4])));
                            arr_16 [i_0] [1] [1] [i_0] [i_2] [i_0] = ((((arr_2 [i_3]) ? (((arr_6 [i_3]) ^ (arr_8 [i_1] [1] [i_2]))) : var_8)) + (arr_6 [4]));
                            var_14 *= ((((((arr_2 [i_3]) ? var_0 : var_2)))) ? ((-(min(1199495418613542031, (arr_2 [i_0]))))) : (((((((arr_10 [6] [6] [i_2]) ? 3312348511 : 96))) ? 1595136839786471738 : (((1 << (2628444159 - 2628444146))))))));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_0] = (((((13 ? ((var_2 ? var_7 : (-2147483647 - 1))) : var_2))) ? ((var_1 ? ((min(1, (arr_8 [13] [i_1] [1])))) : var_8)) : ((-var_6 ? (((arr_13 [1] [1] [i_1] [7] [i_0]) ? (arr_6 [i_0]) : 0)) : ((((arr_13 [i_0] [13] [i_0] [i_0] [i_1]) != var_10)))))));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = 1;
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [5] [i_6] [i_5] [i_5] = ((((min(((1 << (((((arr_25 [0] [i_7] [i_8]) + 1101572382)) - 24)))), (!var_7)))) ? (((((var_1 | (arr_27 [i_5])))) ? var_9 : var_8)) : (((~(var_5 - var_0))))));
                        arr_31 [i_5] [i_5] [i_6] [i_6] [i_8] = var_9;

                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            arr_34 [i_5] [14] [i_5] [i_6] [i_5] = 2147482624;
                            var_15 = (((var_11 == var_5) ? var_11 : var_6));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_16 ^= (max((arr_33 [i_5] [i_5] [i_5] [i_8]), ((~(((arr_24 [i_5] [i_6] [i_6]) ? (arr_33 [i_5] [i_5] [9] [i_10]) : var_2))))));
                            var_17 -= var_5;
                        }
                    }
                }
            }
        }
        var_18 = ((6907241371958113039 == (((1 ? ((1 << (var_1 + 8705728313687472298))) : (0 == 1))))));
        var_19 = var_6;
    }
    var_20 = var_10;
    #pragma endscop
}
