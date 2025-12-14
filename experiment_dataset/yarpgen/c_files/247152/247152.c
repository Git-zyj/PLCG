/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = ((-((197 ? (!var_2) : var_12))));
    var_18 = ((!(-239 * -1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((((~var_12) ? (((arr_0 [i_0]) ? var_0 : var_15)) : var_2))) ? ((255 ? 0 : 12126)) : (!var_13)));
                var_20 = (arr_3 [17] [i_0] [i_0]);
                var_21 = 1;
            }
        }
    }
    var_22 = -555827266;
    #pragma endscop
}
