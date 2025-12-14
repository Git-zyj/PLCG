/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = 53;
                arr_6 [i_1] = (min((((~127) ? (-127 - 1) : 4393)), (min(0, (~127)))));
                var_11 = 127;
            }
        }
    }
    var_12 = 1;
    #pragma endscop
}
