/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((((-127 - 1) + 2147483647)) >> (127 - 125)));
    var_15 = var_13;
    var_16 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((~(arr_3 [i_0] [i_0] [i_0])))));
                arr_6 [i_1] = ((((-8 ? 127 : (-127 - 1))) >> (((((arr_0 [i_0] [i_0]) ? ((110 ? (-127 - 1) : 1252260328)) : ((var_2 ? 1121 : (arr_4 [i_0] [i_0] [i_1]))))) + 155))));
                var_18 = (!106);
                arr_7 [i_0] [i_1] = ((21552 ? var_13 : 1792));
            }
        }
    }
    #pragma endscop
}
