/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] &= ((3420430968 && (3420430958 * 4294967279)));
        arr_5 [i_0] &= ((4294967266 ? -116 : 16981846416260876308));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 *= -1108040641;

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_21 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_2] = (8668 == 55984528);
                            var_20 = ((arr_15 [i_2 + 3] [i_2 + 2]) / var_8);
                            var_21 -= ((((((arr_13 [i_1] [i_2 + 1] [i_1] [3]) ? (arr_2 [i_1] [i_3]) : 1108040651))) > ((4 >> (((arr_19 [i_1] [i_1] [2] [i_1] [i_1] [2] [i_1]) - 1744189921))))));
                        }
                    }
                }
            }
            var_22 -= (-448488941 / 175);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_23 = ((18446744073709551607 ? 4238982748 : 16));
            var_24 ^= (55984530 <= -1209188805328876971);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_26 [i_1] [i_7] [i_1] = (arr_1 [i_7]);
            arr_27 [i_1] = (((arr_3 [i_1]) / var_7));
        }
        var_25 = ((((arr_2 [i_1] [i_1]) - var_15)));
        arr_28 [i_1] = 4294967289;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_33 [i_8] = ((((((1791262608 & var_12) ? -1108040651 : 27940))) ? (((18446744073709551607 ? (-4 / 11731) : var_15))) : ((((297537569 ? -297537569 : 4294967289)) << (-var_0 + 44466)))));
        var_26 = ((var_18 ? (((-(var_1 == var_15)))) : (((((0 ? 1 : (arr_1 [i_8])))) ? ((11 ? 16 : (arr_0 [i_8] [i_8]))) : var_18))));
        var_27 ^= var_6;
        var_28 -= (((81 ? 116 : 32750)) / 81);
    }
    var_29 += (((var_2 + var_10) - var_5));

    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = 11731;
        arr_39 [i_9] [i_9] = ((-(((var_1 || ((((arr_3 [i_9]) ? (arr_31 [i_9]) : 0))))))));
        arr_40 [i_9] = (1918158514188739314 ? 4000070895893723166 : 32750);
        arr_41 [i_9] = ((-131270588 ? (((arr_34 [i_9]) * (arr_34 [i_9]))) : 32761));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_30 = (min(-1698354196, 1964470403));
        var_31 *= (arr_2 [i_10] [i_10]);
    }
    #pragma endscop
}
