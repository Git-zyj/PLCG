/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~(arr_1 [i_0] [i_0])))) ? 149 : ((1906319400 | (arr_1 [i_0] [i_0]))))) ^ 1906319400);
        var_12 = var_6;
        var_13 = (var_10 ? 1906319389 : ((9566960684983784684 ? -1906319389 : 29113)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0] [i_0] &= ((-5 && (arr_4 [i_0])));
            arr_9 [i_0] [i_0] = (((((9 * (arr_7 [i_0])))) > (arr_4 [i_0])));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_14 = (arr_10 [i_2] [i_0]);
            var_15 += (((((9566960684983784697 || var_3) >= (197 + 1745005707))) ? (-23313 && 1906319388) : 16));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_16 = 5482518469321921090;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] = 3850328285;
                        var_17 = var_2;
                        var_18 = ((var_6 <= ((min(var_6, 197)))));

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_19 += ((~((var_1 ? var_2 : (arr_17 [i_5 + 1] [i_6 - 1] [i_6] [i_6])))));
                            arr_25 [i_0] [i_0] [i_5] [i_6] = (((-1906319389 > -1906319389) % ((219 ? var_6 : (arr_20 [i_3] [i_0 + 2] [i_0 + 2])))));
                            var_20 ^= var_1;
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_29 [i_0] [i_5] = (((arr_7 [i_0]) % 29113));
                            arr_30 [i_5] [i_3] [i_5] = (min(var_8, (((!((max(-807744757, 4))))))));
                            var_21 = 444639010;
                            var_22 += (var_0 ^ 0);
                            var_23 = (min(13115705825918085455, ((((arr_15 [i_4]) + (arr_15 [i_3]))))));
                        }
                    }
                }
            }
            var_24 = ((((((-1906319400 ? (arr_28 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_3]) : (arr_10 [i_0] [i_3]))) - 197)) == (((~((max(var_8, (arr_12 [i_0] [i_3] [i_0])))))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 14;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = ((5707742680783292915 ? 2599562181 : 16));
        var_25 = (arr_13 [i_8] [i_8] [i_8]);
        arr_35 [i_8] = 0;
        var_26 *= ((!(arr_6 [i_8] [i_8])));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_27 = var_2;
        var_28 = (max(var_28, ((((((arr_37 [i_9]) == 807744756)) ? (((arr_37 [i_9]) | 14108732370661354862)) : (var_1 > 255))))));
    }
    var_29 = var_11;
    var_30 = (max(var_30, var_2));
    var_31 = var_7;
    var_32 += var_10;
    #pragma endscop
}
