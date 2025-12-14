/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 ^= 1957207880766529866;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (max(var_15, 633612302));
                var_16 = (16489536192943021750 && 1957207880766529874);
            }
        }
        arr_6 [i_0] |= (((min(var_2, ((((arr_1 [i_0]) ? 145 : var_6))))) ^ -var_12));
        arr_7 [i_0] = 32767;

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_15 [i_0] [i_3] [i_4] = ((~((121 ? 9247 : 121))));
                        arr_16 [i_4] = (((((0 ? (max(var_5, (-9223372036854775807 - 1))) : -111))) ? (arr_10 [i_3 - 2] [i_3 - 2] [i_5] [i_5]) : (0 <= 18446744073709551615)));
                        var_17 = var_1;
                    }
                }
            }
            var_18 += ((min(134, -511)));
            arr_17 [i_0] [7] = ((!((min(((max(121, var_12))), ((7335809958435033359 ? 0 : var_4)))))));
        }
        var_19 = 9248;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_20 |= ((!(min(1, 0))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [10] [i_8] [20] = ((3661354994 ? var_9 : (215 | 135)));
                        arr_31 [1] [i_9] [i_8 - 1] [i_9] = 1;
                        var_21 = ((-((0 ? 992043691936143865 : 27))));
                        var_22 |= ((4294967295 ? 18446744073709551615 : 0));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_23 ^= ((-(((arr_28 [i_6] [i_6] [i_6] [i_8 + 4]) ? -9257 : var_10))));
                            arr_34 [4] [i_7] [i_8] [i_7] [i_9 + 2] [i_7] = 4294967273;
                            var_24 ^= (max(32767, 13708));
                            arr_35 [i_6] [i_7] [i_8] [i_6] [i_9] [i_7] |= min((arr_20 [2]), (arr_28 [i_8] [12] [i_8] [i_8]));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_25 *= (((((3329215265 ? 231 : var_9))) ? 13692 : var_8));
                            var_26 &= (arr_29 [i_8 + 1] [i_8 + 4] [i_8 + 1] [i_8 + 1] [i_8 - 2]);
                            var_27 *= -var_13;
                            arr_39 [i_6] [13] [i_6] [i_9] [0] = ((1 ^ (arr_27 [i_9 + 2] [i_9 - 1] [i_8 + 3] [i_8 + 3])));
                            var_28 = (~13935183299971239804);
                        }
                    }
                }
            }
            var_29 *= (arr_21 [i_7]);
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_30 = -7217990213381156974;

            for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
            {
                var_31 = 135;
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_32 += (min(var_8, (arr_43 [i_13 + 1] [i_12])));
                            var_33 += (max((((!var_13) >> (((~-13709) - 13685)))), (!7640569121955183754)));
                        }
                    }
                }
                arr_54 [i_13] [i_13 + 1] [i_12] [i_13] = var_11;
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_60 [i_6] [i_6] [i_13] [i_6] [i_6] = (!34359738352);
                            var_34 = (min(var_34, (((-(-28222 > var_7))))));
                            var_35 = (max(var_35, 0));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
            {
                arr_63 [i_18] [i_12] [i_6] = -13708;
                var_36 = ((~(~1)));
            }
            var_37 = var_13;
        }
        var_38 = (-(arr_49 [i_6] [1] [i_6] [i_6]));
        var_39 &= 1;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            var_40 = 67108863;
            var_41 = var_6;
            var_42 -= var_10;
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            arr_74 [i_19] = ((var_12 ? 1 : 65218));
            var_43 &= (!18669);
            var_44 = ((-7631581774379002353 ? -18669 : 1));
            arr_75 [i_19] |= -var_4;
            arr_76 [i_19] [i_19] [14] = -14297;
        }
        var_45 = (16384 ? -140187732541440 : (((var_11 ? 6459 : var_12))));
        arr_77 [i_19] [i_19] = ((-((var_1 ? var_2 : 18446603885977010175))));
        arr_78 [i_19] = 189;
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 1;i_22 += 1)
    {
        var_46 = ((~((140187732541454 ? 13935183299971239804 : 0))));
        var_47 -= (!7496);
        var_48 *= var_6;
        var_49 = ((((var_7 > (-9223372036854775807 - 1))) && (((var_10 ? var_2 : var_9)))));

        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_50 = ((!(arr_84 [9] [i_23] [15])));
            arr_85 [i_22] [i_23] [i_22] = 1;
            var_51 = var_7;
            var_52 += (-9223372036854775807 - 1);
        }
    }
    var_53 = (-32767 - 1);
    #pragma endscop
}
