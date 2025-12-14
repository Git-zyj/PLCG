/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_4 ? var_12 : var_17)), (((-((1580049828 << (59 - 59))))))));
    var_19 = -var_2;
    var_20 = ((((max(var_4, (!var_14)))) ^ var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2 - 3] [i_0] = (((!(arr_2 [i_1]))) ? (-0 + var_16) : (((-2032171604 + 2147483647) >> (-31658 + 31686))));
                                arr_14 [i_0] [i_0] [i_0] [1] [i_0] = ((+(((var_12 % 2032171600) | (arr_2 [i_0])))));
                            }
                        }
                    }
                    var_21 = (((((((95 ? var_6 : 65535)) / var_2))) / var_1));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        var_22 = (((var_15 ? (arr_9 [11] [i_1] [9]) : var_16)));
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] [i_0] = var_1;
                        var_23 = ((-(arr_3 [i_0 + 1] [i_1])));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_24 = (max(((min(0, 1))), ((var_12 ? (min(var_12, 2)) : (arr_8 [i_6] [1] [i_6 + 2])))));

                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_0] = (((-(max(var_13, var_1)))));
                            var_25 = (((((~75) ? (((-(arr_3 [i_2] [i_2])))) : var_17)) | (((max(50331648, (!var_11)))))));
                            arr_26 [i_7] [i_0] [i_2 - 2] [i_2] [i_0] [i_0] = (max((((-(arr_15 [i_0] [i_0])))), (min(((var_5 ? (arr_20 [i_7] [i_6] [i_6] [i_2] [i_1] [i_0]) : 0)), ((((arr_11 [i_7] [i_6 + 2] [i_2 + 1] [i_2] [3] [1]) ? var_5 : var_0)))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2 - 2] [i_6 + 2] [i_0] = (!(arr_9 [1] [i_1] [i_2]));
                            arr_31 [i_0] [i_0] = ((!((min(((~(arr_15 [i_0] [i_0]))), (arr_23 [i_0] [i_1] [i_1] [i_6] [i_8]))))));
                            var_26 = var_11;
                            arr_32 [i_0] = (!var_2);
                        }
                        arr_33 [i_2] [i_0] = (~var_13);
                    }
                    var_27 = var_12;
                    arr_34 [i_0] [i_0] [i_1] [i_0] = (!(arr_21 [i_2] [i_0] [i_0] [i_1] [i_0 + 1] [i_2 - 2]));
                }
            }
        }
    }
    var_28 = (((((var_13 ? (min(var_13, var_12)) : (((-3489116508056401624 ? (-9223372036854775807 - 1) : 1)))))) ? var_14 : 1));
    #pragma endscop
}
