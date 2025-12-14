/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_10));
    var_16 = var_14;
    var_17 = (min(var_17, (((var_5 ? ((((min(175, var_10))) - ((var_5 ? -4451186670795061078 : var_7)))) : var_9)))));
    var_18 ^= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [12] [i_1] = (((arr_1 [7]) - var_5));
                var_19 ^= var_10;
                var_20 = (((((~(var_1 - var_11)))) && (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
