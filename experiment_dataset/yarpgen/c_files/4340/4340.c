/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 & ((((((25 ? var_9 : var_4))) ? var_15 : 25)))));
    var_20 = ((2147483647 ? var_0 : (8435305867641181025 ^ 3839374742)));
    var_21 = (max((((var_11 >= ((24 ? 151 : 29))))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min((!9223372036854775807), ((4 >> (181 - 155)))));
                    var_23 = (min((!4325), ((-2893769357878746077 ? 14 : 25816))));
                }
            }
        }
    }
    #pragma endscop
}
