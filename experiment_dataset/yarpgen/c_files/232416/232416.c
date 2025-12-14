/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-26331 ? var_1 : (min(var_7, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [10] [0] = (((arr_0 [2] [i_1]) || (((-((var_1 ? var_8 : var_4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1 - 1] [i_1 - 2] [i_1] = (((((var_9 >= ((var_11 ? var_9 : var_4)))))) * var_14);
                            var_16 = (~18446744073709551615);
                        }
                    }
                }
                var_17 = (min(var_17, (var_13 && -108)));
            }
        }
    }
    #pragma endscop
}
