/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (~1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((~(~var_2)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_22 = (max(var_22, (~7702832888547927099)));
            var_23 = (((arr_2 [i_0] [i_1]) % (((5 ? -1000538684 : 1)))));
            arr_7 [1] [1] = (1 ? 1057291709 : (arr_6 [i_0]));
            arr_8 [i_0] = ((~var_13) ? (arr_2 [8] [0]) : (arr_2 [i_0] [i_0]));
            arr_9 [5] [i_1] |= -1172732323381115415;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_24 = (((-1 + 2147483647) << (((arr_10 [i_0] [i_2]) - 1))));
            var_25 ^= 2097151;
            var_26 = (((arr_1 [i_0]) ? (arr_1 [21]) : (arr_1 [i_0])));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_27 = (((arr_0 [i_3]) ? (min((-2394358780605948442 | -19002), (~var_3))) : (((~(max(-19006, 2969762160)))))));
        arr_16 [i_3] [i_3] = ((((((-7702832888547927100 ? 4294967291 : (arr_11 [i_3] [i_3] [i_3]))) | var_11))) % (((var_12 << (arr_10 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] = var_2;
        arr_20 [i_4] [i_4] = ((~(max(35, (arr_17 [i_4])))));
    }
    var_28 = (((((min(var_17, var_5)))) ? (~var_15) : ((max((~1806196400), (~1))))));
    #pragma endscop
}
