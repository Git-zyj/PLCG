/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (-3026158219676730533 || var_9);
                var_12 = (min(var_12, (arr_4 [i_1])));
                arr_6 [i_0] [i_0] = (min(((-(arr_4 [i_0]))), var_4));
            }
        }
    }
    var_13 = (min(((max(var_0, var_5))), (min(var_8, var_3))));
    #pragma endscop
}
