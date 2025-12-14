/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 >= ((((((1 << (7082964020772477355 - 7082964020772477348)))) > var_0)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_11 = ((14514278281179185149 ? 136 : 1225430165));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 = (min(var_3, ((((~var_1) || (!1832879747))))));
                        var_13 = ((((((var_9 || var_4) ? (max(var_1, var_5)) : (!var_0)))) && (!var_3)));

                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            var_14 = ((((!(var_1 || var_5))) || (2985734141 || -29696)));
                            var_15 = (max(var_15, (((((((((var_4 ? var_5 : var_1))) ? ((var_2 ? var_6 : var_7)) : (((-32767 - 1) + 20987))))) - ((var_5 + (var_1 / var_1))))))));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_16 = ((!((max(((max(var_5, var_4))), ((var_7 ? var_0 : var_2)))))));
                            var_17 = ((((var_3 ? (!var_0) : ((var_7 ? var_3 : var_4)))) << (~-31)));
                            arr_14 [i_1 - 1] [i_1] [i_1] [i_0] [8] = ((((((((var_9 + 2147483647) << (var_7 - 646137090)))) ? var_1 : (((var_5 ? var_3 : var_5))))) | (var_2 ^ var_3)));
                        }
                        var_18 |= ((((var_9 ? ((206 >> (76 - 60))) : ((1 << (-17 + 37))))) % var_5));
                    }
                }
            }
            var_19 *= ((~(((1 != ((1 ? -93 : -68)))))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_20 = (!-68);
                            var_21 = ((((6631186446989595118 ? 96 : 12219)) < (((!(var_4 & var_1))))));
                            arr_22 [i_0] [i_1 - 1] [i_6] [i_7] [i_6] = var_9;
                            var_22 = (+-1);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_26 [i_0] = ((((-14512 ? var_2 : 1)) & ((var_4 ? var_6 : var_8))));
            arr_27 [i_0] [i_9 + 3] [i_0] = (((!var_9) >= (!104)));
            var_23 = ((3687430017 ? -4085571381577315285 : 131071));
            var_24 *= (140 >= 9185);
            arr_28 [i_0] [i_9] = ((var_0 << (var_8 - 240)));
        }
        var_25 |= ((((min(((var_4 ? var_1 : var_7)), (((var_7 ? var_5 : var_0)))))) || (var_4 <= var_3)));
        arr_29 [i_0] = (((max(-var_5, (!var_3))) << ((((var_9 ? var_3 : var_5)) - 1042))));
        var_26 = ((((max((var_0 >= var_0), var_7))) ? (1501673312 == 225) : (((((max(var_3, var_3))) == ((var_3 ? var_6 : var_8)))))));
        var_27 = (min(var_27, (-31 > -32)));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((((((~var_5) || ((max(var_8, var_9)))))) * ((min((var_6 >= var_2), (max(var_5, var_9))))))))));
        arr_32 [i_10] = (max(((var_4 ? (var_9 / var_5) : ((max(var_3, var_2))))), ((((max(-1, 1))) ? (253 - -7) : ((var_7 ? var_7 : var_6))))));
        var_29 = ((((((~var_2) & (-55 | var_5)))) & (((((var_7 ? var_4 : var_3))) ? var_3 : var_1))));
        var_30 &= ((((97 ? 117 : 2)) * ((20 ? 32473 : 50))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        var_31 = (max(var_31, (((var_4 ? -var_0 : (var_7 >= var_7))))));

        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            var_32 ^= (var_3 < var_0);
            var_33 = ((97952972 ? -7667 : 32479));
        }
        for (int i_13 = 4; i_13 < 11;i_13 += 1)
        {

            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                arr_43 [i_11 + 1] [i_13] [i_14] = (var_1 ^ var_6);
                var_34 -= ((var_8 ? var_2 : var_7));
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_35 = ((var_5 ? var_7 : var_7));
                            var_36 = ((!(((var_6 ? var_7 : var_9)))));
                        }
                    }
                }
            }
            var_37 -= ((-31309 ? 16735622841424109517 : 0));
            var_38 = 199571030;
        }
        var_39 = (max(var_39, ((((var_5 >= var_2) ? (var_2 >= var_5) : var_1)))));
    }
    var_40 |= var_1;
    #pragma endscop
}
