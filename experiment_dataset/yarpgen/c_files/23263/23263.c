/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((8 ? 3407463508098834970 : 15039280565610716646));
                var_15 = (min(4611686018427387904, 3407463508098834969));
            }
        }
    }
    #pragma endscop
}
