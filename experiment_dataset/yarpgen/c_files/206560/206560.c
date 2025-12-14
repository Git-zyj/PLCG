/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = ((!((((arr_8 [i_1] [i_2] [i_3] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_1] [i_1]))))));
                                arr_17 [i_0] [i_1] [i_0] = (min(((max(57662, 510412946))), -349194759));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((var_6 ? (arr_14 [i_4] [i_2] [i_1] [i_0]) : (arr_3 [i_0]))))) >> ((((max(((max(1, var_11))), var_9))) - 217)));
                                var_14 = (min(((min(var_2, var_2))), (max(var_4, var_8))));
                                arr_19 [i_0] [i_1] = (((!349194785) ? 248 : var_1));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_23 [i_1] = ((((((var_0 - var_1) + var_3))) ? ((var_5 ? var_1 : 1855254953)) : (arr_12 [i_5] [i_1])));
                    var_15 = (max(var_15, ((min((((~var_4) & var_9)), ((((arr_3 [i_5 - 1]) & (-9223372036854775807 - 1)))))))));
                    arr_24 [i_1] [i_1] [i_5] = -32765;
                }
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    arr_27 [i_1] [i_1] [i_0] [i_0] |= (((((arr_16 [i_6 + 3] [i_6 + 2] [i_6] [i_6] [i_6 + 2]) ? var_8 : (arr_16 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_6]))) % (((-(arr_16 [i_6 - 1] [i_6 + 2] [i_6] [i_6] [i_6 + 2]))))));
                    var_16 ^= ((((((((var_4 ? 0 : (arr_5 [i_0] [i_0] [i_0])))) ? (((max(1, (arr_25 [i_0] [i_0]))))) : -var_5))) ? ((((arr_5 [i_0] [i_1] [i_6]) ? (!16383) : ((var_11 ? var_2 : 1220350782))))) : (((arr_1 [i_6 + 1]) ? 2168734676 : var_5))));
                    var_17 ^= ((3699 != ((~(arr_2 [i_6 - 1])))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_38 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((((-(arr_25 [i_1] [i_1]))) - -var_1))) ? 7873 : ((var_4 ? (arr_34 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8]) : (arr_5 [i_1] [i_8] [i_8 + 2])))));
                                var_18 = -349194759;
                            }
                        }
                    }
                    arr_39 [i_1] [i_1] [i_1] = var_12;
                    arr_40 [i_0] [i_1] = var_2;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_19 = -30;
                                var_20 = (min((((arr_15 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_1]) / var_4)), (((var_7 ? (arr_15 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_1]) : (arr_2 [i_10 + 1]))))));
                                var_21 += max(21105, var_4);
                            }
                        }
                    }
                    var_22 = (max(var_22, (((!(((((var_6 ? var_5 : var_2)) >> (((var_8 + 510412944) - 5784765683694067749))))))))));
                }
                var_23 *= (max(var_2, ((-951404339 + (((var_8 ? 1220350771 : (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_24 = (max(var_24, (((var_6 * (((((var_6 ? var_5 : var_0))) ? var_12 : 1855254953)))))));
    var_25 = var_3;
    var_26 = (max(var_26, var_6));
    var_27 = (min(((((((var_8 ? 1587037891 : var_2))) ? ((min(var_2, 57662))) : var_9))), (((((var_7 ? var_3 : var_12))) - ((var_3 ? 58993 : var_8))))));
    #pragma endscop
}
