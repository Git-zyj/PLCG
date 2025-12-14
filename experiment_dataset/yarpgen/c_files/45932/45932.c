/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((var_3 ? (((arr_2 [i_0] [i_0]) << (((min((arr_1 [i_0] [i_1]), (arr_2 [i_0] [i_1 - 3]))) - 2376318299408507464)))) : (((-((18446744073709551615 ? var_10 : 1338)))))));
                var_11 = (arr_2 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = var_10;
        var_12 = (max(var_12, (((((((min((arr_7 [i_2]), (arr_7 [i_2])))) || 9223372036854775797)) ? (min(var_7, var_2)) : ((min((arr_1 [i_2 - 1] [i_2 - 2]), (var_4 > 17177772032)))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] = ((18446744056531779571 ? 0 : -1));
        var_13 = (((arr_11 [i_3] [i_3]) - ((190 & (arr_1 [i_3] [i_3])))));
        var_14 = (((arr_11 [i_3] [i_3]) - (arr_11 [i_3] [i_3])));
        arr_13 [i_3] = ((-1 ? ((((arr_10 [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_1 [i_3] [i_3])))) : ((-9223372036854775797 ? (arr_2 [i_3] [i_3]) : (arr_10 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_15 &= (((arr_0 [i_3] [i_3]) ? -1742013647 : (var_1 || 9151314442816847872)));
                    var_16 -= (((arr_3 [i_5] [i_4] [i_3]) & 1));
                    arr_20 [i_5] [i_4] [i_3] = (arr_14 [i_4]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_17 = (max((((((max(var_4, (arr_0 [i_6] [i_6])))) * (arr_0 [i_6] [i_6])))), (min((arr_21 [i_6] [i_6]), 1125899906580480))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_7] [i_6] = 3932160;
                    arr_28 [i_6] [i_6] = var_10;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_18 = ((((max(1, 4))) ? (((1 | var_8) ? (((arr_26 [i_6] [i_7]) - var_8)) : 1)) : ((max(19079, (arr_3 [i_6] [i_6] [i_8]))))));
                                arr_33 [i_6] = ((!((((arr_0 [i_7] [i_7]) ? var_10 : (var_10 || 190))))));
                                arr_34 [i_6] = (((((~(((1 <= (arr_3 [i_6] [i_6] [i_6]))))))) ? ((-((((arr_2 [i_6] [i_7]) == var_7))))) : ((max(17177772032, var_1)))));
                                arr_35 [i_6] [i_6] [i_8] [i_6] [i_10] = -18122;
                            }
                        }
                    }
                    var_19 = (max(var_19, (((((751737715 + ((var_4 ? var_7 : var_4))))) ? ((2147483647 ^ (((4610560118520545280 || (arr_30 [i_6] [i_7] [i_8])))))) : (((var_1 > ((8471 ? -9223372036854775797 : 8388607)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            {
                var_20 = (min(var_20, (((-(-29 || 255))))));
                var_21 = min(255, 1);
                var_22 = var_0;
                arr_42 [i_11] [i_12] [i_11] = -853586690;
                arr_43 [i_11] = (((((660312026 + var_1) + 9223372036854775807)) >> ((((-30211 || var_10) || (((8388607 ? 9151314442816847872 : var_10))))))));
            }
        }
    }
    var_23 = var_10;
    var_24 = ((max(31075, -var_0)));
    #pragma endscop
}
