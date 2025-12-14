/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((((~var_1) % (var_11 && var_6))), ((((~var_5) && 32505856))));
    var_13 &= ((~((((104 ? var_2 : 104))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 ^= 8;
                var_15 = (((((var_9 + 161) == (arr_0 [i_0] [i_1 + 1]))) ? (((~(arr_2 [i_0] [i_0])))) : (min(((min(var_3, var_10))), (((arr_4 [i_1]) ? 4294967295 : -13365))))));
                var_16 = 1;
            }
        }
    }
    #pragma endscop
}
