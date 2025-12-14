/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 -= (((((var_11 - (((((arr_0 [i_0]) < (arr_0 [i_0])))))))) ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : (((arr_2 [i_0]) + (var_13 < var_11)))));
        var_20 ^= (((~3092982761) > var_10));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_21 *= (min(var_7, (min(47508, 18028))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_22 ^= (max(var_4, (min(0, -108))));
                var_23 = (min(var_23, (arr_7 [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_24 = (((((arr_8 [i_5] [i_3] [i_2 - 1]) / 18031)) == 126));
                            arr_15 [2] [2] [2] [7] [7] [i_5 + 1] [6] = var_14;
                            arr_16 [i_2] = (((((((var_9 != (arr_14 [18] [18]))) ? 2589816043 : (((var_18 ? var_1 : var_10)))))) * ((var_10 * (15226539865649466116 / -4547)))));
                        }
                    }
                }
            }
            var_25 = max(-var_10, (min((((arr_3 [4]) / 17218430896022326773)), var_6)));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_19 [i_6] [i_6] = (~148);
            var_26 = (arr_8 [9] [i_6] [i_6]);
        }
        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            arr_23 [i_1 + 1] [6] [15] = (max((47486 >= 152), (max((arr_14 [i_7 - 2] [i_7]), (arr_14 [i_7 - 3] [0])))));
            var_27 = 16;
            var_28 = (((arr_20 [i_7 - 1] [i_1] [i_1 - 2]) ? 12999103048599590007 : (~126)));
        }
        var_29 -= ((min((0 >= var_17), (((arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) == var_13)))) ? 1731 : (((63805 + (var_4 / 63794)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_30 = (arr_24 [i_8]);
        var_31 = (8 * 16769883750539260417);
    }
    var_32 = ((var_6 / ((38 | (~1676860323170291206)))));
    var_33 = (((var_14 ? (var_17 || 5447641025109961608) : var_17)));
    #pragma endscop
}
