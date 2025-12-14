/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max(((-1 ? 15310 : ((min(var_9, var_3))))), var_3));
    var_17 = min((var_2 <= 5223546272312747404), -1);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = ((var_4 | ((~(max((arr_7 [i_1] [i_2 + 1] [i_0 - 2] [i_0 - 2]), (arr_0 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (-1 >= -14);
                                var_20 = (min((arr_5 [i_4]), -var_9));
                                var_21 = (max(var_21, -2652253963065746165));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_22 = ((((arr_12 [i_7]) * (arr_15 [i_7] [i_6] [i_5]))) < (((max(var_14, var_15)))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_21 [i_5] [i_5] [i_6] [i_5] = ((!((max(var_5, 13)))));
                        var_23 = var_12;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = ((((min(var_9, ((var_11 ? (arr_14 [i_6]) : var_0))))) || ((max((min((arr_22 [i_9] [i_6] [i_7]), -99)), (arr_13 [i_5] [i_5]))))));
                        arr_24 [i_6] = ((((arr_13 [i_6] [i_7]) + (arr_13 [i_5] [i_6]))));
                        var_25 = ((0 ? (((!(arr_22 [i_9] [i_6] [i_5])))) : (arr_14 [i_6])));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_26 = min((!var_14), ((!(arr_13 [i_6] [i_5]))));
                            var_27 = (((arr_15 [i_6] [i_6] [i_7]) ? ((~((min(9, var_0))))) : (arr_14 [i_6])));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_28 = (min((((arr_17 [i_7]) ? (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : ((max(9, var_11))))), (((((var_14 ? (arr_17 [i_6]) : (arr_12 [i_11])))) ? (arr_30 [i_5] [i_6] [i_7] [i_9] [i_6]) : (!16383)))));
                            var_29 ^= ((!(((99 ? (arr_29 [i_11] [i_9] [i_6] [i_6] [i_5]) : 30720)))));
                            arr_31 [i_6] [i_6] [i_6] [i_6] [i_11] = ((((((arr_18 [i_6] [i_7] [i_6]) & (((arr_17 [i_6]) % 23954))))) ? (((65535 ? 9 : 288229276640083968))) : (arr_15 [i_5] [i_6] [i_11])));
                            var_30 = (max(var_30, (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
