/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_12 ? 191 : var_18))) | (min(var_15, 183))));
    var_20 = ((((var_4 < (((min(var_0, var_16)))))) ? -var_17 : ((max(var_3, var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [12] [i_1] [i_0] [i_2] [i_2] [i_0] = (min((((arr_0 [i_1]) ? (min((arr_7 [i_0] [i_2] [i_3]), 191)) : 74)), (((~(((152 != (arr_5 [12] [i_0])))))))));
                        arr_11 [i_0 + 2] [i_0] [i_2] [i_3] [i_3 - 1] = var_15;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_2] [i_4] [i_2] [i_2] [i_0] [i_2] = (max((arr_5 [i_0] [i_5]), ((((65 / 62) == (arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0]))))));
                            arr_19 [10] [i_2] [i_5] [i_4] [8] [i_2] = var_17;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_2] [i_2] = ((((max(40, (arr_17 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? (!56887) : ((104 ? (!-52) : (((-11690 + 2147483647) >> (var_6 - 68)))))));
                            arr_24 [10] [12] [i_4] [i_2] [i_4] [i_6] = ((((((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 3]) ? 124 : (arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 1])))) >= -var_8));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((~((((max(var_16, -1))) ? var_6 : var_6))));
                            arr_30 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = var_15;
                        }
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((+((((arr_28 [i_0] [i_1] [i_2] [i_1] [i_2] [2]) >= (arr_12 [11] [i_2] [i_1] [i_0]))))))) ^ (min((min((arr_25 [i_1] [i_1] [i_2] [i_0 + 2]), var_8)), (arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 1])))));
                        arr_32 [i_2] [i_2] [i_2] = (min(((min((arr_6 [i_0] [i_0 - 1] [i_4] [i_0 + 1]), (arr_6 [2] [i_0 - 1] [i_4] [i_0 + 1])))), ((0 ? var_13 : (arr_6 [i_0 + 2] [i_0 - 1] [i_4] [i_0 + 1])))));
                        arr_33 [i_0] [i_0] = (((((var_8 ? 152 : (((arr_14 [i_0]) ? 219 : var_6))))) < ((var_4 ? (arr_0 [i_2]) : var_9))));
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_39 [i_0] = ((~(arr_16 [i_0 + 2] [10] [i_8 - 2] [i_8 - 3] [8])));
                            arr_40 [0] [i_1] [i_9] = ((((59901 ? 0 : var_13)) <= -22327));
                            arr_41 [i_0] [5] [i_0] [i_2] [i_8] [i_0] [i_9] = var_7;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [1] [i_0] [i_10] = (min((min(37, (arr_17 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_8 - 2] [i_8 - 1]))), var_3));
                            arr_45 [i_0] [i_1] [i_2] [8] [i_10] = (min((((((min((arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_14 [i_10])))) > var_18))), ((-((min(1, var_7)))))));
                        }
                        arr_46 [10] [i_1] [i_2] [i_0] = (((((~(var_8 & 1)))) ? (arr_34 [i_0] [i_0] [i_0] [i_0] [13] [i_0]) : ((max((max(15, var_10)), var_5)))));
                        arr_47 [2] [2] [i_2] [i_2] [i_8] = var_0;
                        arr_48 [i_1] [i_0] [i_8 - 2] = var_17;
                    }
                    for (int i_11 = 3; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_51 [i_2] = (~-21719);
                        arr_52 [i_0] [i_0] [i_0] [i_0] = ((+(max((arr_15 [i_11 - 3] [i_11 - 2] [i_11] [i_11] [i_11 - 3] [i_11 - 3] [i_11]), (arr_35 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 3])))));
                        arr_53 [i_0] = 39;
                    }
                    arr_54 [i_0] [i_1] [i_0] [i_1] = (min(var_11, var_12));
                }
            }
        }
    }
    #pragma endscop
}
