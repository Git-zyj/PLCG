/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 *= 127;
                    var_19 = (-2147483647 ? 1 : ((-21986 & (arr_2 [i_2]))));
                    arr_7 [i_1] [i_2] = (min(((((var_6 || (arr_2 [i_0]))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : ((((arr_5 [7] [7] [7] [i_2]) != var_0))))), var_1));
                }
            }
        }
        var_20 = (((((((arr_4 [i_0]) ? var_8 : -1)) % -21966)) & ((((arr_3 [i_0] [i_0]) > (((arr_0 [i_0]) & var_3)))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_21 = 1;
        var_22 = (((-27 | 43583) ? (((arr_8 [i_3]) ? (arr_8 [i_3]) : 20)) : ((((arr_9 [i_3]) | ((var_13 ^ (arr_9 [i_3]))))))));
        var_23 = (((arr_9 [i_3]) && (((arr_9 [21]) <= (arr_8 [i_3])))));
        arr_10 [20] [i_3] = (((7 ? (((arr_8 [i_3]) ? -27 : var_2)) : 1089544822983722655)));
        var_24 = (var_4 && 14462);
    }
    #pragma endscop
}
