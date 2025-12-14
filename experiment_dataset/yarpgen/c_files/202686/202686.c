/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (max(var_20, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((((arr_2 [i_0]) != (arr_2 [i_0]))) ? -2147483647 : 1));
                var_22 = ((2147483647 ? -2111417813 : -390647346));
            }
        }
    }
    var_23 = (((2526741046 + 2266426197) ? 5 : 3670016));
    #pragma endscop
}
