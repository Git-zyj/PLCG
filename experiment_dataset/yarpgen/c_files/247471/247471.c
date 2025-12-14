/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] |= (((((arr_1 [i_0]) || var_8)) ? -53 : var_7));
        var_14 = (~2434707998);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 2] = ((var_0 ? var_4 : var_12));
                        var_15 = (max(var_15, (((2434708009 ? (((0 ? 16383 : 1598534709))) : 1860259275)))));
                    }
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = (max(var_0, (~var_8)));
    #pragma endscop
}
