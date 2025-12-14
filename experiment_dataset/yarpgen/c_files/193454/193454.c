/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(52385, var_9))))) > (var_6 - var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (((-1341817492 && 2305825417027649536) - ((13150 ? 4094 : 1))));
                    var_17 = ((+(((~var_2) ? (min(var_12, var_7)) : (arr_0 [i_1 - 1] [9])))));
                    var_18 = (-((var_2 ? ((var_14 ? 4294967292 : var_4)) : (((var_8 ? var_9 : (arr_0 [i_0] [1])))))));
                }
            }
        }
    }
    var_19 = -var_11;
    var_20 = (max(var_0, ((((var_13 || var_9) && 383785874)))));
    #pragma endscop
}
