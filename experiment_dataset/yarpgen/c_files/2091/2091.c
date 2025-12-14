/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_12 + 65535) / var_10))) ? var_4 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 ^= (arr_3 [4] [i_0 + 2]);
                var_17 = (min(var_17, (((((((arr_1 [i_0] [i_1]) | ((max(-9223372036854775794, (arr_5 [0]))))))) ? (((arr_2 [i_0 - 1]) ? 0 : (arr_2 [i_0 + 2]))) : (((((60 | (arr_6 [i_0]))) << (((823218617 - var_14) - 823218617))))))))));
                var_18 = (arr_1 [i_0] [8]);
            }
        }
    }
    #pragma endscop
}
