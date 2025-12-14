/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = (max(var_19, (((0 ? -1634294327 : -3334)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (arr_5 [i_2] [7]);
                    arr_10 [i_2] = (-9223372036854775807 - 1);

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_21 ^= (-(arr_0 [10] [i_2]));
                        arr_14 [i_2] [i_1] = ((((var_14 ? -4084419896172986695 : var_2)) - ((var_4 ? (arr_7 [i_3 + 3] [i_1]) : 57635))));
                        var_22 = (max(var_22, ((((arr_6 [i_1 - 1] [i_1]) ? (arr_6 [i_1 + 1] [5]) : var_13)))));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_17 [i_2] [13] [i_2] [i_2] [i_2] [i_2] [i_2] = (((!1) * (arr_3 [i_3 - 1] [i_4 + 1])));
                            arr_18 [i_2] [5] [i_2] [10] [i_4] = ((~(arr_0 [i_0] [i_0])));
                        }
                    }
                }
                var_23 ^= -1634294354;
                var_24 = (arr_13 [i_0] [i_1]);
                arr_19 [i_0] = (min((~var_17), (arr_9 [i_1 + 2] [0] [14])));
            }
        }
    }
    var_25 = (min(((((max(var_6, var_16))) ? 1634294344 : var_13)), var_8));
    var_26 = 65535;
    #pragma endscop
}
