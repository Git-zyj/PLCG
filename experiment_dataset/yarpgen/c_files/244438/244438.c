/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(-74738457, (max(3843698938, var_0))))) ? (min(var_12, -3328671473)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = -16259;
                var_15 = var_4;
            }
        }
    }
    var_16 = 47497;
    #pragma endscop
}
