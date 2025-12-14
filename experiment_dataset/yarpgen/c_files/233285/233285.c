/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 += (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = var_5;
    }

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 += ((~(arr_7 [i_2] [4])));
            var_20 += (((899161840 == 8) << (((((arr_1 [i_1 - 1]) ^ 248)) - 28030))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        var_21 += ((((((var_17 << (((arr_5 [i_5 - 2] [i_3]) - 1703834556))))) ? var_6 : (arr_13 [i_4] [i_4] [i_4] [i_4]))));
                        arr_18 [i_1] = (((((arr_11 [i_1] [i_1]) ? (arr_4 [i_5 + 2]) : (arr_0 [i_1 - 1]))) <= (arr_11 [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 = (max(var_22, (arr_13 [i_1] [i_3] [i_4] [i_6])));
                        arr_21 [i_1 - 1] [i_3] [i_4] [i_6] [i_1] = (((arr_12 [i_1] [i_1 - 1] [i_4 + 2]) ? (arr_17 [i_1] [i_1 - 1] [i_4 - 3] [i_6]) : (arr_0 [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_25 [i_1] = ((((arr_11 [i_1] [i_3]) && (arr_11 [i_1] [i_3]))));
                        arr_26 [i_1] [i_3] [i_1] = ((((((arr_23 [i_4 - 3] [i_3]) == (arr_23 [i_1 - 2] [i_4 + 2])))) > (arr_23 [i_3] [i_4 - 3])));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_1] [i_1] [i_4] [i_8] = ((var_7 - (arr_17 [i_4 - 2] [i_1 - 1] [i_1] [i_1 + 1])));
                        var_23 = ((-(arr_15 [i_4 - 1] [i_4 + 2] [i_1 + 1] [i_1 + 1])));
                        var_24 += 8;
                    }
                    var_25 = (min(var_25, ((max(((!(arr_11 [0] [i_3]))), ((!((min((arr_10 [i_1] [i_3]), (arr_0 [i_1])))))))))));
                }
            }
        }
        arr_30 [i_1] = (max((arr_20 [i_1] [i_1] [i_1 - 2] [i_1] [i_1]), (((arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 2]) >= (((((arr_13 [i_1] [i_1] [i_1 + 1] [i_1]) + 2147483647)) >> var_11))))));
    }
    var_26 += (~((-(~248))));
    var_27 = var_17;
    #pragma endscop
}
