/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((var_11 ? var_3 : var_11)) >> (var_11 >= var_2));
                var_16 = (max(var_6, (((~(var_5 || var_8))))));
            }
        }
    }
    #pragma endscop
}
