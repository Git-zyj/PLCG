/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = 65535;
                            arr_13 [i_0] [0] [i_1] = (((((arr_11 [i_3] [i_2] [i_1] [i_1] [i_0] [1]) ? (arr_3 [i_0] [i_0]) : var_4)) * (1443624262 >= 1443624266)));
                            arr_14 [i_1] [i_2] [i_3] = ((-759678791 | (((arr_6 [i_3]) ? (((!(arr_0 [i_0])))) : (arr_3 [i_2] [i_3])))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                var_17 = ((151 ? var_13 : var_14));
                                var_18 = (min(var_18, (((var_5 ? (arr_16 [i_2] [i_1] [i_4 - 1] [i_4 - 1] [i_0]) : var_10)))));
                            }
                        }
                    }
                }
                var_19 = (-7044233595210988082 || -19090);
                var_20 = (i_1 % 2 == 0) ? ((((((((arr_16 [i_1] [6] [i_1] [i_0] [i_1]) + 2147483647)) >> (((arr_16 [1] [i_1] [i_1] [i_1] [i_1]) + 3034)))) | (max(75, ((-25170 ? (arr_12 [11] [11] [8] [i_1]) : 1443624262))))))) : ((((((((arr_16 [i_1] [6] [i_1] [i_0] [i_1]) + 2147483647)) >> (((((arr_16 [1] [i_1] [i_1] [i_1] [i_1]) + 3034)) + 349)))) | (max(75, ((-25170 ? (arr_12 [11] [11] [8] [i_1]) : 1443624262)))))));
            }
        }
    }
    var_21 = (((var_1 >= var_14) ? (~-4) : 7168));
    var_22 = (var_0 == 39022);
    #pragma endscop
}
