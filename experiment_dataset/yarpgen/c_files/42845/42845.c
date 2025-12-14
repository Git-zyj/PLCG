/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_6, ((-68 ? (max(var_6, var_6)) : ((181 ? var_7 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [4] [0] &= (((max((0 << var_4), (~-920326317)))) ? ((~(~181))) : (arr_1 [i_0]));
                var_12 = -1;
            }
        }
    }
    #pragma endscop
}
