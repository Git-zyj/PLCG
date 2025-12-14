/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [8] = (min(((max(var_2, var_1))), ((+(((arr_3 [3]) ? (arr_3 [i_0]) : (arr_2 [i_0])))))));
        var_11 ^= min(((max((min((-32767 - 1), 26437)), -29144))), ((69 ? -26422 : (max(var_7, var_9)))));
        var_12 += (((var_7 != (arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 -= ((max((arr_5 [i_1]), var_2)));
            arr_9 [i_1] [i_2] [i_1] = ((!(arr_8 [i_1] [i_2] [i_1])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_14 -= (((((!-21978) ? 19 : (var_4 | -26))) * ((((arr_5 [i_1]) ? var_0 : var_7)))));
            var_15 = (min((max(155, 15)), (arr_5 [i_3])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                arr_18 [i_1] [i_4] [i_5] &= 26413;
                var_16 &= (arr_10 [i_1] [i_4]);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_17 = -26132;
                    arr_24 [i_7] = (((max(-31123, 2147483520))));
                    arr_25 [i_7] = ((((((arr_10 [i_7 - 1] [i_4]) - (arr_5 [i_7 + 1])))) ? ((((arr_10 [i_7 + 1] [i_4]) ? (arr_5 [i_7 + 1]) : (arr_5 [i_7 + 1])))) : (((arr_5 [i_7 + 1]) ? 18446744073709551615 : 18362143922772647919))));
                    var_18 = (min((arr_20 [i_6] [i_7 - 2] [i_7] [i_7 - 2]), (((~var_10) % -195))));
                    var_19 = ((((max((min(-9953, 60369)), -10305))) ? (arr_22 [i_7] [i_6] [4] [i_1] [i_1]) : (arr_13 [i_1] [i_6])));
                }
                arr_26 [i_6] [i_4] [i_1] [i_1] = (min((arr_5 [i_1]), (((max(84600150936903696, 18446744073709551615)) - (min(18446744073709551615, -21130))))));
            }
            /* vectorizable */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_20 [i_10 - 1] [i_9] [i_8] [1])));
                            arr_35 [i_1] [i_4] [i_8] [i_9] [5] = (arr_8 [i_1] [i_1] [i_10]);
                        }
                    }
                }
                var_21 = var_0;
                arr_36 [i_1] [i_1] = (arr_5 [i_4]);
                var_22 = ((~((~(arr_19 [7] [1] [10])))));
            }
            arr_37 [i_1] [i_1] = (max(var_4, ((var_8 ? 62648 : (arr_16 [i_4] [i_1])))));
        }
        arr_38 [i_1] |= 60681;
    }
    var_23 = var_0;
    var_24 = var_2;
    #pragma endscop
}
