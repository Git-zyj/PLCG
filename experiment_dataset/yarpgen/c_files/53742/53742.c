/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((~(min((arr_1 [i_0] [i_2]), -1)))))));
                    var_16 = (min(var_16, (min((((min((arr_0 [i_2]), var_5)))), (min(var_13, ((210619501 ? 4566053180138336175 : 1))))))));
                }
            }
        }
        var_17 = arr_4 [i_0];
        var_18 = ((max(var_7, (((var_1 ? var_1 : var_1))))));
        arr_10 [i_0] = ((((arr_6 [i_0] [1]) % var_7)));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_4] = (((1 * 0) ? (var_2 & 65535) : (((max((arr_0 [i_3]), -117)) << ((((max(12, (arr_8 [i_3] [i_4])))) - 65497))))));
                var_19 = (min(var_19, var_10));
                var_20 = var_13;
            }
        }
    }
    var_21 = ((var_11 ? ((var_13 ? var_12 : (841188422 || var_5))) : var_9));
    var_22 ^= var_1;
    #pragma endscop
}
