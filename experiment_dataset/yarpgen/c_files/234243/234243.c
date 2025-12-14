/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = 12269;
                    var_13 = (max(var_13, var_5));
                    var_14 |= -3981296286;
                }
            }
        }
    }
    var_15 ^= ((min(var_2, (max(104186385, var_6)))));
    #pragma endscop
}
