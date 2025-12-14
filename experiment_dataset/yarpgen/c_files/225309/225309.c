/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = -5;
    var_22 = (max(var_5, (max(var_13, ((-20637 ? 8285505089006523618 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_23 = (77 && -7551547733429285616);
                var_24 = (max(var_24, var_11));
            }
        }
    }
    #pragma endscop
}
