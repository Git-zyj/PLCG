/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) + 540431955284459520)) : 0));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = var_12;
                        var_19 |= ((~(arr_3 [i_0] [19])));
                        arr_12 [i_0] [18] [0] [i_0] &= (-(arr_3 [11] [11]));
                        var_20 = (arr_8 [11] [i_1] [i_1]);
                    }
                }
            }
        }
        var_21 &= (arr_8 [i_0] [1] [i_0]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_22 = (arr_4 [i_4] [i_4]);
        arr_17 [1] = (!(((9 ? ((-14 ? -33 : 21)) : 2147483647))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                arr_25 [i_5] [i_5] = (((-((16140 ? -16141 : 126)))));
                var_23 = var_15;
            }
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_24 = (~var_2);
                var_25 |= -127;
                var_26 *= (arr_7 [i_5] [i_5]);
                var_27 = (min((arr_8 [i_8] [15] [i_5]), var_15));

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_30 [i_6] [i_6] [i_5] = ((+(((arr_23 [i_6 - 1] [i_8 - 1]) ? (arr_8 [i_8 - 1] [i_6 - 1] [i_6 - 1]) : (arr_8 [i_8 + 1] [i_6 + 1] [i_8])))));
                    var_28 *= ((-(((!((min((arr_1 [i_8]), var_15))))))));
                    var_29 |= ((!(arr_0 [i_5] [i_5])));
                    arr_31 [i_8] [i_6 - 1] [i_5] = var_16;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_30 = (arr_3 [i_5] [i_6 - 1]);
                    var_31 = (min(((((((var_17 | (arr_32 [13] [i_5] [i_5] [i_8] [i_5])))) <= (max(var_12, (arr_24 [i_5] [i_6] [i_5])))))), var_2));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_32 -= (((arr_26 [i_11] [i_8 - 2] [i_8 + 1] [i_8 - 2]) ? (((((24 ? 201 : var_6))) ? 255 : -1870720173)) : (arr_34 [i_5] [i_6] [i_8] [i_10] [i_11])));
                        var_33 = (max(var_33, ((min(16117, (((arr_7 [i_5] [i_11]) << (((((~32767) + 32792)) - 5)))))))));
                    }
                    var_34 = (arr_6 [i_10] [20] [i_5] [i_5]);
                }
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_35 = (min(var_35, var_14));
                    var_36 -= max(((-14 ? var_14 : (arr_20 [i_5] [i_5] [i_6 - 1]))), ((var_10 ? (arr_20 [i_5] [i_6] [i_6 - 1]) : (arr_8 [12] [i_6] [i_6 - 1]))));
                }
                var_37 ^= (max(((((((var_1 ? (arr_16 [i_5]) : (arr_28 [i_5])))) ? (126 <= var_0) : (arr_35 [i_6] [i_6] [i_6 + 1])))), var_11));
            }
            var_38 |= ((126 ? 131 : (arr_3 [i_6 - 1] [i_6])));
            var_39 &= 1333084713;
            var_40 = (max(var_40, ((((!var_6) ? ((min(var_0, (arr_16 [i_6 + 1])))) : ((min((arr_10 [i_6] [i_6 + 1] [i_6 - 1] [10] [i_6 - 1] [i_6]), (arr_16 [i_6 + 1])))))))));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_44 [i_5] = 114;
            var_41 = (arr_35 [i_5] [i_5] [i_5]);
        }
        for (int i_15 = 4; i_15 < 20;i_15 += 1)
        {
            var_42 = (max(var_7, 36));
            var_43 = ((((min((-127 - 1), 24))) ? (((arr_13 [i_5] [i_5]) ^ ((((arr_43 [i_5]) ? 0 : (arr_39 [i_5])))))) : (((max((max(18, 239)), (arr_37 [i_15 - 2])))))));
            var_44 = (max((!407728495), (((arr_4 [i_5] [7]) / -1490445174))));
        }
        var_45 = (min(var_45, var_2));
        var_46 = (arr_41 [i_5]);
        arr_48 [i_5] = ((!((((max((arr_5 [i_5]), 14))) != 12880989075484373385))));
        arr_49 [i_5] = (min(var_8, ((-((141 ? (arr_43 [i_5]) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] [i_16] = (min((max((max(var_10, (arr_16 [i_16]))), (var_12 & 12880989075484373385))), (((((((~(arr_28 [i_16]))) + 2147483647)) >> ((((12880989075484373386 ? 8191 : 0)) - 8169)))))));
        arr_53 [i_16] [i_16] = var_4;
        arr_54 [i_16] = -var_15;
        var_47 = ((((((arr_29 [i_16] [i_16] [i_16] [i_16]) * (!-17)))) | ((var_8 ? (arr_11 [20]) : (((var_11 ? 0 : var_0)))))));
    }
    var_48 |= ((((min(var_2, var_2))) >> (var_7 - 53409)));
    #pragma endscop
}
