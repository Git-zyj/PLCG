/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_5, (((var_5 ? var_10 : var_15))));
    var_20 = (0 <= ((max(0, 241))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (~31336);
                arr_4 [i_0] [i_1] [i_0] = ((((((arr_0 [i_1 - 2]) ? var_4 : var_17))) ? (((arr_0 [i_1 + 2]) / (arr_0 [i_1 - 2]))) : ((var_6 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))));
            }
        }
    }
    var_22 = ((248 ? ((var_0 ? (((min(235, 13)))) : ((var_2 ? var_8 : 215)))) : 1));
    #pragma endscop
}
