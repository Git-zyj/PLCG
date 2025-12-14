/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = min((((var_13 ? var_5 : var_0))), ((((~var_10) ^ -18185))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += 65535;
                var_19 = (((~(arr_3 [i_0]))));
                var_20 = var_0;
            }
        }
    }
    var_21 = ((min(var_3, var_4)));
    var_22 = var_7;
    #pragma endscop
}
