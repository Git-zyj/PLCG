/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 |= (max((min(var_2, var_14)), (max(0, 7))));
                var_20 -= var_14;
                var_21 = (max(var_21, var_15));
                var_22 = (min((min(((min(1, var_1))), (min(var_2, var_6)))), var_9));
                arr_4 [1] [4] [4] = (min(2082600690, 2082600698));
            }
        }
    }
    #pragma endscop
}
