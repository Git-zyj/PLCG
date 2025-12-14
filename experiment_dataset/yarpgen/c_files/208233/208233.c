/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(var_14, var_6))) >> var_4))) && (((var_6 ? ((var_9 ? var_6 : var_3)) : (var_3 > var_0)))));
    var_21 ^= (min(var_17, var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = var_17;
                    var_23 = ((((max(var_11, var_15))) ? var_0 : (-1605439130858408418 / -1605439130858408428)));
                }
            }
        }
    }
    var_24 = var_11;
    var_25 = ((((((var_3 <= var_14) ? var_13 : ((var_18 ? var_10 : var_18))))) || (((var_11 ? (((var_4 ? var_12 : var_4))) : var_16)))));
    #pragma endscop
}
