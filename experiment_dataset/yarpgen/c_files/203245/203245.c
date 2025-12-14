/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = 1564503787;
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = ((var_5 ? ((((0 ? 15 : 1)))) : 973683758408262928));
                    var_21 &= ((((!((((arr_1 [i_2] [i_1]) << (((arr_3 [16] [i_1] [i_2]) - 250))))))) ? ((min(1, 20))) : ((0 ^ (arr_2 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((~(arr_3 [i_1] [i_1] [i_0])));
                                var_23 &= ((((((arr_9 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : var_15))) ? (arr_9 [i_1 + 1] [i_1 + 1] [7]) : (((arr_9 [i_1 - 2] [i_1] [i_1]) ? (arr_9 [i_1 - 1] [i_1 - 3] [i_1]) : (arr_9 [i_1 - 1] [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_24 -= ((!(arr_11 [i_6])));
                var_25 = ((-(arr_11 [i_6])));

                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    var_26 &= (arr_12 [i_5] [i_5] [i_7 - 1]);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = var_9;
                        var_28 |= ((!((((arr_13 [i_6]) ? (arr_14 [i_8] [i_5] [i_5]) : (min(4129534418, (arr_14 [i_8] [i_5] [i_5]))))))));
                        var_29 -= (((!var_12) ^ (arr_17 [i_5] [i_7])));
                    }
                    var_30 = ((var_2 ^ (min((arr_12 [0] [i_6] [i_7 - 1]), (arr_12 [i_5] [13] [i_7 + 1])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_31 = ((~(((!(arr_12 [i_9 + 1] [i_10 - 1] [i_10 - 1]))))));
                                var_32 = ((-(((!(!var_2))))));
                            }
                        }
                    }
                    var_33 ^= (((((arr_14 [i_7 - 1] [i_7 - 1] [i_7]) - (arr_14 [i_7 + 1] [i_7 - 1] [i_7 - 1]))) - ((0 / (arr_14 [i_7 + 1] [i_7 + 1] [i_7])))));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_34 *= arr_22 [i_5] [i_5] [i_5] [i_5];
                    var_35 = (max(var_35, (((((-127 - 1) ? (((arr_25 [i_5] [i_5] [20] [i_6] [i_6] [i_11] [i_11]) ? 3 : 1)) : var_3))))));
                }
                var_36 = (min(var_36, ((((((((!(arr_10 [i_5] [i_6])))) ^ (!2334))) << 1)))));
            }
        }
    }
    #pragma endscop
}
