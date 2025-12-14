/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((min((min((arr_8 [14] [i_0 + 2]), var_13)), -2005572303)))));
                    arr_9 [i_0] [i_0 + 3] [i_0] [i_0] = (min((arr_4 [i_1] [i_2]), ((+(min((arr_2 [i_1]), 1))))));
                }
            }
        }
    }
    var_15 = (min(var_15, (((min(((var_9 ? -3 : var_7)), -193))))));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 = min(-74, (((~-234853970) ? -1231954732 : (arr_12 [i_3] [i_3]))));
        var_17 ^= ((~((-((min(var_3, 124)))))));
        var_18 *= ((var_1 ? -22 : ((((((arr_12 [i_3] [i_3]) ? var_2 : 11905))) ? (77 * var_9) : (((arr_12 [i_3] [i_3]) ? 951267780871815620 : 1447881599))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = (arr_11 [i_4]);
        var_20 = (min(var_20, (arr_11 [i_4])));
        var_21 += ((-(arr_13 [i_4] [i_4])));
    }
    #pragma endscop
}
