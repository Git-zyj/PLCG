/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((((var_5 - (var_9 - var_1))) - ((-var_8 - ((6890583157323659293 ? var_8 : 71))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] = (((((arr_6 [i_0] [20]) <= var_7)) || 274877905920));
                        var_12 = (arr_0 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_14 [i_1 + 1] = var_9;
                        var_13 = (28432 % var_2);
                        var_14 = -196;
                        arr_15 [9] = (((arr_0 [i_2 - 1]) - (arr_3 [i_1 - 1] [i_2 - 1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_15 = var_0;
                        arr_19 [i_0] [i_1] [19] [i_5 + 1] = (0 > var_8);
                    }
                    arr_20 [i_0] [1] [i_2] = ((~((((~(arr_5 [12]))) + (var_6 < var_6)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_16 = var_8;
                                var_17 = (min(var_17, (((((arr_27 [i_7] [i_2] [i_2 - 1] [1] [4] [i_2] [i_0]) & (arr_21 [i_7] [20] [i_2] [i_0])))))));
                                var_18 = (((!var_7) > var_7));
                                var_19 -= (((arr_26 [i_2] [i_0] [i_2] [i_0] [2] [i_1] [i_7]) ? (((~((0 << (var_7 + 2716675939034562507)))))) : (max(0, (min(var_2, var_6))))));
                                arr_28 [i_2] &= (((-(arr_16 [i_7] [i_6] [i_2] [i_1]))));
                            }
                        }
                    }
                    var_20 = (min(((((2449227914 != (arr_25 [i_0] [i_1] [i_2] [15] [i_1 + 1]))))), -var_3));
                    var_21 = (min(var_21, (((+(max((arr_27 [i_0] [i_2] [i_2 - 2] [14] [i_1 - 1] [i_2] [12]), (arr_27 [i_0] [i_0] [i_2 + 1] [i_0] [i_1 - 1] [i_2] [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
