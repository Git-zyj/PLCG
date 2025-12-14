/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((480005622 ? 480005619 : var_2)));
        var_12 = var_6;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_13 *= 10277798135611706684;
            var_14 = (max(var_14, ((((480005622 * var_6) || (4294967295 ^ var_2))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_15 *= var_4;
                var_16 += -15431696809178545284;
                var_17 = (480005611 || 203);
            }
            arr_12 [i_1] [i_1] [i_2] = ((var_5 ? var_7 : (var_4 != var_4)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_18 -= ((var_8 << ((((var_2 ? var_7 : 4294967285)) - 6204))));
            var_19 = (min(var_19, (480005622 + 480005614)));
        }
        var_20 *= var_8;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_21 = (((((max((22 < 4294967289), var_2)))) | (((((var_3 ? 35 : 10))) ? 4294967266 : (min(480005622, 51938))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_24 [i_5] |= var_5;
                    var_22 = ((((var_6 ? 4294967288 : 1))) == ((var_0 ? 4 : var_9)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_23 = (((18446744073709551611 && 32675) << ((((1515 ? var_7 : 0)) - 6211))));
        var_24 |= 18446744073709551615;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_34 [i_9] [i_9] [i_10] [i_8] = ((~(((~var_10) ^ (~var_6)))));
                    var_25 = (((var_9 / var_2) ? var_8 : ((4294967295 ? 13463 : 20))));
                }
            }
        }
        arr_35 [i_8] = ((!153) < -var_1);
    }

    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_26 *= (~(((((var_3 ? 93 : var_5))) ? var_6 : (16142633215668060761 % var_9))));
        var_27 = ((~(max(-10, 122029359))));
        var_28 = (max(var_28, var_3));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_29 = (((((var_4 < var_0) >= ((-96 ? var_4 : 18)))) ? ((((16401371882728109717 == (var_6 != 18446744073709551615))))) : ((((var_1 << (var_3 - 120))) & (3826271138243969444 || var_8)))));
        var_30 = (min(var_30, ((((((var_1 ? 201 : var_7))) ? (((2145672897 ? ((131040 ? 124 : -36)) : (127 << 1)))) : ((~((29 ? var_1 : 134)))))))));
        arr_42 [i_12] &= ((-(((var_6 ? var_3 : var_4)))));
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_31 ^= (((-1 ? (!var_10) : var_10)));
        arr_45 [i_13] [i_13] = ((((var_5 | ((var_4 ? -31 : var_4))))) ? ((((((-26 ? var_8 : 124))) ? 1 : ((var_2 ? var_9 : -20))))) : var_1);

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_32 = (((20 > var_2) ^ ((max(var_0, 47)))));
            var_33 = (((4294967280 ? var_2 : var_0)));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                var_34 = (min(var_34, ((((var_7 | var_0) | ((16142633215668060759 ? 2304110858041490882 : var_2)))))));
                var_35 = (16 <= 42654);
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                var_36 = var_9;

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_37 = ((var_1 / var_2) ? var_0 : (var_6 <= 5781187429288918908));
                    arr_58 [i_18] [i_18] [i_18] [i_13] = ((-10617 ? var_4 : var_5));
                    var_38 = ((var_0 ? 5781187429288918908 : ((47 ? 18446744073709551615 : 1))));
                    var_39 = 3;
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    var_40 *= var_7;

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        arr_66 [i_13] [i_15] [i_20] [i_15] [i_20] = (((((1 ? 11 : var_10))) ? ((var_4 ? var_4 : 26)) : (var_2 | 1)));
                        var_41 *= (((1 < 10) ? var_8 : var_1));
                    }
                    var_42 = ((((136 ? var_6 : var_7)) + var_6));
                }
                var_43 ^= -var_8;
            }
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                var_44 += ((~(var_5 > var_9)));
                var_45 = (((((~18) + 2147483647)) >> ((((74 ? var_6 : 156)) - 74))));
            }
            arr_71 [i_13] [i_15] [i_13] |= ((106 ? (((var_5 ? var_6 : var_8))) : ((var_5 ? var_1 : var_6))));
            var_46 *= (120 ? var_4 : (var_5 / -10855));
        }
    }
    #pragma endscop
}
