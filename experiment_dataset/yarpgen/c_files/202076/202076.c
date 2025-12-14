/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = arr_2 [i_1];

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] = (arr_4 [i_0] [i_0]);
                    var_21 = ((((((arr_4 [20] [i_0]) ? 131070 : (arr_7 [i_2 + 1] [i_2] [i_2 + 2])))) && (((var_16 ? ((min((arr_7 [i_0] [i_0] [i_2]), -17181))) : 65533)))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_22 ^= var_17;
                    arr_11 [i_0] [i_3] [i_0] = (arr_3 [i_0 - 2]);
                    var_23 = (max(var_23, (min((((!(arr_6 [22])))), -823385412))));
                    var_24 = (min((arr_1 [6] [i_0]), (arr_1 [2] [i_0])));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_25 = (max(var_25, ((max((arr_15 [i_0 - 1] [i_5 - 2] [i_6] [i_6] [21]), ((var_1 ? 1124845912 : ((var_13 ? (-32767 - 1) : (arr_0 [i_4]))))))))));
                            arr_21 [i_4] [i_1] [i_4] [i_5] [i_6] [i_6] [i_0 + 3] &= (((arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 4]) + ((-(arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 3] [i_0 - 1])))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = arr_20 [i_0] [6] [1] [5];
                            var_26 = var_12;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_27 = ((((var_2 ? (!234) : (arr_2 [i_0])))) ? 3604851515 : -7263160024188813024);
                            var_28 -= (min((((max(1, 0)))), (arr_6 [i_4])));
                            arr_29 [i_0] [i_4] [i_5] [i_4] = (arr_10 [i_8]);
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((((max(0, -3)) == (arr_24 [i_5] [10] [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 1]))));
                    }
                    for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [7] [i_0] [i_0] [18] [i_0] = min((((((max(var_0, (arr_17 [i_0])))) ? -17951 : var_13))), 2799614929);
                        arr_34 [i_9] [i_1] [i_0] = ((!(((2262089585 ? ((~(arr_4 [i_0] [i_0]))) : (1 == -1719095509))))));
                        arr_35 [i_0] [i_0] [i_4] = (min((((max(4, -17171)))), 9730118416780081500));
                    }
                    var_29 = (max(var_29, ((min((arr_23 [i_0 + 3] [i_4]), (min(var_5, (arr_23 [i_0 + 2] [i_4]))))))));
                    var_30 = var_5;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_31 = ((~(((arr_4 [i_0 - 1] [i_0]) ? 9730118416780081506 : (arr_4 [i_0 - 1] [i_0])))));
                                var_32 = (-(((arr_36 [i_0 + 3]) ? (arr_0 [i_0]) : (arr_36 [i_0 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = ((var_2 ? -17171 : ((max(-619329611, var_2)))));
    #pragma endscop
}
