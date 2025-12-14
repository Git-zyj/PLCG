/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 ^= var_5;
            var_15 ^= ((((((arr_2 [i_0]) ? var_7 : var_10))) ? (((((2060115922805564273 ? (arr_1 [i_0]) : var_9))))) : ((((((arr_1 [i_0]) ? var_4 : var_6))) ? (arr_2 [i_0]) : 18446744073709551615))));
        }
        var_16 = var_13;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_17 = (arr_7 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_15 [i_2] = 0;
                        arr_16 [i_2] [i_2] [i_2] [i_2] = var_8;
                    }
                }
            }
        }
        var_18 = (66 ^ 18446744073709551608);
    }

    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_8] [i_8] [i_8] = var_8;
                    var_19 = (min(var_19, (((((17664343594503512379 ? (((var_5 ? var_8 : var_8))) : (min((arr_18 [i_7]), var_6))))) ? 54 : (((((((arr_17 [i_6]) | 187))) && var_4)))))));
                    arr_26 [i_8] [i_8] = (((((arr_12 [i_6 - 1] [i_7] [i_7] [i_8]) > -46)) && (18446744073709551600 <= 32767)));
                }
            }
        }
        var_20 = (((arr_9 [i_6 + 3] [i_6 - 1] [i_6 + 1]) ? (max((((0 & (arr_12 [i_6] [i_6] [i_6] [i_6])))), -2085118290872281962)) : ((((var_5 ? var_10 : -1856359917790651196)) % 1855242134))));
        var_21 = (var_3 > var_5);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_22 = (~var_9);
        var_23 ^= ((var_4 <= (arr_28 [i_9])));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_24 = ((((max(0, (arr_24 [i_10] [i_10] [i_10])))) ? (arr_24 [i_10] [i_10] [i_10]) : (~var_2)));
        var_25 = ((((((18446744073709551587 * 1099511627775) ? (min(0, 17)) : 9650689360298731860))) || 18446744073709551608));
    }
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_26 = (((((var_9 ? var_1 : (-12442 + var_2)))) | -7675969538226041649));
                        arr_42 [i_11] [i_12] [i_13] [i_13] [i_13] [i_11] = (arr_33 [i_11] [i_11]);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_27 = -89;
                        var_28 ^= var_10;
                    }
                    var_29 ^= (((((188 ? var_6 : 5535566563660265463)) - (((min(152, 20764)))))));
                    arr_46 [i_11] = (((~5253710716745593693) ? (((arr_41 [i_13 + 2] [i_13 + 1] [i_13 + 1]) ? 68 : var_13)) : (13318 || var_7)));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((+(((!(((10629013316840684232 ? (arr_29 [i_16]) : var_10)))))))))));
                                arr_52 [i_11] [i_17] [i_11] [i_11] [i_11] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        var_31 ^= (min((74 / -12442), var_5));
        var_32 = (min((9223372036854775800 == var_9), ((14714117588595647251 ? 9223372036854775800 : ((((var_10 != (arr_53 [i_18])))))))));
        var_33 = 201;
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        var_34 ^= ((var_5 != (((3579502334 != (114 > 1))))));
        arr_57 [i_19] [i_19] = ((~((((12442 ? 0 : (arr_56 [11]))) / -12443))));
        arr_58 [i_19] [i_19] = 127;
    }
    #pragma endscop
}
