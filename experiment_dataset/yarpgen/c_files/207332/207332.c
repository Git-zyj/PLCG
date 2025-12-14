/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((max(3525433740, var_7), 3525433727))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_8 [7] [i_0] [6] = var_9;
                    arr_9 [i_0] [12] = (!2944890416);
                    arr_10 [i_0] [24] [i_2] |= min(var_0, ((~((1856487743765283633 ? (arr_0 [10]) : var_4)))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [21] [i_3] = (min((arr_13 [i_0] [i_1 - 1] [1] [i_0]), ((var_3 ? (arr_13 [i_0] [i_1] [i_1 - 1] [i_3]) : (arr_13 [i_0] [i_1] [i_1 - 1] [20])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_0] = (arr_6 [i_0]);
                                arr_22 [i_4] [18] [18] [20] [i_3] [i_4] [i_5] = (((arr_4 [24]) ? ((((min(var_4, (arr_11 [i_5] [i_0])))))) : ((~(arr_15 [i_5] [i_4] [i_3] [i_1] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_30 [i_0] [i_6] = ((-var_1 ? ((-(arr_11 [i_0] [i_0]))) : var_4));
                        arr_31 [i_7] [i_0] [i_6] [i_1] [i_0] [i_0] = var_4;
                        arr_32 [i_0] [i_1] [i_6] [20] = var_12;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_36 [i_0] [i_0] = (((((var_0 ? 1 : ((min(99, (arr_15 [i_0] [i_1] [i_6] [i_8] [i_8]))))))) ? (arr_11 [i_1 - 1] [i_1 - 1]) : ((((max(16590256329944267993, (arr_18 [i_6] [i_0])))) ? (arr_27 [i_0] [i_1] [i_6] [i_8]) : (arr_33 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        arr_37 [i_0] [i_8] = (((arr_16 [i_0]) - (arr_33 [i_1 - 1] [i_1 - 1] [i_1])));
                        arr_38 [i_0] [i_0] = ((-((var_11 ? (arr_28 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0]) : (arr_16 [i_1])))));
                    }
                    arr_39 [i_0] [i_1] [i_6] = (((arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]) - (arr_3 [i_1] [i_1 - 1])));
                    arr_40 [i_0] [1] [14] [i_6] = (arr_1 [i_1 - 1] [i_1 - 1]);
                    arr_41 [i_0] [i_0] [i_6] = (((max(((var_10 ? (arr_15 [i_1] [i_1] [i_6] [i_1] [0]) : var_7)), (((-1102173477 ? var_12 : var_5)))))) ? (min((((var_10 ? 16383 : (arr_33 [i_0] [i_1] [i_6])))), var_7)) : (arr_23 [9] [i_1 - 1] [i_1 - 1] [i_1]));
                }
                arr_42 [i_0] [i_0] = (arr_5 [10]);
            }
        }
    }
    var_14 = ((var_0 != (!var_10)));
    var_15 = var_1;
    #pragma endscop
}
