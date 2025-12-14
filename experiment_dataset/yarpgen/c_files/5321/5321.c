/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (((arr_2 [i_0]) | var_19));
                    var_21 ^= ((~(((arr_8 [i_0]) ? var_2 : 80))));
                    var_22 = (max(var_22, var_5));
                }
            }
        }
        var_23 = (min(var_23, ((((arr_9 [i_0]) - (arr_9 [i_0]))))));
        var_24 = (max(var_24, var_14));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_25 *= (arr_7 [i_3] [i_3]);
        arr_13 [10] = (((((var_7 | (((arr_4 [i_3]) >> (((arr_7 [i_3] [i_3]) - 69))))))) / (((((var_16 | (arr_9 [i_3])))) ? -1862345426 : (((arr_2 [13]) ? var_7 : var_3))))));
    }
    var_26 = var_8;
    var_27 ^= ((min(var_8, (!var_0))) >> (var_11 + 134));
    #pragma endscop
}
