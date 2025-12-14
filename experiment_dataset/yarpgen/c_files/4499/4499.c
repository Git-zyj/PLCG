/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = min(var_12, (min(-7523, -7523)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((min(var_11, var_16))) || var_3));
                    arr_9 [i_0] [i_0] = var_2;
                    var_18 = (min(var_18, ((min(var_2, var_16)))));
                    arr_10 [i_2] [i_2] [i_0] [i_0] = var_9;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_19 *= ((((~var_8) != (min(var_8, var_8)))));
        arr_13 [i_3] = var_9;
        var_20 ^= (((3163068832 <= 252) + -1665028073));
        var_21 -= var_3;
    }
    var_22 = (((min((min(var_14, var_10), var_12)))));
    var_23 = ((~(((((min(var_8, var_3))) || var_1)))));
    var_24 = ((~((min(var_0, var_0)))));
    var_25 = (((((min(var_15, var_2)) | var_16)) == (((min(var_14, var_16)) >> (16402357298494935529 && var_4)))));
    #pragma endscop
}
