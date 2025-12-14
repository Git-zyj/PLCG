/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_15));
    var_20 ^= ((var_4 ? (var_7 >> var_17) : (((((min(2185467856304308050, var_16))) ? ((max(var_8, 131))) : ((min(var_6, var_3))))))));
    var_21 -= (max(var_3, (max((var_9 / var_8), ((122 ? 19417 : 18446744073709551603))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((min((min(136, 3635571628922174840)), (((var_0 ? 8536 : (arr_6 [i_0] [i_1 - 1] [i_2] [4])))))))));
                    var_23 = (!(((var_4 ? (~92) : (((arr_2 [i_2]) ? 249 : (arr_0 [i_2])))))));
                    var_24 = ((((max(var_11, -1146825589505153755))) ? (1895192772 || 118) : (((arr_5 [i_2] [i_2] [i_1 - 3]) ? (arr_5 [i_2] [i_2] [i_2]) : var_15))));
                    arr_7 [i_1] [i_2] = (max(((((((8541 ? (arr_4 [i_2]) : (arr_5 [i_2] [i_1] [i_2])))) ? ((var_18 - (arr_1 [i_0] [i_2]))) : (((arr_0 [i_0]) ? var_5 : 36928))))), (min(16774, 9134563700131640640))));
                }
            }
        }
        arr_8 [i_0] &= (((((((1146825589505153730 ? 8537 : -9134563700131640643))) || (arr_2 [i_0]))) ? (((((max((arr_4 [i_0]), (arr_1 [9] [i_0]))))) % (2770 | var_7))) : ((48761 & ((var_15 ? var_14 : 136))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_25 = (254 % 69147696);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_20 [i_3] [i_5] [i_6] = ((-((1 ? 1 : 104))));
                        var_26 = (max(var_26, ((((((arr_17 [i_5] [i_4] [i_4] [i_5] [i_6]) ? 255 : 48748)) / var_11)))));
                        arr_21 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] = (16790 - var_5);

                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            var_27 = (((arr_17 [i_3] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1]) ? (arr_17 [i_3] [i_7 + 1] [i_7] [i_7 + 2] [i_7 - 2]) : var_10));
                            var_28 = ((1 ? 529517820 : 0));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_27 [i_3] [i_4] [i_3] [i_6] [i_8] = (((((arr_18 [i_4] [i_5] [i_6] [i_8]) % (arr_26 [12])))) != ((var_16 % (arr_18 [i_3] [i_3] [i_5] [i_6]))));
                            var_29 = ((((((arr_16 [i_6] [i_8]) ? var_5 : 65533))) || 48748));
                            arr_28 [i_3] = ((((var_7 == (arr_17 [i_3] [i_4] [i_5] [i_6] [i_5]))) ? -var_11 : ((((arr_11 [i_3]) || (arr_16 [i_4] [i_6]))))));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_32 [i_3] [i_4] [i_9] = ((3002490530 ? -2097152 : ((((arr_17 [i_3] [12] [i_5] [12] [i_9]) ? var_7 : (arr_15 [i_4] [i_3] [i_9]))))));
                            var_30 = ((204 & (arr_14 [i_3] [10] [i_6] [i_9])));
                            var_31 = ((16788 ? var_18 : 168));
                        }
                        var_32 = (((arr_26 [i_5]) ? var_17 : ((67 ? (arr_11 [i_4]) : (arr_9 [i_3] [i_5])))));
                    }
                    var_33 = (((var_9 * 3002490530) ? (((var_0 ? 1 : var_6))) : 1292476751));
                }
            }
        }
    }
    #pragma endscop
}
