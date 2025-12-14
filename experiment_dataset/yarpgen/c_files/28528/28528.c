/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(var_7, (~-var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((max(38570, 1667854310))) ? var_13 : (arr_4 [16])));
                var_20 = (min(var_20, (((((arr_3 [i_0]) ? (((arr_1 [i_0 + 1] [i_0 + 1]) | var_6)) : (((7 << (((arr_4 [1]) - 15549))))))) > (((((~13033) != var_16))))))));
            }
        }
    }
    var_21 = (var_14 % var_17);
    #pragma endscop
}
