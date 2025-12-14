/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (~0);

                for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 &= ((-((((arr_8 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]) && (arr_7 [i_1] [i_1] [i_1 + 3] [i_1 - 3]))))));
                        arr_12 [i_3] [i_3] = (max(((-((min(212, var_6))))), (((5 ? var_6 : 251)))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (((min((((arr_1 [12]) | (arr_1 [10]))), ((max(-1, 32767))))) & (min(((20747 & (arr_5 [i_1 - 3] [i_1 + 2] [2] [9]))), ((var_0 ? (arr_8 [1] [i_1] [i_1 - 1] [i_1] [0] [i_1]) : var_11))))));
                        var_18 ^= (max(105, (max((max(var_15, var_9)), (((var_7 >= (arr_0 [i_0]))))))));
                        arr_15 [i_0] [i_1] [i_2 + 1] [i_4] = (((arr_14 [i_0] [i_1 - 2]) ? ((((arr_7 [i_2 - 1] [19] [i_2 - 1] [i_2]) != 23513))) : 252));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_19 = (max(var_19, ((((((((var_7 && (arr_11 [i_0] [i_0] [i_2 - 1] [i_0])))) > (arr_5 [i_0] [i_2 + 1] [16] [i_5]))) ? (((((159 ? -32767 : (arr_10 [0] [0])))) ? (!var_5) : (((arr_13 [15]) * 156)))) : (arr_17 [i_1 - 3] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3]))))));
                        var_20 ^= (arr_11 [i_0] [6] [i_2] [i_0]);
                        var_21 += (((((141 ? (arr_17 [i_0] [i_1] [i_2] [i_5] [15]) : -32767)) + (arr_0 [i_1 - 1]))));
                        arr_18 [i_2] [i_2 - 1] [10] [10] [i_2] [19] = ((var_10 - (((max(99, (arr_14 [11] [i_1])))))));
                    }

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_22 = (max((max((arr_19 [12] [i_0] [i_0] [i_0] [i_0] [i_1 - 2]), ((var_4 ? 32133 : 255)))), (max((((arr_19 [i_0] [i_0] [i_0] [9] [i_0] [i_0]) ? 151 : var_12)), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        var_23 = ((156 ? 0 : (min(var_14, ((255 ? var_14 : (arr_10 [i_2] [i_6])))))));
                    }
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_8] [i_8] [i_9 - 2] = ((((max((((arr_22 [i_0] [6] [i_7 - 1] [i_7]) ? var_7 : 128)), ((1 ? (arr_10 [18] [i_1]) : var_11))))) && (((-(arr_1 [i_7 - 1]))))));
                                var_24 = var_5;
                                arr_30 [i_0] [i_0] [i_8] [4] [i_0] [i_0] = (min((min(49, (arr_16 [i_0] [i_1 + 1] [i_0] [3]))), (((((-(arr_11 [10] [i_7] [i_8 + 1] [i_8])))) ? ((max(127, (arr_11 [i_8] [i_7] [14] [i_8])))) : (arr_7 [i_9] [i_9 - 1] [5] [i_9 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_25 = (var_5 || var_7);
                                arr_36 [i_0] [7] = var_14;
                                var_26 = (max(var_26, (arr_2 [i_7] [i_7])));
                            }
                        }
                    }
                    var_27 = (max((((!(arr_35 [i_0] [i_0] [i_7] [i_7] [i_7 + 1])))), var_14));
                }
                for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    arr_39 [i_1 + 3] [i_1] [i_12] = (((((var_7 ? -101 : (var_3 == var_11)))) ? var_11 : ((~(~24576)))));
                    var_28 = ((var_3 <= (((((max(var_15, var_7))) && ((max((arr_25 [i_12] [13] [13]), (arr_0 [i_12])))))))));
                    arr_40 [i_0] [i_0] [i_1] [i_12] = (((-1 % -32767) ? (~var_0) : (arr_37 [i_12] [i_12] [i_1 + 3])));
                    var_29 -= (min((min(129, (arr_5 [i_0] [i_0] [i_0] [i_0]))), (-240 % -1)));
                }
            }
        }
    }
    var_30 = ((var_8 >= ((max((max(var_8, 155)), 223)))));
    var_31 |= ((1 > (-494 % 47103)));
    #pragma endscop
}
