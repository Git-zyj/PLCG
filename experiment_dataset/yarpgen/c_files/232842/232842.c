/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(var_1 & var_5)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            var_14 *= (arr_2 [i_0]);
                            var_15 = var_9;
                            var_16 = (arr_10 [i_4 - 1] [i_1] [i_2] [0] [3]);
                        }
                        var_17 -= (((((-(arr_6 [i_0] [i_1] [i_3])))) + ((-(((arr_8 [i_0] [i_3]) ? (arr_3 [1] [i_1]) : var_6))))));
                        var_18 = (max(var_18, (((var_11 ? ((+((((arr_9 [i_0]) != 12))))) : (var_4 != -1))))));
                    }
                }
            }
            arr_13 [i_0] [i_0] [9] = ((((~(41 << var_3))) >> ((((var_3 << (((~var_10) - 1234329802233402873)))) - 4718588))));
        }
        arr_14 [10] [i_0] = var_0;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_26 [9] [i_5] [1] [1] [i_6] [i_7] [i_8] = ((var_1 || ((!(arr_17 [i_0] [i_6] [i_6] [7])))));
                            var_19 = -1471784011;
                        }
                        var_20 ^= ((~(((arr_8 [i_0] [4]) | 0))));
                        arr_27 [8] [4] [i_6] [10] = 31;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_31 [1] = ((~(((6 ? var_5 : 15)))));
        var_21 = (max(var_21, var_10));
        arr_32 [i_9] [i_9] |= ((((arr_30 [i_9]) ? (arr_29 [i_9] [i_9]) : 11091307234920366594)));
        var_22 = (arr_29 [i_9] [i_9]);
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_23 &= (((arr_33 [4] [4]) ? (((((-(arr_33 [0] [6])))) ? var_4 : (((arr_33 [8] [i_10]) ? (arr_33 [0] [i_10 - 1]) : 18446744073709551553)))) : (arr_33 [2] [2])));
        var_24 = ((((4505977619681934705 ? (arr_34 [i_10]) : (arr_34 [i_10]))) != (((((var_12 ? (arr_34 [i_10]) : (arr_34 [i_10]))) != var_0)))));
    }
    var_25 = ((((!(1 != var_2)))));
    #pragma endscop
}
