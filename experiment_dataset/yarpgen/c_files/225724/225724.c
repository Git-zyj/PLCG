/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((~((((max(504403158265495552, -63))) ? (13 % var_11) : var_14))))));
                    arr_10 [i_2] [i_0] [i_1] [i_2] = (arr_3 [i_0]);
                    var_19 |= ((var_0 + ((-var_12 ? ((max(4081392029, 1))) : (max(var_11, var_6))))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_20 += -13;
            arr_13 [i_0] [i_0] [i_0] = ((((max(var_3, var_5))) ? ((-(arr_9 [i_3] [0] [0] [i_3 + 2]))) : var_0));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_0] [i_0] [i_0] = ((arr_0 [i_0]) * (arr_7 [i_0] [i_0] [i_0]));
            var_21 = ((~((((arr_6 [i_0] [i_0] [i_4] [i_4]) > (arr_4 [i_0] [i_0]))))));
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [i_5] [i_6] [i_5] = ((!(((-15 ? (arr_24 [i_5]) : (((var_0 >= (arr_18 [i_5] [i_7])))))))));
                        var_22 = (min((((var_11 ? 32 : (-2147483647 - 1)))), (((arr_24 [i_5]) ? 1 : var_11))));
                        arr_27 [16] [i_6] [i_7] [i_6] [i_7] [i_8] &= (min((((!(((var_2 ? (arr_19 [0]) : var_0)))))), ((~((-(arr_22 [1] [1])))))));

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_23 *= var_14;
                            var_24 = (min(var_24, (((~(min((~8886441974857147945), (arr_20 [1] [1] [20]))))))));
                        }
                        var_25 = arr_21 [i_8];
                    }
                }
            }
            arr_31 [i_5] [i_5] = ((((max(((9223372036854775807 ? var_13 : var_15)), (((1 ? var_0 : 2064384)))))) ? (arr_25 [i_5] [i_5]) : ((var_14 ? (arr_28 [i_5] [i_5] [i_6] [i_6] [i_6 + 1]) : (arr_28 [i_6] [i_5] [1] [i_5 + 2] [i_5])))));
        }
        arr_32 [i_5] [i_5] = ((((var_5 != (arr_28 [i_5 - 1] [i_5] [14] [i_5] [i_5 + 2]))) ? ((min((arr_28 [i_5 - 1] [i_5] [i_5] [i_5 + 2] [i_5]), (arr_28 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5])))) : (((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5 + 2]) ? (arr_28 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2]) : (arr_28 [i_5] [i_5] [i_5 - 2] [i_5] [i_5])))));
    }
    var_26 = (~var_8);
    var_27 = ((~((var_0 * ((var_11 ? 6345926592140901231 : var_1))))));
    #pragma endscop
}
