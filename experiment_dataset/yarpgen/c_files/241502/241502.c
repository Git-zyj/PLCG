/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = 31;
        var_13 += ((var_11 ? -32745 : (var_2 || var_0)));
        var_14 = ((18369 ? var_8 : (arr_0 [i_0])));
        var_15 &= (((((6108429337800097610 ? -18370 : 65394))) ? 0 : ((((arr_0 [i_0]) ? var_7 : 1)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_16 = var_11;
        var_17 = ((((((((max(var_5, -18370))) || var_4)))) < (min(17932349294350579067, (((32744 ? var_4 : 18369)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 += (max(-18370, ((~((9223372036854775807 ? -23 : 18369))))));
                        var_19 ^= ((~((((((arr_4 [i_1 - 1] [13] [i_1 - 1]) || 1707870500117556530))) % ((-18360 ? 1316 : -10956))))));
                    }
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
