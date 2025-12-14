/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (max(((1 ? 1 : 5735486275424864401)), (((1 ? -104 : var_3)))));
                var_12 |= ((((((arr_6 [i_0 - 3] [i_1 + 2]) ? 1 : 34))) == ((var_0 ? var_9 : 1))));
            }
        }
    }
    #pragma endscop
}
