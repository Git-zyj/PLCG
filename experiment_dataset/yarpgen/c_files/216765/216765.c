/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = 756336009968661087;
                        var_14 *= (12289 <= 79);
                        var_15 = (~2246315658);
                    }
                }
            }
        }
        var_16 = 153;
        var_17 += (~4294967288);
        var_18 = 79;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((max((((var_0 ? 2855558231025447945 : (arr_10 [i_4] [i_4] [i_4] [i_4])))), (((11209 ? 954269401611711676 : var_11))))))));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_18 [i_4] [i_4] [i_4] = ((max((((var_7 ? var_4 : 65121))), var_11)) <= (min(1083351640, (arr_13 [i_5]))));
            arr_19 [i_4] [i_4] [i_5] = ((-1616295218 >= (~34)));
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = (max((64002 > -1372925838), ((2987072967 ? (-32767 - 1) : var_7))));
        var_20 ^= (1 ? (max(16129939335357234381, 31941)) : 1);
        var_21 = (min(3985, -816));
    }
    var_22 = ((((((var_6 & -8617) | (-31942 / var_10)))) ? (-7 && var_12) : var_4));
    #pragma endscop
}
