/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((1 | -2739977559686559957), var_14);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(-2739977559686559957, 2739977559686559958));
                arr_6 [i_1] [i_0] = ((5545 >= ((-2739977559686559957 ? (var_15 && var_18) : 741789434))));
                var_20 = (max(var_20, var_17));
                arr_7 [i_0] [i_0] [i_1] = ((-(var_5 ^ var_18)));
                var_21 = (max(var_21, (((min(2739977559686559957, (17592186044415 < 1)))))));
            }
        }
    }
    var_22 = (2739977559686559961 || 7127974395232366579);
    #pragma endscop
}
