/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 210;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = var_8;
                arr_5 [i_0] = 1;
            }
        }
    }
    var_14 = (min((((((max(123, 1)))) * 483335004)), (var_1 != 161)));
    #pragma endscop
}
