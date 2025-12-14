/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-1123656348 ? -1762524132 : ((((-1 ? -1 : 581)))));
    var_15 |= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (((min(64947, -1))) ? ((64954 ? 1 : 581)) : 65535);
                var_17 &= 458752;
                arr_6 [i_0] = var_2;
            }
        }
    }
    var_18 = var_3;
    var_19 = ((((max((max(var_5, var_5)), var_13))) ? ((65535 ? var_2 : (max(904351656, var_6)))) : 61797));
    #pragma endscop
}
