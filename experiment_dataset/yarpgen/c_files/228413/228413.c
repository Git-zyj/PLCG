/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_9));
    var_15 *= var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (65535 - var_2);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_16 -= ((var_4 != ((((((arr_1 [i_3]) ^ (arr_7 [1] [i_1] [7])))) ? (arr_4 [i_1] [8]) : 3571943793))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] = (((arr_0 [i_0]) * (arr_11 [i_4] [i_3] [i_2] [i_1 + 2] [i_0] [i_0])));
                            var_17 = ((((((!(arr_0 [i_1 - 1]))))) - (((arr_10 [i_1] [i_1 - 3] [i_3 + 1] [i_3 + 1] [i_4]) ? var_2 : (min((arr_6 [1] [i_1] [i_2] [1]), var_10))))));
                            var_18 = ((+((var_4 >> (((1 | var_4) - 1829654777))))));
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_19 = var_9;
                            var_20 = ((~(((arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]) | 45))));
                            var_21 = (max((arr_3 [i_2]), (~-7673701932458144429)));
                        }
                        var_22 = (((arr_6 [i_1] [i_1 + 3] [i_1 - 3] [i_1 - 3]) * ((1895749947 ? 143833713099145216 : 0))));
                        var_23 = -1953484899;
                    }
                }
            }
        }
    }
    #pragma endscop
}
