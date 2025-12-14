/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 ^= (~var_3);
                arr_6 [i_0] [i_0] = var_11;
                arr_7 [i_0] = 8176;
                var_21 = var_18;
            }
        }
    }
    #pragma endscop
}
