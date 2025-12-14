/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (-7751941443467187109 / var_0);
                var_16 = (min(var_16, ((((((arr_1 [i_0]) != (arr_1 [i_0]))) ? (((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : var_5)))));
            }
        }
    }
    var_17 = ((~(min(((var_11 ? var_2 : var_13)), var_8))));
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 = (arr_10 [i_5] [i_4] [i_4]);
                                var_20 = (min(var_20, ((min((~2270971451), (arr_3 [i_2] [1]))))));
                                var_21 = (arr_6 [i_6] [i_3]);
                            }
                        }
                    }
                    var_22 = (min(var_22, (((~(((min((arr_14 [i_2] [i_2] [i_4 + 3] [8] [i_2 + 2] [i_2]), var_6)) / (arr_11 [6] [i_4 - 1] [i_2 - 3] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
