/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_19;
    var_21 ^= 5293933876200649621;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = ((2128828679 ? var_5 : (arr_1 [i_0] [i_0])));
        var_23 = ((var_18 ? var_12 : ((((((var_19 ? (arr_0 [i_0] [i_0]) : (arr_2 [1]))) <= 90))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_16;
                        var_24 = (((1 < (arr_8 [i_0] [i_1] [i_2 - 3]))) ? var_3 : (min(66, (arr_2 [i_2 + 2]))));
                        var_25 = (arr_7 [5]);
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 = ((var_6 ? -820361123 : var_9));
        var_27 = var_3;
    }
    var_28 -= var_10;
    #pragma endscop
}
