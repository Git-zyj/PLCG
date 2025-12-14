/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = ((~((-5957478385591570217 ? 1 : 1))));
        var_14 = min((max(-5957478385591570236, 1)), (((arr_0 [i_0 + 1]) - (arr_1 [i_0 - 2]))));
        var_15 = ((3645898783296972731 ? 1 : -39));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((arr_1 [i_1]) ? (arr_3 [i_1]) : var_6);
        var_17 = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (~var_3);
        var_18 = ((arr_2 [i_2]) < (arr_1 [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_19 ^= 5957478385591570190;
                    var_20 -= (((57400 >> (-3645898783296972729 + 3645898783296972755))));
                    var_21 = ((1903763666 | (65508 || -14)));
                }
            }
        }
    }
    var_22 = (max(var_22, (((((min(var_9, (var_3 & 1)))) ? ((-480868718 ? 4294967294 : -3645898783296972731)) : ((min(4294967295, 0))))))));
    var_23 ^= var_11;
    var_24 = var_4;
    #pragma endscop
}
