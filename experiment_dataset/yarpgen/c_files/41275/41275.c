/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((min(5212292401827110619, (!var_12)))) & (((var_10 & var_11) & (var_14 ^ var_5)))));
    var_16 = ((!((((min(3801, var_0)) << (((min(var_0, var_12)) - 1748458188)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (!((!((!(arr_2 [i_0 + 1] [i_0 + 1]))))));
                var_18 = (!1);
            }
        }
    }
    #pragma endscop
}
