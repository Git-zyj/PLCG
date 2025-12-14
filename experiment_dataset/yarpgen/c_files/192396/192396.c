/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_14 += ((-(arr_5 [i_1 + 1] [14])));
                var_15 *= (9223372036854775807 || 9223372036854775807);
                var_16 -= 59234;
            }
        }
    }
    var_17 ^= min((~9223372036854775807), -7583);
    var_18 = ((-(((var_7 ? var_4 : var_7)))));
    var_19 = var_6;
    #pragma endscop
}
