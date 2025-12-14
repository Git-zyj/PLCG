/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? (((6330673001133814787 ? 1 : 7))) : (max((((var_3 ? 1 : var_6))), 1638909863447005446))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 *= (max(((var_13 ? ((var_14 ? 384 : var_3)) : (((var_8 ? var_5 : 4))))), 1));
                    var_22 = (max(var_22, (((var_13 ? (((((var_10 ? var_13 : 1))) ? -var_14 : var_4)) : -24555)))));
                }
            }
        }
    }
    #pragma endscop
}
