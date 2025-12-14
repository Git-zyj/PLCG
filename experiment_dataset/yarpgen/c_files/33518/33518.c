/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = var_0;
        var_21 = (max(var_21, (~var_14)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_2] [i_3] = ((((var_9 | var_19) ? (((max(35, 1)))) : (-9223372036854775807 - 1))));
                        arr_11 [0] [i_2] [i_1] [0] &= ((~(((var_5 >= ((~(arr_5 [i_0] [i_0] [i_0] [10]))))))));
                    }
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = ((var_9 << ((min(var_18, var_11)))));
    var_24 = (min(var_24, -4749109473374798917));
    #pragma endscop
}
