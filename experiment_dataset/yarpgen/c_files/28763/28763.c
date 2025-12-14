/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 < (((var_10 ? var_0 : var_17)))));
    var_21 = (163 + var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_22 = (arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_9 ? (arr_0 [i_3]) : (arr_0 [i_1]))) - (((var_2 && ((max((arr_6 [i_0]), var_4))))))));
                                var_23 = -2917054490159594923;
                            }
                        }
                    }
                    var_24 = var_15;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_5] = (((((1409065014 ? -102 : 1073479680))) ? var_19 : ((((arr_8 [i_2]) && var_2)))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] = (((arr_5 [i_5 + 1] [i_1]) - (arr_6 [i_5 + 1])));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_6] = (((arr_7 [i_6] [i_1] [i_0]) - (arr_20 [i_0] [i_1] [i_2] [i_6])));
                        var_25 = (var_17 ? var_13 : ((var_9 ? var_5 : (arr_4 [i_6] [i_1]))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_26 = var_0;
                            arr_27 [i_1] [i_2] [i_1] = (arr_16 [i_1] [i_1]);
                            arr_28 [i_8] [i_0] [i_2] [i_1] [i_0] [i_0] |= ((((max((arr_6 [i_0]), (arr_6 [i_0])))) ? ((var_2 ? 12129570063635808158 : (arr_6 [i_8]))) : (arr_6 [i_0])));
                        }
                        arr_29 [i_1] [i_1] [i_2] [i_7] = max(((-409168015 ? var_2 : ((840656072 ? -8449 : (-2147483647 - 1))))), 1);
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_32 [i_1] [i_1] = ((var_16 == (arr_0 [i_9])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1] [i_9] [i_1] [i_11] = (((arr_9 [i_10 - 1] [i_10 - 1] [i_10] [i_10]) ? (arr_9 [i_10 - 1] [i_10] [i_11] [i_11 + 3]) : var_6));
                                arr_38 [i_0] [i_0] [i_1] [i_1] [i_10] [i_10] [i_11] = var_6;
                                arr_39 [i_11] [i_11 - 1] [i_1] [i_11 + 3] = ((var_10 < (arr_23 [i_1] [i_10 - 1])));
                            }
                        }
                    }
                    var_27 = ((~(arr_24 [i_0] [i_1] [i_9])));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        arr_42 [i_12 + 1] = ((((((arr_31 [12] [i_12]) ? var_6 : (arr_8 [i_12])))) ? ((max(var_2, (arr_31 [14] [i_12])))) : (((arr_8 [i_12]) ? (arr_31 [16] [i_12]) : (arr_8 [i_12])))));
        arr_43 [i_12 + 1] = (max(var_12, (((arr_23 [i_12 + 1] [i_12]) ? (arr_1 [i_12 + 1]) : var_7))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_28 = (max(var_28, ((((arr_45 [i_13]) ? (arr_44 [i_13] [i_13]) : (arr_45 [i_13]))))));
        var_29 = (-1603394988 & 23829);
        arr_47 [i_13] = (((arr_44 [i_13] [i_13]) < (arr_46 [i_13])));
        arr_48 [i_13] [i_13] = var_4;
    }
    var_30 = 1370621100;
    #pragma endscop
}
