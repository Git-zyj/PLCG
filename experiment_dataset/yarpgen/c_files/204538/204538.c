/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_12 *= (arr_5 [10] [i_2]);
                    arr_8 [i_0] [i_0] = (!var_3);
                    var_13 = (arr_5 [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [3] = (arr_7 [i_0] [i_0] [8] [i_0]);
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_14 = ((-(((arr_7 [i_0] [i_3 - 1] [i_3] [i_3]) ? (arr_10 [i_1] [i_3 - 1] [i_3]) : var_4))));
                    arr_12 [i_0] [i_1] = (((((-(min(15551421012177226726, var_2))))) ? -var_6 : (arr_1 [5] [0])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_15 ^= ((~((~(arr_5 [i_0 - 1] [11])))));
                                arr_20 [i_0] [i_5] [5] [6] [15] [i_5] = arr_7 [i_0 - 4] [i_1] [11] [i_4];
                                var_16 |= (min((-9223372036854775807 - 1), (arr_11 [i_0] [i_1] [i_3] [i_5 + 2])));
                            }
                        }
                    }
                }
                var_17 = (min(var_17, (!var_4)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_18 = ((~((var_7 * (arr_22 [i_8])))));
                    var_19 = (arr_28 [i_7 + 2] [i_7 + 1] [i_7 - 1]);
                    arr_29 [i_6] [i_6] [i_6] [i_8] = (arr_26 [i_8]);
                    var_20 = ((~((-(((arr_27 [i_6] [i_6] [i_6] [i_6]) ? var_3 : 15551421012177226728))))));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_21 = ((-(arr_31 [i_6] [i_6])));
                    arr_34 [i_6] [i_6] = ((arr_31 [i_6] [i_7 + 2]) ? (arr_33 [i_6] [i_7 + 2] [i_7 - 1] [i_9]) : (arr_26 [8]));
                    var_22 = 67;
                    arr_35 [i_9] [i_7] [i_6] = ((-(99 / 2895323061532324890)));
                }
                var_23 ^= 47547;
            }
        }
    }
    #pragma endscop
}
