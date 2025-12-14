/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_6;
    var_11 &= (((var_3 ? -11446046227739224568 : (min(var_5, 7000697845970327043)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (min(var_12, ((((min((arr_1 [i_2]), (arr_2 [i_2] [i_1 - 2])))) ? (((min((arr_2 [i_2] [i_1 - 2]), var_8)))) : (((((((arr_5 [i_1 - 3]) ^ (arr_4 [i_2] [i_1 - 1] [i_2] [i_0 - 1])))) != ((11446046227739224568 ? 17581299961885038311 : (arr_0 [11]))))))))));
                    var_13 = (max(var_13, ((max(var_9, (((((-1 + (arr_1 [i_2]))) / (arr_1 [i_2])))))))));
                    var_14 -= (var_7 > 15);
                    var_15 += ((((((var_5 ? (arr_2 [i_2] [i_1 - 2]) : 865444111824513304)))) << (((arr_0 [i_0]) - 4294949430))));
                }
                var_16 -= (max(((min(var_5, (arr_4 [8] [10] [8] [i_0 + 1])))), (min(17581299961885038311, -70))));
            }
        }
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_17 = (min(var_17, (arr_7 [i_3] [i_3 + 1])));
        var_18 = (min(var_18, (((!(((var_1 ? ((-15343 ? var_8 : 11446046227739224568)) : (max(var_1, 17581299961885038311))))))))));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_19 = (max(var_19, 865444111824513302));
        var_20 -= ((max(((var_7 ? var_3 : var_8)), (arr_9 [i_4 - 1]))));
        var_21 += (((max((arr_8 [1] [i_4]), (((arr_8 [i_4 - 1] [i_4]) ? var_7 : var_0)))) / (arr_6 [i_4 + 1] [2])));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_13 [i_5] |= (~26);
        var_22 += ((15340 ? ((((((arr_11 [i_5]) ? (arr_6 [19] [19]) : -30176))))) : (max((arr_12 [i_5]), (max(30173, var_9))))));
        var_23 ^= var_6;

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_24 -= ((max(var_8, (arr_14 [i_6]))));

            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_25 -= ((((arr_10 [i_5]) ? (arr_16 [i_5] [i_6] [i_5]) : (arr_10 [i_7]))));

                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    var_26 -= (min(var_9, ((((var_0 ? (arr_8 [i_5] [i_8 - 1]) : var_5))))));
                    var_27 = (max(var_27, (((((((var_4 ^ var_5) | var_3))) ? ((((arr_10 [i_8 - 2]) ^ (arr_10 [i_8 + 1])))) : (min((~var_9), (((var_6 ? 1 : 237))))))))));
                }
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_28 -= (((((min(364407570, var_8))) > (~var_4))));
                arr_26 [i_5] [i_5] [12] [i_9] &= ((((((arr_16 [i_5] [i_6] [i_9]) ? var_2 : ((min(var_7, var_7)))))) ? var_2 : (arr_11 [i_5])));
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_29 ^= (var_7 ? var_9 : (max((min(var_4, var_7)), var_0)));
                var_30 += (arr_10 [i_6]);
                var_31 = (min(var_31, (((((((var_4 ? (arr_9 [i_6]) : (arr_12 [i_10]))))) ? 1 : 801785796)))));
                var_32 += (min((((~var_7) ? var_6 : (((var_5 ? var_0 : (arr_6 [9] [9])))))), (((0 ? ((((arr_16 [i_5] [i_6] [i_10]) | var_1))) : 4246975912)))));
                var_33 -= (max((1617828388 > 865444111824513302), (arr_19 [i_5] [i_6])));
            }
            arr_29 [i_6] [i_6] &= ((-((((min(var_3, 1617828382))) ? (arr_8 [i_5] [i_6]) : (arr_8 [i_6] [i_5])))));
            var_34 = (min(var_34, ((((max(var_8, var_9))) || -116))));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_33 [i_5] &= (((arr_17 [i_5] [i_5]) ? (max(var_6, 32866)) : (((max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_11])))))));
            var_35 &= ((((arr_20 [i_5] [i_5] [i_11]) / 1617828404)));
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_36 += ((~((min((arr_16 [i_5] [i_11] [i_12 - 2]), (arr_16 [8] [10] [i_12 - 1]))))));
                            var_37 = var_6;
                            arr_43 [i_11] |= (max((arr_17 [13] [i_5]), (min((arr_22 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_14]), var_0))));
                            var_38 += (((arr_8 [i_5] [i_12 - 2]) >> (((arr_8 [i_5] [i_5]) - 110946653284228062))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
