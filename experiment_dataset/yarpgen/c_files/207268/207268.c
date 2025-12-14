/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((max(16, 0)) <= ((((3 & 1) <= ((~(arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = ((((-9223372036854775807 - 1) ^ 14797)));
                    var_22 = 253;
                }
            }
        }
        var_23 = ((((((((arr_2 [10] [12] [10]) ? -1 : var_7)) + -9223372036854775785))) / (min(1, var_1))));
        var_24 = (~3);
    }
    var_25 -= var_17;
    #pragma endscop
}
