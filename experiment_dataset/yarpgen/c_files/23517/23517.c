/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 23;
    var_21 *= (~1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (arr_6 [i_0 + 2] [7] [7])));
                var_23 = var_0;
                arr_7 [i_0] = min((((13 ? var_15 : (((max(var_18, -11903))))))), (((((arr_6 [i_1] [i_0] [i_0 - 2]) || 1487)) ? var_10 : var_16)));
                arr_8 [i_0] = ((min(0, (((arr_2 [i_0]) / 11781)))));
            }
        }
    }
    var_24 = var_18;
    var_25 ^= var_4;
    #pragma endscop
}
