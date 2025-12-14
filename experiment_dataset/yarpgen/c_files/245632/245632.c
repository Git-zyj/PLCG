/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(var_1, -118)));
    var_12 = (min(((!((max(var_1, var_1))))), ((((min(var_1, -118))) <= ((var_4 ? var_2 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((max((arr_5 [i_0]), var_9)))) > ((((max(var_8, (arr_11 [i_0] [i_1] [i_2] [i_3 - 1])))) << ((((~(arr_9 [i_3]))) + 268)))));
                            arr_13 [i_2] = (((((max((arr_6 [i_0] [i_1] [i_2 + 1]), 117))) ? (arr_9 [i_0]) : ((1 ? (arr_5 [i_0]) : (-127 - 1))))));
                            arr_14 [12] [1] [i_2] [i_3] = (max(((var_8 ? ((min((arr_6 [i_0] [i_3] [1]), 121))) : var_9)), (((!(-118 || -109))))));
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_3 - 1] [14] = (!-115);
                        }
                    }
                }
                arr_16 [i_0] [9] [i_1] = ((((min((((var_8 >= (arr_9 [i_0])))), (min(var_8, var_7))))) << ((((((-2140339287 ? 52770 : 0)) & ((min(var_8, (arr_8 [i_0] [i_1])))))) - 11))));
                arr_17 [i_0] [i_1 - 1] = (((-40 ? (var_3 * var_9) : ((min((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_7 [1] [6] [i_1] [6])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {

                            for (int i_6 = 2; i_6 < 14;i_6 += 1)
                            {
                                arr_26 [i_0] [i_1 - 2] [i_4] [3] [i_4] = (((var_10 ? ((min(var_7, var_2))) : 218)));
                                arr_27 [i_0] [i_1 - 1] [i_4] [8] [i_5] = (max((arr_9 [i_6]), (arr_19 [10] [i_1] [5])));
                                arr_28 [i_0] [i_1] [i_4] [i_5 + 1] [5] = ((((-(arr_19 [i_0] [1] [6]))) | (((!((((((arr_6 [1] [i_4] [1]) + 2147483647)) << var_4))))))));
                                arr_29 [i_6] [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = ((((((max(var_5, 22047)))) ^ (min(13592221995069450041, 1)))));
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                arr_33 [i_1] [i_0] [i_4] [i_5] = (min(((-(max((arr_23 [i_0] [i_7] [i_4] [i_5] [1] [i_5 + 2]), var_9)))), ((min(-1, (arr_21 [i_0] [12]))))));
                                arr_34 [i_5] [i_1] [12] [i_1 - 2] [i_1] [i_1 - 2] = (arr_10 [i_0] [i_7] [i_4] [11]);
                                arr_35 [i_0] [2] [i_4] [i_0] [i_0] = (min((((-(arr_10 [i_7] [i_5] [i_4] [10])))), var_7));
                                arr_36 [i_5] [i_1] [i_4] [i_5 - 2] [i_7] = ((!((min((max(5869807880656635705, 26380)), (((1 ? var_9 : var_2))))))));
                            }
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                arr_39 [i_1] [i_4] = var_3;
                                arr_40 [i_0] [1] [i_4] [9] &= ((((-(-32767 - 1)))));
                            }
                            arr_41 [1] [i_1] = (min((max((((arr_1 [i_0]) ? (arr_10 [i_0] [i_1 - 3] [i_1 - 3] [i_5]) : var_0)), ((((arr_11 [i_5 + 2] [i_4] [i_1] [i_0]) && (arr_9 [i_0])))))), ((min((max(55165, -124)), (arr_7 [i_0] [i_0] [4] [i_0]))))));
                            arr_42 [i_0] &= ((((((((var_10 * (arr_25 [1])))) ? ((var_7 ? var_0 : 9223372036854775791)) : 27777))) & (min((min((arr_5 [i_0]), (arr_38 [1] [5] [i_4] [i_4] [9] [i_5]))), ((max(6377, -27777)))))));
                            arr_43 [i_0] [i_1] [i_4] [i_1] [i_5] [2] = ((-(min(((min(-28, var_10))), (((arr_2 [i_4] [i_1]) ? (arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_5]) : var_5))))));
                            arr_44 [i_4] [i_4] [i_1] = (((-(((-2147483647 - 1) ? 113 : var_0)))) - ((((~(arr_24 [i_0] [14] [i_4] [i_5 - 2] [i_5 + 3]))) - (29871 * var_3))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
