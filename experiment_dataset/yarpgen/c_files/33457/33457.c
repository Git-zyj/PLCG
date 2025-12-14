/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 += ((var_5 ? (max(var_13, ((var_1 ? 1 : 64)))) : -var_10));
                var_18 = (max((arr_0 [i_0]), (((-var_6 || (1 == 7))))));
                arr_4 [20] [i_0] = ((+((var_3 ? (arr_3 [i_1] [i_1]) : var_4))));
                var_19 = (min(var_19, ((min((max(-115742665, var_15)), (arr_0 [i_0]))))));
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
