/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_2 ? (((255 ? var_13 : ((-1 ? var_4 : 2))))) : 4294967295)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = var_3;
                var_21 = (((255 ? 255 : 31)));
            }
        }
    }
    var_22 = ((4294967282 ? var_18 : (var_0 >= 127)));
    var_23 = (max(((max(2, var_1))), var_3));
    var_24 = (!-var_0);
    #pragma endscop
}
