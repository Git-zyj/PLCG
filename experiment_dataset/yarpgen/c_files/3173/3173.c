/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_15 = (arr_0 [i_2 - 1]);
                    var_16 = var_5;
                    var_17 = (min((((min(1511783511, (arr_6 [i_0] [i_1] [i_2 - 1]))) - (!4294967295))), var_8));
                    var_18 = 94;
                }
                arr_8 [i_0] [i_0] [8] = (min((min((((-(arr_3 [i_0 - 1] [i_0 - 1])))), var_4)), ((((((!(arr_4 [i_0 - 1] [i_1])))) - -2244)))));
                var_19 = ((4294967295 ? ((~((65517 ? 9 : var_3)))) : (((((var_6 >= (arr_5 [i_1])))) ^ 1511783511))));
                var_20 = (max(var_20, ((((arr_5 [i_0 - 1]) ? (arr_1 [i_1]) : ((var_11 & (arr_6 [13] [13] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 = (arr_3 [i_0 + 1] [i_1]);
                                arr_17 [i_5 - 2] [i_3] [1] [i_3] [1] = ((-(!28)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_5;
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_23 = (((((arr_4 [i_6 - 2] [i_6 - 3]) < (arr_4 [i_6 + 2] [i_6 - 2]))) ? (arr_4 [i_6 - 3] [i_6 - 3]) : ((min(var_9, (arr_4 [i_6 - 1] [i_6 + 1]))))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_24 = (arr_22 [i_6]);
                        arr_29 [i_9] [i_6] [i_6] [i_6 - 2] = (((((min(2006036436, 10891)) - 2411425891)) + ((max(3798252661, 34)))));
                        arr_30 [i_6 - 1] [i_6] [i_7] [7] [1] = (arr_21 [i_6 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_25 = var_1;
                        var_26 = (arr_11 [i_6] [i_7] [i_7] [i_6]);
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_39 [10] [0] [i_8] [i_6] [2] [10] = (((arr_14 [i_11 + 3]) ? ((((((arr_14 [i_11 + 1]) + 2147483647)) << (((((arr_14 [i_11 + 2]) + 98)) - 20))))) : 65210));
                                var_27 = (((((-88 ? (var_7 == 255) : 54645))) ? ((~(var_10 | var_5))) : (((65517 ? ((min((arr_4 [9] [8]), (arr_6 [i_12] [i_8] [i_6 - 3])))) : ((max(65527, var_9))))))));
                                var_28 = ((13 ? (arr_3 [i_6 - 3] [i_11 - 1]) : (min((min(10014805875882071074, (arr_13 [i_6 - 3] [i_6] [i_7] [i_8] [i_11 - 1] [i_12]))), var_9))));
                                var_29 = (arr_26 [i_11 + 2] [i_6 + 2] [i_8] [i_11] [i_6] [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
