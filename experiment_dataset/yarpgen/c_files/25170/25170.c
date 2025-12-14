/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? var_13 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_17 = ((min((arr_0 [i_0]), (arr_4 [16] [i_1] [i_2]))) * (arr_1 [i_0] [17]));
                    var_18 *= arr_3 [i_2] [i_1] [i_0];
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_14 [i_0] = arr_8 [i_1] [i_1] [i_0];
                        var_19 = (arr_1 [i_0] [10]);
                        arr_15 [i_0] [i_0] = var_3;
                    }
                    arr_16 [i_0] [1] = (((((arr_13 [i_0] [15] [i_3] [i_3] [i_3]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]))) / (min(var_7, var_4))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 *= (max(((21435 ? var_6 : (arr_17 [i_1] [8] [2] [8] [4]))), ((((((((arr_10 [i_6] [1] [i_1] [i_0]) && (arr_0 [12]))))) == 7719903281681314950)))));
                                var_21 = var_4;
                            }
                        }
                    }
                    arr_24 [i_1] [i_0] [i_0] [i_0] = (((4294967295 ? (arr_12 [i_0] [i_0] [i_1] [17] [10] [i_3]) : (arr_2 [i_0]))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_0] [8] [11] = ((var_7 ? var_7 : (arr_26 [i_0] [i_1] [i_7] [i_1])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] = (arr_25 [i_0] [i_1] [i_7] [i_0]);
                                arr_33 [i_0] [i_1] [i_0] [i_8] [i_8] [i_9] = var_10;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    arr_37 [i_0] [i_1] = (max((((arr_21 [i_0] [i_0] [i_0] [i_0]) ? 1 : var_10)), (((20 > (arr_4 [i_10] [1] [1]))))));
                    arr_38 [8] [i_0] [i_1] [i_10] = (((((231 == (arr_8 [i_0] [i_0] [i_0]))) ? (arr_29 [i_10] [2] [11] [i_1] [i_1] [i_0]) : (max((arr_2 [i_1]), var_15)))));
                    var_22 *= ((!((max((var_11 && var_14), (arr_13 [i_0] [i_1] [i_10] [i_10] [5]))))));
                    var_23 |= arr_11 [i_0] [i_0] [1] [1] [i_10] [i_10];
                    var_24 = var_4;
                }
                arr_39 [i_0] [i_0] = ((max((arr_5 [i_0] [i_0] [i_0] [3]), (arr_5 [1] [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
