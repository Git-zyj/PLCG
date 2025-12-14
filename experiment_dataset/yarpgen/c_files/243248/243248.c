/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min((var_12 >= var_12), (min(109, 109)))))) & (min((~109), ((var_9 ? var_11 : var_0))))));
    var_14 = (min(((~((max(109, 65513))))), (min(var_5, (var_9 & 1910586759)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 = (min(var_15, var_10));
                        var_16 = (((arr_4 [i_2] [i_2] [i_3]) ? (arr_8 [10] [3] [3] [3] [i_0 + 1] [i_3]) : 29126));
                    }
                    var_17 = ((((arr_5 [i_0 - 1] [i_0 + 2]) ? var_6 : var_0)) * (((-16 / (arr_0 [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
