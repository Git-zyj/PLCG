/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] = var_7;
                            arr_11 [i_0] [i_0] [i_2] [i_3] = (((((~(arr_9 [i_1] [i_2])))) ? ((~(arr_2 [i_1] [i_3 + 1]))) : (((arr_6 [i_1 - 1] [i_3 - 1] [i_0] [i_0]) ? (22867 != var_4) : ((var_6 % (arr_5 [i_1] [i_2] [i_2])))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (((arr_6 [16] [i_0] [i_0] [i_1]) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_0] [i_0]) : ((1 ? 1 : -1411655274))));
                arr_13 [i_0] [i_0] [i_0] = ((((((arr_1 [i_1 + 1] [i_1 - 1]) <= (arr_9 [i_1 - 1] [i_1])))) * ((((arr_6 [8] [16] [i_0] [i_1]) && (arr_3 [i_1 - 1]))))));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_18 [i_4] [i_0] [i_4] [i_4] = ((4080 ? 22867 : 1));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (min((((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_1 [i_1 + 1] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_1 + 1]))), ((~(arr_1 [i_1 - 1] [i_1 + 1])))));
                    arr_20 [i_0] [12] [16] [i_4] = ((max(((1411655267 ? 1 : 1)), (arr_16 [i_1] [i_1 + 1] [i_1]))));
                    arr_21 [i_4] [i_0] [i_0] [i_0] = (-2 * 65510);
                    arr_22 [i_4] = (((((arr_8 [i_4]) ^ (arr_15 [i_4])))) ? (((min(var_7, (arr_8 [i_4]))) - ((((!(arr_0 [i_0]))))))) : (((((~(arr_9 [0] [i_4])))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        arr_30 [i_0] = ((~((-(arr_23 [i_0] [i_5] [i_0])))));
                        arr_31 [i_0] = (((arr_26 [i_6] [i_6] [i_6 - 2] [i_6]) & (((arr_15 [i_0]) & var_7))));
                        arr_32 [i_6] [i_0] [i_1] [i_0] [3] = ((-16 ^ (~var_8)));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_37 [i_5] [i_0] [i_0] = ((!(arr_23 [i_0] [i_7 - 1] [i_0])));
                        arr_38 [i_0] [13] = (((arr_14 [i_7 - 1] [i_7 - 1] [i_1 - 1]) * (((arr_34 [i_0] [i_1 + 1] [i_5] [i_7 - 1]) >> (var_3 - 73)))));
                    }
                    arr_39 [i_0] [12] [i_1 - 1] [8] = ((~(arr_2 [i_0] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_44 [16] [i_0] [6] [1] [i_0] [i_0] = ((!((var_1 && (arr_41 [i_0])))));
                                arr_45 [13] [i_1] [4] [i_0] [0] = 68719476735;
                                arr_46 [i_0] [i_1] [i_1] [i_8] [i_0] = ((((var_9 ? (arr_26 [i_5] [16] [i_5] [10]) : (arr_43 [i_5] [i_5] [0] [i_8] [i_0]))) - (arr_40 [i_1] [3] [i_1] [i_1 - 1])));
                                arr_47 [i_0] [i_5] [i_5] [2] [i_0] = (((((arr_16 [13] [1] [1]) < (arr_14 [i_0] [12] [i_9]))) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (~var_3)));
                                arr_48 [1] [13] [13] [i_0] [i_9] = ((1411655273 ? 33 : 22));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_53 [i_0] [i_0] [i_0] [i_10] = ((var_8 / (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_54 [i_10] [i_10] [i_0] = (!var_5);
                    arr_55 [2] [i_1] [2] = (arr_2 [i_10] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_61 [i_10] [i_10] [i_12] = 42681;
                                arr_62 [i_0] [i_0] [i_0] [5] [i_0] = ((~(arr_50 [i_0])));
                            }
                        }
                    }
                }
                arr_63 [i_0] [i_1 + 1] = ((((22867 ? 1 : 1)) != ((~(arr_1 [6] [i_1 + 1])))));
            }
        }
    }
    var_10 = var_9;
    var_11 = var_4;
    var_12 = ((var_3 ? (min(var_3, (min(1556165015398527454, 4827452097526845516)))) : var_2));
    #pragma endscop
}
