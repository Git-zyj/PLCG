/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_1 [i_0] [i_1])));
                var_13 = (min(var_13, (((((min(3594083813, (arr_3 [i_0] [i_1])))) ? 4131 : var_1)))));
                var_14 = (~((+(((arr_2 [i_0] [i_1] [i_1]) & (arr_1 [i_0] [i_0]))))));
                var_15 -= ((((2147483647 ? (((arr_2 [i_0] [i_0] [i_0]) * (arr_2 [i_0] [i_0] [i_1]))) : (min((arr_0 [i_0]), (arr_2 [i_0] [i_0] [i_1]))))) < ((((((min(var_3, var_1)))) % (arr_0 [i_0]))))));
            }
        }
    }
    var_16 = ((((var_6 ? var_0 : (((min(-101, -111)))))) << (var_10 + 7239)));
    #pragma endscop
}
