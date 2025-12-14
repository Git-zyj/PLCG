/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((((min(var_9, (arr_0 [16]))) * 4929505543236979534)), (((~(-127 - 1))))));
                var_15 += ((((min((arr_0 [i_1]), ((~(arr_4 [i_0])))))) ? (min(-9223372036854775800, 127)) : ((((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
            }
        }
    }
    var_16 = var_2;
    var_17 = ((var_0 ? 4433230883192832 : ((min(var_6, ((var_9 ? var_0 : var_8)))))));
    #pragma endscop
}
