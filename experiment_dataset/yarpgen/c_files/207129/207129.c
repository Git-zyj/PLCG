/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max((max(var_14, 0)), ((min((min(var_0, 29600)), 4614)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((!((((4614 % var_10) | -var_10)))));
                var_20 = (((max(1, 124))) ? -1054574147 : ((var_7 ? var_17 : (arr_3 [i_1] [8]))));
                var_21 = ((+(max((arr_4 [i_0]), (max(-1054574147, -11535))))));
                var_22 -= (!29998);
            }
        }
    }
    var_23 = ((-((((var_13 << var_2) > ((max(var_9, var_9))))))));
    var_24 = (max((var_0 - var_16), (max(((min(var_13, var_14))), (max(1054574147, var_16))))));
    var_25 = (max(var_25, var_15));
    #pragma endscop
}
