/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = ((((((arr_5 [i_0] [i_1] [i_0] [i_1]) * (arr_5 [i_2] [i_1] [i_0] [i_0])))) ? (!-500) : var_11));
                    arr_9 [i_1] [i_0] = ((1 ? -4444564588082531911 : -73));
                }
                var_13 = ((-73 ? var_9 : (arr_3 [i_0] [i_0] [i_0])));
                arr_10 [i_1] [i_0] [i_0] = var_11;
                var_14 *= (max(((-4444564588082531911 ? 12810820334658352814 : 2147483647)), ((min((-9223372036854775807 - 1), -9223372036854775796)))));
                arr_11 [i_0] = (!673509346669029714);
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_15 = 1860;
        var_16 = (min(var_16, var_9));
    }
    var_17 = (--7679092709262608111);
    #pragma endscop
}
