/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((!((max(((var_2 ? 213 : var_5)), (var_16 != var_9))))));
    var_18 = ((-(((0 && 0) ? (3 >> 0) : (max(var_10, var_10))))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 &= (max((((28 ^ 0) ? 19 : 1257317465)), 45335));
                var_21 = ((20185 - (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 + 1]) : var_14))));
                var_22 = ((-(((!(!var_6))))));
            }
        }
    }
    #pragma endscop
}
