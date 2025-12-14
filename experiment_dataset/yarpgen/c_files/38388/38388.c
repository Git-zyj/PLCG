/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((4 ? 49498 : 0))) ? var_9 : (var_8 ^ 7603752376063229203)));
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((var_11 ? ((0 ? (((var_10 ? var_15 : var_1))) : (var_0 | var_8))) : var_13));
        var_19 = ((((~var_7) ? (var_4 - var_1) : (((arr_2 [i_0] [i_0]) ? var_7 : 8191)))));
        var_20 *= -112;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = 227;
        var_22 &= 98;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 &= ((469762048 && (((3072 ? 12821417935471352096 : 112)))));
        var_24 -= (arr_8 [5]);
        var_25 = -112;
        var_26 *= (~((143 ? var_5 : var_8)));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_27 = ((((((arr_9 [i_2] [i_2]) ? var_4 : (arr_10 [i_2] [0] [i_2])))) ? 44171 : var_8));
            var_28 = (var_13 <= 107);
            var_29 = ((18446744073709551597 ? ((((arr_6 [i_3]) ? (arr_4 [i_2]) : 511))) : 0));
            var_30 += 3616327214;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_31 *= ((var_12 ^ (arr_8 [i_2])));
            var_32 -= ((!(arr_11 [i_2])));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            var_33 = (((arr_2 [i_5 - 3] [i_5 - 2]) ? var_7 : (arr_2 [i_5 - 2] [i_5 - 3])));
            var_34 -= (~var_2);
        }
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_22 [i_6] = (min(((((~(arr_16 [i_6]))))), ((((0 >= (arr_4 [13]))) ? ((var_5 ? (arr_16 [i_6]) : var_15)) : (45624 != 0)))));
            var_35 ^= (min((arr_17 [i_7] [i_7]), (((((((!(arr_18 [i_7] [i_7]))))) > (var_4 + 0))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_36 *= var_0;
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_32 [i_6 - 1] [i_8] [i_8] [i_6] [i_6 - 1] [i_6] = 3102498373002266618;
                            var_37 *= (min((~-1647183679), ((((var_12 != (-127 - 1))) ? (arr_19 [i_8]) : (!11)))));
                            var_38 = 3102498373002266618;
                            var_39 = var_13;
                        }
                    }
                }
            }
            var_40 *= (max(((max(16, 678640081))), ((((var_15 ^ var_4) ? (((arr_19 [i_8]) ? var_4 : var_6)) : ((var_4 ? var_8 : var_7)))))));
            var_41 = 16383;
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_42 = ((((((((var_0 ? var_9 : var_4))) ? var_5 : ((1 ? var_1 : 4294950913))))) || (((-3102498373002266629 ? (arr_19 [i_6]) : var_15)))));
            var_43 += (!-3102498373002266629);
            var_44 *= ((3102498373002266616 ? ((var_1 ? (max(3102498373002266618, (arr_20 [i_12]))) : var_10)) : -3102498373002266619));
        }
        var_45 += var_2;
    }
    var_46 ^= ((((((((-32767 - 1) ? 61737 : 28))) ? ((var_9 ? var_9 : -3102498373002266618)) : var_7)) ^ var_11));
    #pragma endscop
}
