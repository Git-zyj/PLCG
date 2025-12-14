/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_1, (min(4294967282, -32))))) ? ((max(((var_5 ? var_11 : 0)), -121))) : var_8));
    var_13 = ((1 ? (min(((var_1 ? 1 : 2251799813685247)), (1 != 6917529027641081856))) : (((4266818496279798790 ? (max(var_2, var_10)) : (!var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] |= (~32445);
                var_14 = -5277721095562764727;
            }
        }
    }
    #pragma endscop
}
