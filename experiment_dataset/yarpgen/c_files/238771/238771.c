/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (192 + 0);
                arr_7 [i_0] [i_0] [6] = 20;
                arr_8 [i_0] [i_0] [i_1] = ((((max(6028640704022708859, var_3))) && ((!(arr_3 [i_0] [i_0])))));
            }
        }
    }
    var_19 = (max(var_19, (((-22 ? 12 : var_18)))));
    var_20 = ((-1 ? 234 : var_15));
    #pragma endscop
}
