/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (+(max((var_12 != var_1), var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 ^= var_4;
                    var_20 -= (15808669057893558506 ? ((((7895 ? var_10 : var_2)))) : (((0 ? 65535 : (arr_1 [i_2])))));
                    var_21 += ((max((arr_0 [8]), (!0))));
                }
            }
        }
    }
    var_22 = ((min(var_13, ((var_15 ? 20261 : var_6)))));
    var_23 = var_7;
    #pragma endscop
}
