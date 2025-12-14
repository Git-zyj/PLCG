/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 * var_9) ? var_9 : var_2)) | (((~(!260046848))))));
    var_13 = (min((((!var_5) ? (65530 / var_11) : (((max(var_10, var_5)))))), (((-536160977 ? var_8 : -6)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))) + 16994456059122532838));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (max(1, (arr_5 [i_0] [i_1] [i_2])));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_15 = arr_3 [i_0];
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_2 [14] [i_1 - 1]), (arr_5 [i_2] [i_1] [4])))) ? ((var_3 ? 18 : 80)) : ((max((min(-37, (arr_7 [i_0] [i_1] [i_0] [15]))), (arr_6 [i_0] [i_0]))))));
                    }
                    var_16 = (arr_5 [i_0] [12] [i_2]);
                    arr_13 [i_0] [i_0] [i_2] [i_2] = ((((min(26408, (arr_11 [i_0] [i_0] [i_1] [i_0])))) ? (arr_7 [1] [i_0] [i_0] [i_0]) : (max((min(30, var_11)), (243 != 0)))));
                    var_17 += (min((max(6, (arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (max((arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (arr_9 [i_2] [i_2] [i_2] [i_1] [i_0])))));
                }
            }
        }
        arr_14 [i_0] [i_0] = var_3;
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_18 = (min(var_18, (((+(((((var_1 ? (arr_18 [i_4] [i_4]) : 65535))) ? (((arr_26 [i_5] [i_5] [i_5] [i_7] [i_7] [12]) + var_3)) : (arr_16 [i_4 + 2]))))))));
                        var_19 = ((-(((arr_25 [i_6 - 1] [i_7] [i_6] [i_6 - 1]) ? (arr_25 [i_7] [6] [6] [i_6 + 1]) : (arr_25 [i_7] [i_7] [i_7] [i_6 + 1])))));
                        var_20 ^= (~var_11);

                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            var_21 = (arr_15 [i_7]);
                            var_22 = (min(((min((arr_17 [i_8 - 3]), (arr_17 [i_8 + 2])))), var_2));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_23 = (max(var_23, (arr_33 [i_5])));
                            var_24 = (min(((min((arr_28 [i_6] [i_5] [i_5] [i_5]), (arr_22 [i_6 + 1] [i_6] [i_4 - 1])))), (((!(arr_17 [13]))))));
                            var_25 = var_8;
                            var_26 &= (((((arr_20 [i_4] [8] [i_4]) ? var_11 : ((max((arr_32 [i_5] [0] [i_5] [0] [i_6]), var_3))))) / ((max((arr_23 [i_4] [i_4] [i_4] [i_6]), (arr_18 [i_4] [i_4]))))));
                            var_27 = (arr_26 [i_4] [9] [i_6] [i_6] [i_4] [i_4]);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                {
                    var_28 *= (min((arr_31 [i_4] [i_4] [11] [i_4 + 1] [i_4] [i_4]), (arr_20 [i_10] [22] [i_10])));
                    var_29 = ((+((var_4 ? var_2 : ((min((arr_36 [13] [13]), var_7)))))));
                }
            }
        }
        var_30 &= (min((((arr_19 [i_4 + 1] [i_4 + 1]) ? (arr_19 [i_4] [i_4 + 2]) : (arr_19 [i_4 - 1] [i_4 + 1]))), (arr_19 [i_4 + 2] [i_4 + 1])));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_31 |= (((arr_18 [i_12] [i_12]) ? (arr_8 [i_12] [i_12] [i_12] [i_12]) : ((((!(arr_23 [i_12] [i_12] [i_12] [i_12])))))));
        var_32 = (min(((min((((!(arr_11 [i_12] [i_12] [7] [i_12])))), ((~(arr_23 [i_12] [i_12] [i_12] [i_12])))))), (((max((arr_15 [i_12]), (arr_41 [i_12]))) % (((var_1 ? var_8 : var_4)))))));
    }
    #pragma endscop
}
