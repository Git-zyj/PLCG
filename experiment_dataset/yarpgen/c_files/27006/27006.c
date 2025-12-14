/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_16 = 15258;
            arr_8 [i_0] [i_1] = (min(var_1, var_3));
        }
        var_17 = var_12;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = ((~(((max((arr_9 [i_0]), (arr_9 [i_0]))) / (arr_6 [12] [i_2])))));
            var_19 = (max(var_19, (-9223372036854775807 - 1)));
        }
        var_20 = (~9223372036854775807);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_21 = ((46797 ? (arr_11 [i_3] [i_3]) : (0 == 4294967272)));
        var_22 = (min((max((max((arr_4 [i_3] [i_3]), var_10)), var_12)), (((((((arr_7 [i_3] [i_3] [i_3]) ^ var_8))) | (max((arr_10 [i_3]), (arr_3 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_23 = max((max((arr_2 [i_4]), (arr_9 [i_4]))), ((min((arr_2 [i_4]), (arr_7 [8] [i_4] [1])))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_4] [i_4] [i_5] = var_14;
            arr_20 [i_4] [i_5] [i_5] = (min(((1 ? (arr_5 [i_5] [i_5] [i_5]) : (arr_2 [i_4]))), -24));
            arr_21 [18] [i_5] [9] = (arr_18 [i_5] [i_5] [i_5]);
            var_24 -= -20168;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_29 [i_7] [i_6] = ((((((!(arr_2 [i_4]))) ? (arr_7 [i_4] [i_4] [i_4]) : var_3))) ? ((var_8 ? ((((arr_27 [5] [5] [5] [i_8 + 1] [i_7]) ? (arr_14 [i_4]) : 0))) : var_13)) : (arr_11 [i_6 - 1] [i_6 - 1]));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_25 = ((((max((arr_1 [i_6] [i_6]), (~var_12)))) ? (max((arr_7 [i_4] [i_6 - 1] [i_9]), (~-4969))) : (~var_4)));
                            var_26 = (min(var_26, (((((arr_11 [i_4] [i_9]) ? (arr_11 [i_6] [i_8 + 1]) : (arr_11 [i_8 - 1] [i_4])))))));
                            var_27 = (min((!23), (arr_30 [i_4] [i_4] [i_4] [i_9] [i_6 - 1] [i_8 + 1] [i_8 + 1])));
                            var_28 -= ((var_1 != (max(((var_1 ? var_13 : (arr_0 [i_7] [i_9]))), var_7))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_34 [i_4] [6] [i_4] [6] [i_4] = (~-271977919);
                            var_29 &= ((((((arr_32 [i_4] [7] [i_4] [8] [i_4]) >> (var_9 + 9151085101738937933)))) || var_12));
                            var_30 = (var_14 ? (arr_32 [i_10 - 2] [1] [9] [i_10] [i_10 - 1]) : var_0);
                            var_31 = var_2;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_38 [i_11] [i_6] [i_11] [i_8] [i_11] [i_11] = max((~2933039022), ((((!var_3) | (~23)))));
                            arr_39 [i_4] [i_6 - 1] [i_7] [i_7] [i_8] [i_11] [i_7] = (max((~var_8), ((109956156279278597 ? 0 : 65517))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            var_32 = (arr_23 [i_4]);
                            arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_18 [i_4] [i_6 - 1] [i_4]) - (arr_18 [i_8] [i_6] [i_4])));
                            var_33 -= ((~(arr_7 [i_6 - 1] [i_6] [i_6])));
                        }
                        arr_44 [i_4] [i_6 - 1] [i_7] [i_7] [i_7] [i_8 - 1] = (((~var_7) & var_9));
                    }
                }
            }
            var_34 = (max((arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]), var_9));
        }
    }
    for (int i_13 = 2; i_13 < 17;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_35 &= -9223372036854775797;

            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                var_36 = ((!((min((arr_17 [i_15] [1] [i_15 + 3]), var_2)))));
                var_37 = ((((max(var_1, var_9))) ? ((+((min((arr_4 [i_13] [i_14]), var_14))))) : var_0));
            }
            var_38 = (min(((32767 ? (arr_26 [i_13] [i_13]) : var_7)), ((((!9223372036854775807) || 31602)))));
            var_39 = (-9223372036854775807 - 1);
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            var_40 = 65535;
            var_41 = ((((arr_2 [i_13 + 1]) ? (!var_4) : var_12)));
            arr_56 [9] [i_13 - 2] = (arr_49 [i_13] [i_16]);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            var_42 = (!45373);
            arr_60 [13] [i_13] [i_13] = (arr_46 [i_17]);
            var_43 = (max(var_43, (((arr_24 [i_13 + 2] [i_17]) * 246))));
        }
        arr_61 [i_13] [i_13 - 1] = ((((min((arr_32 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [16]), (arr_17 [i_13] [i_13 - 1] [i_13])))) || ((min((arr_11 [i_13 - 1] [i_13 + 1]), (arr_41 [i_13] [i_13] [1] [16] [i_13]))))));
        arr_62 [i_13 + 1] = max(((!(arr_1 [i_13 + 1] [i_13 + 1]))), (max((!var_10), (var_5 && var_14))));
        var_44 = (~var_3);
    }
    #pragma endscop
}
