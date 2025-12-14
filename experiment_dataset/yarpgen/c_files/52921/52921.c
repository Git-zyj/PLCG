/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((~-121) ? var_3 : (((max(15945, (arr_0 [i_0]))))));
                var_18 = ((((~((min(var_4, -121))))) < var_3));
                var_19 = (~-var_0);
            }
        }
    }
    var_20 ^= var_13;
    #pragma endscop
}
