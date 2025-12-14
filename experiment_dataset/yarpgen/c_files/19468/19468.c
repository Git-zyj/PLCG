/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((~-1) || ((((-(arr_3 [i_0] [i_0] [i_0])))))));
                var_19 = (((3211921105 || (arr_1 [i_0]))));
            }
        }
    }
    var_20 = var_13;
    var_21 = (~(((((var_6 << (var_10 - 185)))) ? ((1 ? var_7 : 1)) : (!var_16))));
    var_22 = (max(var_22, 1));
    var_23 = ((8496035195503002156 || (((var_17 ? 1 : var_14)))));
    #pragma endscop
}
