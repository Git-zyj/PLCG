/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 7;
    var_16 ^= var_2;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_7, (((arr_1 [i_0 + 2]) ? var_13 : (arr_2 [i_0 + 1])))));
        var_18 = ((-8 ? -22256 : 1));
        var_19 |= var_9;
        var_20 = (min(var_9, var_13));
        var_21 = ((var_14 ? (var_11 >= var_14) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = var_4;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_3 + 1] [i_2] [i_1] = (!var_4);
                    var_23 = ((-(arr_5 [i_3 - 1])));
                    var_24 = (min(var_24, -1));
                }
            }
        }
    }
    var_25 ^= var_1;
    #pragma endscop
}
