/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 += ((((min((var_6 == var_11), (min(52615, var_3))))) ? var_7 : var_10));
                var_14 = (!(((92 ? (((var_0 ? var_7 : 12921))) : ((40 ? -119 : 219993377))))));
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
