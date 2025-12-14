/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = ((var_12 ? (~4665243544995379696) : ((((arr_0 [i_0 - 2]) << 11)))));
        var_16 = ((((max((min(62, -4665243544995379696)), var_9))) ? var_6 : (arr_1 [i_0] [i_0 + 1])));
        var_17 = var_12;
        var_18 = (((((~(arr_0 [i_0 + 1])))) ? (~var_1) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 -= (((arr_4 [i_1] [i_1]) ? var_12 : var_4));
        var_20 |= arr_4 [i_1] [i_1];
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_21 ^= (var_8 && -var_7);
        var_22 = (arr_6 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_23 = 4665243544995379696;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 |= var_3;
                                var_25 |= (arr_7 [i_2]);
                            }
                        }
                    }
                    var_26 = (((~4665243544995379710) < (((~((((arr_5 [i_3] [i_4]) > var_0))))))));
                    var_27 = 4665243544995379696;

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        var_28 |= (max(4665243544995379696, -4665243544995379684));
                        var_29 = -2;
                    }
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        var_30 -= (((arr_7 [i_3]) << (((arr_19 [i_2] [i_2] [i_4] [i_2] [i_2]) + 7600393410730244731))));
                        var_31 = (((((((~(arr_12 [i_2] [i_3] [i_4])))) ? 1053781729 : var_3)) == (arr_13 [i_2] [i_2] [i_4] [i_8 - 2])));
                        var_32 = 4665243544995379682;
                    }
                }
            }
        }
        var_33 += var_9;
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_34 = (arr_20 [i_9] [i_9] [i_9]);
        var_35 = (max(-4665243544995379685, 4665243544995379728));
        var_36 = -4665243544995379729;
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            {
                var_37 = -12217;

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_38 = 31;
                    var_39 = (max(58, (((arr_16 [i_11] [i_12] [i_12] [i_11 + 1]) + (arr_7 [i_11])))));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_40 &= var_13;
                    var_41 = ((((min(237, -4665243544995379685))) ? (arr_27 [i_10]) : var_7));
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_42 = (arr_33 [i_10] [i_14]);
                                var_43 = (min(((14615070582783465273 ? 1 : 4665243544995379677)), (231 - 9223372036854775807)));
                            }
                        }
                    }
                    var_44 = (max(var_44, ((min(var_6, ((var_4 ? ((min(828266524, 218))) : (arr_31 [i_13] [i_10] [i_10] [i_10]))))))));
                    var_45 = arr_21 [12] [12];
                }
            }
        }
    }
    var_46 = var_7;

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_47 = ((((arr_15 [16]) == 102)));
        var_48 &= ((((!(((var_8 ? var_12 : var_4)))))) * ((((arr_7 [i_16]) && (((1 & (arr_22 [i_16]))))))));
        var_49 = 12;
        var_50 = ((-4665243544995379735 ? ((~(arr_10 [i_16] [i_16] [i_16] [i_16]))) : ((((min(var_3, (arr_12 [i_16] [i_16] [i_16])))) ? ((((arr_10 [i_16] [i_16] [i_16] [i_16]) <= (arr_4 [i_16] [i_16])))) : ((((arr_45 [i_16]) || (arr_20 [i_16] [2] [i_16]))))))));
        var_51 ^= var_14;
    }
    #pragma endscop
}
