/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 < var_6) ? 12 : (!var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (max(var_20, -14598));
                arr_6 [i_0] [i_0] = (((0 ? 14598 : 7168)));
                arr_7 [i_0] = (~var_3);
            }
        }
    }
    #pragma endscop
}
