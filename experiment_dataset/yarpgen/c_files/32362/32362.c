/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((((127 / 1) ? 255 : 1))) ? ((((12925551792201238357 << (var_7 - 1191458849))) - 0)) : (arr_1 [i_0]))))));
                var_12 = (arr_1 [1]);
                var_13 ^= (-var_4 ? (arr_1 [i_0]) : ((var_8 ? (arr_1 [i_0]) : ((var_3 - (arr_2 [i_0] [i_0] [i_0]))))));
                var_14 = (~((-(((arr_2 [i_0] [i_0] [i_1]) ? var_1 : var_0)))));
                arr_4 [i_0] [i_1] [i_0] |= (min((((arr_1 [i_0]) / var_6)), -var_9));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 = ((((1 ? 183060271322589147 : 120)) * var_8));
        var_16 = ((((-(arr_6 [i_2])))) ? (((((2873477588475262706 << (10393716942757478666 - 10393716942757478665)))) ? ((var_4 ? var_9 : var_2)) : (arr_7 [i_2]))) : var_9);
        var_17 += (!var_1);
        arr_8 [i_2] [5] = ((49 ? 0 : 67));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 = (arr_6 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_19 = (arr_5 [i_3] [i_4 - 1]);
                    arr_17 [i_4] [i_4] [i_5] = (((~14) ? ((1 ? 1076834495157630863 : 2268388737)) : ((((arr_14 [i_3] [i_3] [i_4] [9]) % var_0)))));
                    var_20 = (arr_13 [i_4 - 1] [i_4]);
                    var_21 = (((3355767051719436818 >> var_1) ^ ((68 ? var_1 : var_2))));
                    var_22 = (min(var_22, ((((~var_6) ? (~var_3) : ((var_9 ? var_5 : var_9)))))));
                }
            }
        }
        var_23 ^= (((arr_6 [0]) ^ var_9));
    }
    var_24 = 13168824742380469141;
    var_25 = ((var_2 / (var_9 && var_1)));
    #pragma endscop
}
