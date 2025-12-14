/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-4645041626216452008 || (((-61 ? (25 | var_7) : -37)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (-18 - 56)));
                    arr_9 [i_0 + 3] [i_0 + 3] [i_0] = ((!((max(var_8, 63)))));
                    var_12 = (max(var_12, (!-71)));
                }
            }
        }
    }
    var_13 += ((((var_2 | (~-51)))) ? -61 : var_8);
    var_14 = var_8;
    var_15 = (max(var_15, var_6));
    #pragma endscop
}
