/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!var_1) << (((min(45, var_15)) - 26))))) ? var_9 : (min(var_4, ((var_11 ? var_0 : var_18))))));
    var_21 = (min(var_4, (min(var_8, var_11))));
    var_22 |= ((var_11 ? (((((237 ? 614 : -1460689460))) ? (~var_16) : var_2)) : (((var_8 >= var_2) ? -var_10 : (var_4 + var_12)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = -3922951355810867952;
        var_23 = (arr_0 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((((~var_15) ? (-8 ^ -9) : (arr_6 [i_1])))) / (var_7 || var_6)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_24 = (min(4294967285, (((arr_6 [i_3]) >> ((var_5 ? var_9 : (arr_5 [i_3])))))));
                    arr_13 [i_1] = (arr_12 [13] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
