/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 |= -28476;
                arr_4 [i_0] [i_1] [i_1] = (!var_12);
            }
        }
    }
    var_14 = var_12;
    var_15 = (!-4898);
    #pragma endscop
}
