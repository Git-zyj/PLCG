/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((!((min(136, (arr_5 [i_1]))))));
                var_18 = ((-4156649159 && ((((arr_3 [i_0] [i_1]) ? var_11 : 131)))));
            }
        }
    }
    var_19 = var_7;
    var_20 = -var_10;
    var_21 = (!((((var_9 ? var_2 : var_15)))));
    #pragma endscop
}
