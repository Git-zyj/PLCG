/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max(((max(var_0, var_10))), var_8)))));
    var_12 = (((((-10456 ? -41 : 127))) ? ((((max(var_9, var_10))) ? var_0 : ((min(var_6, var_4))))) : (var_5 >> -0)));
    var_13 = (~(((min(var_8, 26109)))));
    var_14 = ((!(((9223372036854775807 ? 9223372036854775788 : -58)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((var_9 ? (min(((min(var_10, var_8))), 18)) : ((((3951 ? 127 : 32767))))));
                var_16 += ((((min(var_1, (arr_1 [i_1 + 1])))) ? (arr_1 [i_0 - 1]) : (((var_0 ? var_9 : var_8)))));
                var_17 = var_10;
            }
        }
    }
    #pragma endscop
}
