/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_11, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (((arr_5 [i_0]) ? ((((10 ? var_3 : (arr_6 [i_0] [i_0]))) | (((arr_3 [i_0]) ? 27362 : 14219647875688453188)))) : var_4));
                arr_7 [i_0] [i_1] = ((max((arr_0 [i_1]), (arr_1 [i_1]))));
                var_14 = ((((min(var_7, (min((arr_6 [i_1] [5]), -11528))))) ? ((3457947161 ? (((arr_2 [i_0 + 1] [i_0 + 1]) & var_9)) : var_5)) : (arr_6 [i_0 + 1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = ((((max((max((arr_12 [i_2] [i_3]), 1)), (!var_5)))) || var_7));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 = ((~(arr_20 [i_2] [i_3] [i_2] [i_5])));
                                var_17 -= ((-(arr_15 [i_6] [i_5] [i_4] [i_6])));
                                var_18 = (max(var_18, 11089958723583847322));
                                arr_25 [i_5] [i_5] &= 11089958723583847298;
                                var_19 = (((((-(arr_15 [i_3] [i_3] [i_4] [i_5])))) ? (((var_4 ? ((0 ? (arr_18 [i_3]) : 255)) : ((max((arr_14 [i_2]), var_5)))))) : (max(var_8, (((~(arr_10 [i_4] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
