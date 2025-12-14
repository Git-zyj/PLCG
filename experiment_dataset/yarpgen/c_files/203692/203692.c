/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 5328;
                    var_17 -= (var_13 ? 3731 : (max(((var_13 ? -3732 : 2147483629)), (arr_7 [i_0]))));
                    arr_9 [i_1] = 2147483629;
                }
            }
        }
        var_18 = -3731;
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_19 = 3747;
        arr_12 [i_3] = ((3715 && ((max(3747, 3731)))));
        var_20 = (min(var_20, (((var_2 != (max(3705, ((-(arr_10 [i_3 + 1]))))))))));
        var_21 = 3747;
    }
    var_22 = var_4;
    #pragma endscop
}
