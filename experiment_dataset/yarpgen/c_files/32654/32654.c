/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_13 != var_0) <= var_7)) ? var_3 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 |= (min((((arr_3 [i_0 + 2] [i_0 - 1]) ? (arr_3 [i_0 + 3] [i_0 - 1]) : (arr_3 [i_0 - 2] [i_0 - 1]))), ((max(1, 1)))));
                var_19 ^= max(-1, -158470626922144318);
                var_20 = -13;
                var_21 = var_9;
                var_22 = (min(1943829534359016355, 4087987361));
            }
        }
    }
    #pragma endscop
}
