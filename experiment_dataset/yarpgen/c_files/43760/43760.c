/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((min(((var_16 ? var_18 : var_8)), -58))) && ((min(var_18, (min(var_14, var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((min(var_13, (arr_3 [i_0])))) ? (arr_3 [i_0]) : ((var_14 ? (arr_3 [i_0]) : var_4))));
                var_20 = (((((-(arr_5 [i_0])))) ? (((arr_1 [i_0] [i_0]) ? -34 : ((var_15 % (arr_3 [i_0]))))) : -var_9));
                arr_7 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = -var_18;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_21 ^= ((var_10 | (arr_12 [i_2] [i_2] [i_2])));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_22 = 248;
                    var_23 = (max(var_23, var_13));
                    arr_21 [i_2] [5] [i_4] [i_5] = -10;
                    var_24 ^= ((var_3 ? var_15 : var_8));
                }
            }
            var_25 = (max(var_25, (arr_16 [i_2] [i_3] [i_3])));
        }
        arr_22 [i_2] [i_2] = var_17;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_26 = -var_15;
                        var_27 = (arr_31 [3] [i_9] [i_9] [i_9 + 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_41 [i_6] [i_6] [i_6] [0] [i_6] = ((!(-58 % 58)));
                                var_28 = (max(var_28, ((min((!var_2), (((arr_3 [i_6]) ? (arr_3 [i_11]) : var_4)))))));
                                var_29 *= (((arr_33 [i_10 - 1] [4] [i_10 - 1] [i_10 - 1] [4] [i_7]) && (arr_33 [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10] [i_10])));
                            }
                        }
                    }
                    arr_42 [10] = ((min(((max(var_11, var_9)), -1932828268))));
                }
            }
        }
        arr_43 [i_6] [i_6] = (arr_35 [i_6] [i_6] [i_6] [i_6]);
    }
    #pragma endscop
}
