/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_12 = -var_9;
                    arr_9 [4] [1] [i_1] [i_1] = ((18446744073709551615 ? (arr_1 [6]) : 8002259106169825283));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 *= (((((-(arr_8 [i_0] [4])))) ? ((((arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3 - 2]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])))) : (((arr_14 [1] [i_1 + 1] [i_1 + 1]) ? (arr_14 [i_0] [i_0] [i_4 - 1]) : (arr_14 [i_0] [i_0] [i_0])))));
                                var_14 = var_8;
                                var_15 = (min((min(((61 ? var_1 : 15584)), (((2048 | (arr_1 [i_1])))))), ((((arr_4 [i_4 - 1] [i_4 + 1]) <= 136)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [4] [i_1] = (max(((!(((var_2 ? 3358933749 : var_1))))), (((((3358933749 ? var_8 : (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))) && ((max(125, (arr_8 [i_2] [i_1]))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((min((min(((-15606 ? var_2 : (arr_7 [4] [i_1] [i_2] [i_0]))), (((arr_13 [i_0] [i_0] [i_0] [9] [i_0]) | var_4)))), (15634937105429129708 + -672265355))))));
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_1] = (min((((((min(-2031, (arr_5 [1] [1])))) ? (~var_11) : var_7))), (min((arr_13 [i_0] [i_1] [2] [i_5 + 1] [i_5]), (((-(arr_4 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_17 = (arr_25 [i_0] [5] [i_1] [i_1] [i_5 + 1]);
                                var_18 = (min(var_18, ((min(((-((((arr_10 [i_0] [i_0] [i_7] [14] [i_7] [14]) != var_2))))), (max((((arr_4 [7] [7]) % (arr_8 [i_1] [i_7]))), (arr_25 [4] [i_1] [i_7] [i_6] [4]))))))));
                                arr_26 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((!(((~(arr_3 [i_1 + 1]))))));
                            }
                        }
                    }
                    var_19 |= var_10;
                }
                var_20 = (((((((min((arr_22 [i_1] [i_1] [i_1]), (arr_4 [i_0] [i_0])))) ? (((var_0 ? 3358933749 : (arr_0 [i_0])))) : (min(var_5, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) < (((~(arr_11 [2]))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] = (arr_10 [i_0] [i_0] [i_1] [i_9] [i_10] [i_10]);
                                var_21 *= (max(var_5, (var_9 / -6556624724156204259)));
                            }
                        }
                    }
                }
                arr_36 [i_1] [i_1] = -49;
                arr_37 [14] |= ((arr_31 [0]) ? (arr_1 [i_0]) : (~45809));
            }
        }
    }
    var_22 = (max((((var_4 == var_5) * (var_3 / var_3))), (((!(var_0 != var_5))))));
    #pragma endscop
}
