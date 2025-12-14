/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((31575 ? var_6 : (((((min(var_15, var_10))) ? var_7 : (((var_4 ? var_5 : 4)))))))))));
    var_19 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 ^= ((((!((min(4, 4))))) ? ((var_12 ? (((4 ? -3421 : 64))) : 3730963528286288753)) : var_17));
                var_21 = (((var_1 ^ (min(var_14, var_7)))));
            }
        }
    }
    var_22 = (min((~var_8), 4));
    #pragma endscop
}
