/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((-(var_12 <= var_12))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 ^= (!((((-(arr_3 [i_0]))))));
                var_17 *= (((23010 || 63) % (((arr_0 [i_1 + 4]) ? 2006504421 : 2006504421))));
            }
        }
    }
    var_18 = (19 | -29548);
    var_19 = ((var_12 ? var_7 : -var_2));
    #pragma endscop
}
