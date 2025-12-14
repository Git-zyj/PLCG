/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -35));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-1 ? -var_6 : (arr_2 [i_0] [7])));
                var_14 = (((((17 / (-17 / 562949953413120)))) ? ((((17 < 32134) ? (32110 == var_6) : (~1)))) : ((((-(arr_3 [i_0] [i_0]))) - -228))));
            }
        }
    }
    var_15 = min(var_0, ((((min(var_11, var_1)) <= var_3))));
    #pragma endscop
}
