/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 ^= ((-33 ? (-127 - 1) : 1));
        var_17 = (min(var_17, (arr_0 [i_0 + 3] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_18 |= (((12 <= 1) & (var_1 > 1)));
        var_19 *= (1 < (((arr_3 [i_1 + 1]) ? (arr_1 [i_1]) : 0)));
        var_20 |= ((92 ? 1 : 0));
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_21 = ((-((~((((arr_1 [i_2]) < (arr_9 [i_2 + 1]))))))));
        arr_10 [i_2 + 2] [i_2] = ((((((2 || (arr_7 [i_2 + 1] [i_2]))))) ? ((((var_15 || (arr_5 [i_2] [i_2 - 1]))) ? ((max(31, var_9))) : (arr_5 [i_2 + 4] [i_2 + 4]))) : ((~(arr_4 [1] [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 += (((arr_7 [i_2 + 2] [i_3]) % ((max(92, 32)))));
                    var_23 = (arr_0 [i_2] [1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_24 = (max(var_24, (~-33)));
                    var_25 = arr_13 [i_5];

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_26 = (-93 >= (((((-7 ? -11 : (arr_0 [i_7 - 1] [1]))) > (((arr_5 [i_6] [i_2]) & (arr_12 [12] [i_2 + 4])))))));
                        var_27 = 1;
                        var_28 = (!1);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_5] [4] &= (((max((var_1 >> var_1), (91 & 32))) > (arr_2 [i_9])));
                            var_29 *= (-92 && 1);
                            var_30 *= (((((!31) <= (var_3 || var_15))) ? ((((0 ? (arr_24 [8] [8]) : 55)) % ((-42 ? 92 : var_2)))) : (arr_12 [1] [1])));
                        }
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_31 = arr_18 [i_10] [i_6] [i_6] [i_2];
                            var_32 = (max(var_32, (((((((((120 ? (arr_4 [1] [i_5]) : var_7))) ? (arr_18 [i_10] [8] [i_6] [14]) : var_6))) ? (((((-(arr_14 [i_2] [4] [i_2] [4])))) ? (55 && 55) : ((83 ? (-127 - 1) : -92)))) : (arr_14 [1] [12] [i_10 - 3] [i_10]))))));
                        }
                        arr_32 [i_8] [7] [i_8] = ((((max(-50, ((((arr_21 [3] [3] [3] [i_8]) <= (arr_2 [i_8]))))))) ? (((((var_10 ? 1 : (arr_21 [i_2] [i_5] [i_6] [2]))) <= ((((arr_3 [i_8]) < (arr_3 [1]))))))) : ((max((arr_26 [i_2] [i_2] [i_5] [i_2] [1]), (arr_8 [i_5]))))));
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_33 = (arr_30 [i_11] [i_5] [i_2]);
                        var_34 *= var_1;
                        var_35 = var_10;
                        var_36 = (min(var_36, ((max(-91, (((((-(arr_9 [i_2])))) ? (((arr_30 [i_2] [i_2] [i_6]) ? 1 : (arr_22 [i_2 + 1] [i_6] [i_2 + 1] [i_2 + 1] [i_2]))) : ((-(arr_15 [i_6]))))))))));
                        var_37 = ((!(max((((arr_17 [i_2 + 4] [6] [6]) || var_8)), (((arr_4 [1] [1]) <= 31))))));
                    }
                }
            }
        }
        arr_35 [i_2 + 3] [i_2] = arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 1];
    }
    var_38 = var_4;
    #pragma endscop
}
