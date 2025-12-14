/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((2282823044 ? var_7 : var_4));
    var_15 = (max(var_7, var_8));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(arr_5 [3] [i_1 - 1])));
                var_17 = (!var_0);
            }
        }
    }
    #pragma endscop
}
