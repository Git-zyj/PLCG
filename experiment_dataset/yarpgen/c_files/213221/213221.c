/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = -3700462;
                var_21 = (max(var_21, var_6));
                arr_4 [i_1] = ((71 / (max(var_12, 16))));
            }
        }
    }
    var_22 = 656674814;
    var_23 = (min((((!(((var_3 ? var_1 : var_11)))))), var_0));
    var_24 = (max((((!((min(var_2, var_7)))))), var_13));
    #pragma endscop
}
