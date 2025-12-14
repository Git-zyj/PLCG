/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? (~16291554280426485483) : (((16291554280426485511 / 16291554280426485506) << (((2001263542069020460 & var_5) - 16661))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = var_12;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (max(var_22, (((((((arr_0 [i_0 + 3]) | var_6))) ? ((((arr_2 [i_0 + 2] [i_1]) ? 416283169572349339 : var_14))) : ((2001263542069020462 ? 2155189793283066121 : 3247679866419280451)))))));
            var_23 = (arr_1 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] = (var_12 / 111);
                            arr_15 [i_2] [i_1] [i_1] = var_9;
                            var_24 = (((arr_3 [i_0] [i_0 + 3]) / (arr_6 [i_0 + 1] [i_0 + 1] [i_0])));
                        }
                        var_25 += 14;
                    }
                }
            }
            arr_16 [i_1] [i_1] = ((-145954478 ? 16 : -5763385193863861762));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                var_26 *= ((4294967279 > (arr_5 [i_5 - 1])));
                var_27 = (max(var_27, 4294967275));
                var_28 *= (var_19 || 723724150138630254);
                var_29 += (-22 > 18446744073709551599);
            }
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                var_30 *= var_8;
                var_31 = ((83 ? (arr_9 [i_0 + 1]) : 2316586647));
            }
            var_32 |= (((arr_22 [i_5 - 1] [i_5 - 1]) ? ((var_6 ? var_9 : (arr_5 [i_0 + 1]))) : 16291554280426485478));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_33 *= ((((!(arr_8 [i_8] [1] [i_0] [i_8]))) && (((14547119320771684189 ? 79 : var_12)))));
            arr_29 [i_8] [i_0] [i_0] = (~var_2);
            var_34 = (max(var_34, ((411958916 ? 1 : 18))));
        }
    }

    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_39 [i_10] = -42;
                        var_35 = (min(var_35, (((((max(-1543248047, -1))) | ((((((var_16 ? var_12 : var_1))) == (11557015318219742010 ^ -6246)))))))));

                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_43 [i_12 + 2] [i_10] [1] [i_10] [i_13] [4] = (min((((14 ? (arr_27 [i_11] [i_10] [i_9 + 1]) : ((8 ? 32 : var_2))))), 4294967284));
                            arr_44 [i_10] = -22;
                            var_36 = var_13;
                        }
                    }
                }
            }
        }
        var_37 = 16777184;
    }
    #pragma endscop
}
