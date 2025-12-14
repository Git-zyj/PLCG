/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((((var_3 ? var_10 : var_6))), 17317308137472)) > var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (arr_0 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = var_10;
                                var_15 = (min((arr_6 [i_0] [i_2] [i_2] [i_0]), ((max((arr_6 [i_1] [i_2] [i_3] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_16 = ((((arr_3 [i_0] [i_1]) & (arr_10 [i_0]))) - (arr_10 [i_0]));
                    arr_11 [i_2] [i_2] |= (arr_1 [i_0] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_17 = (max(1, (arr_10 [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_18 = (arr_6 [i_6] [i_7] [10] [i_6]);
                            var_19 *= (arr_15 [i_5] [i_7]);
                            arr_23 [i_7] [i_6] [i_7] [i_7] = ((1697332311 || 1697332323) % (((arr_12 [2]) ? (arr_13 [i_5]) : (((((arr_17 [i_8] [i_7] [i_6]) > 2597634984)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
