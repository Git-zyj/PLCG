/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = min((min(var_6, (arr_3 [i_1] [i_0 + 1]))), (min((arr_3 [i_1] [i_0 + 1]), 0)));
                var_21 *= (min((min((arr_2 [i_0 + 1]), 4611686018427387904)), (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_22 = (min(var_22, ((((~32767) | (((arr_4 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]) ? var_4 : 0)))))));
                    arr_6 [2] [i_1] = (var_1 & (((~var_0) ? (((min(var_11, var_3)))) : ((var_8 | (arr_0 [i_2]))))));
                    var_23 = ((~((63 ? 0 : 1))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_24 = (~(arr_5 [i_1]));
                    arr_10 [i_0 + 1] [i_1] [i_1] = ((127 ? 2048 : 19));
                }
            }
        }
    }
    #pragma endscop
}
