/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_12;
    var_15 |= ((((max(var_12, -135))) ? (var_1 != var_5) : (((!(~-16))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = 4121464324;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_0] = (!var_5);
                        arr_11 [i_3] [i_0] [i_2 - 1] [i_1] [i_0] [i_0] = -1534131602;
                        var_17 = (~255);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_18 &= ((~(((arr_1 [i_1]) ? (arr_3 [i_0] [0] [i_4]) : (arr_1 [i_4])))));
                        var_19 = (max(var_19, (((3404548082635996716 ? -40 : 4493)))));
                        var_20 = 1;
                        var_21 = 15;

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            var_22 &= (~(arr_7 [i_2 - 1] [i_2 + 1] [i_5 + 1] [i_5]));
                            arr_16 [i_5] [1] [i_1] [i_1] [4] = (((var_1 && var_4) && 6955209367085118196));
                            arr_17 [i_4] [i_0] [i_0] [i_0] = 1;
                            var_23 -= (0 * 9837704332244053430);
                            arr_18 [i_4] = ((-8516475985713955668 & (arr_7 [i_1] [i_2 - 1] [i_5] [i_5 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_24 = (241 > 7276655847127350362);
                            var_25 = (max(var_25, (((((1534244006 ? var_2 : 99))) ? var_2 : (arr_20 [i_0] [i_1] [i_1] [i_4] [i_1])))));
                            arr_23 [i_0] [i_1] [i_1] [2] [i_6] [7] = (((arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0]) >= 1));
                            var_26 = ((~((-454609705151001314 ? var_7 : var_6))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_1] = ((~121) ? ((((arr_24 [i_0]) >= 4094040160))) : ((112 ? 220 : (arr_9 [i_0] [i_1] [i_2 + 1]))));
                        arr_28 [i_0] [i_1] [i_1] [i_7] = ((((18446744073709551605 ? -15 : 7069482836458863281))) || 3944040699);
                    }
                    var_27 = ((0 >= (10996 != 11146650166547889176)));
                }
            }
        }
        arr_29 [i_0] = (~58);
        arr_30 [3] [i_0] = ((0 ^ (((2906666346 ? -5787439290077505555 : 25)))));
        arr_31 [i_0] [i_0] = 130;
    }
    #pragma endscop
}
