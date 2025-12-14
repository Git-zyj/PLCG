/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((0 ? (18446744073709551615 | 135610182) : 4159357110))) ? ((((var_4 * 2139238355124480802) && (((21852 ? (arr_3 [i_1] [i_1] [i_0]) : var_14)))))) : -1226172563));
                var_18 = ((var_9 ? (((9212385564244487945 | 0) >> 1)) : (((-76 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                var_19 = (~-17);
            }
        }
    }
    var_20 = ((var_1 ? ((10758999427772450992 ? 308030281981296382 : -var_12)) : -850724333));
    #pragma endscop
}
