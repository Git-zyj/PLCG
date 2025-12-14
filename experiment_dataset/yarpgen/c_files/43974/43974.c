/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (~1758639356);
        var_20 += (((((arr_0 [i_0] [i_0]) ? var_10 : var_12)) - (arr_1 [8] [i_0])));
        var_21 ^= (((((var_8 ? 32760 : (arr_1 [10] [i_0])))) ? (29259 == 36278) : ((((arr_0 [i_0] [i_0]) > -29597)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 &= 26380;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_1] = ((~(arr_7 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] = ((((((arr_5 [i_4 + 2]) ? 0 : (arr_5 [i_4 + 1])))) ? (min(-39, (arr_5 [i_4 - 1]))) : (((((arr_9 [i_4 + 2] [i_2] [i_4 + 2]) && (arr_9 [i_4 + 1] [i_2] [i_4 + 2])))))));
                                var_23 ^= (((((!(arr_10 [i_4 + 1] [i_4 - 1] [i_5] [i_5])))) >= (((arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]) % (arr_10 [i_4 - 1] [i_4 + 3] [i_5] [i_5])))));
                                arr_18 [i_2] [i_1] [i_2] [i_1] = var_15;
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_2] = (min(-31655, 1525262341));
                }
            }
        }
        arr_20 [i_1] = var_12;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = (max(var_24, ((((arr_0 [i_6] [i_6]) - (arr_0 [i_6] [i_6]))))));
        var_25 = (min(var_25, (-1758639347 || var_3)));
        var_26 ^= (((((arr_22 [i_6]) ? var_12 : 31664)) >> (((~-14133) - 14125))));
    }
    var_27 += var_1;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_28 = ((((max((((0 ? 1 : 28))), (arr_21 [i_8])))) ? (min((arr_21 [i_8]), (arr_26 [i_7] [i_7] [i_8]))) : ((((arr_23 [i_7]) | var_16)))));
                var_29 = (((!(arr_5 [i_7]))) ? (((~var_5) ? 15 : (((!(arr_13 [i_7] [i_8] [i_8] [i_7] [i_8])))))) : ((min((0 > var_5), (max(0, (arr_16 [i_8] [i_7] [i_8] [i_7] [i_8] [i_8])))))));
                var_30 = (min(var_30, ((min(0, (max((arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_26 [i_7] [i_8] [i_8]))))))));
            }
        }
    }
    var_31 = var_3;
    #pragma endscop
}
