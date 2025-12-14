/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [2] |= (min((((var_13 | var_2) & 3072)), ((((arr_0 [i_0 + 2]) ? var_14 : var_1)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                var_20 = (!var_13);
                var_21 = (((((79 >> (var_9 - 24164)))) * ((var_6 ? 58227 : var_12))));
            }
            var_22 = ((+((7307 ? (arr_0 [i_0 + 2]) : (((0 ? -11803 : var_0)))))));
        }
        for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((~((var_10 ? (((var_15 ? 15569 : 32))) : (arr_7 [i_0])))));

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_12 [19] [i_0] [i_3] [i_4] = (arr_5 [i_0] [i_3 - 2] [i_3] [i_0]);
                arr_13 [i_0] [i_3] [i_3] = ((!((max(-8843895043466051491, -11803)))));
                arr_14 [i_0] [i_0] [i_3] [3] = (min(var_12, (((var_8 ? var_2 : 219)))));
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 24;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                var_23 = (min(var_23, (arr_19 [i_0] [i_5 - 3] [i_6])));
                var_24 = var_9;
                arr_21 [i_0] [i_5] [i_6] [i_0] = ((((!(arr_7 [i_0])))));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_30 [i_0] [i_5] [i_7] [i_8] [i_9] = ((25047 > ((var_5 ? 58202 : 4171))));
                        arr_31 [i_0] [i_5] [i_7] [i_0] = (((((62614 ? var_5 : 12951))) ? (arr_24 [i_0] [i_8 - 1] [i_0]) : (arr_17 [i_0] [i_5 + 1] [i_0])));
                    }
                    for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_25 = ((!(~-16384)));
                        arr_35 [i_7] [i_0] [i_7] = ((((9223372036854775807 ? 32747 : 24576)) != (arr_32 [i_8 - 2] [i_8] [i_10 - 1] [i_10 + 1] [i_10])));
                    }
                    for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_7] [i_11] [i_11] = ((var_2 ? (-9223372036854775807 - 1) : var_13));
                        var_26 -= (var_1 % var_13);
                    }

                    for (int i_12 = 4; i_12 < 24;i_12 += 1)
                    {
                        arr_44 [i_0] [i_7] [i_7] [i_0] = (((var_6 % var_8) % (arr_7 [i_0])));
                        arr_45 [i_12 - 1] [i_7] [i_7] [i_7] [i_0 + 2] |= arr_41 [i_0] [i_12] [i_7];
                        arr_46 [i_12] [i_0] [i_7] [i_0] [i_0] = (arr_7 [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_49 [7] [i_13] [i_0] [24] [i_0] [i_5] [i_0] = (5607196877286805270 ? 24761 : -8843895043466051491);
                        var_27 = ((var_7 ^ (~var_8)));
                        arr_50 [i_0] = (((arr_0 [i_0 + 2]) ? 23952 : 9223372036854775807));
                        var_28 = ((!(arr_6 [i_5 - 3] [i_0] [i_8 + 2])));
                    }
                }
                var_29 = (((arr_22 [i_0 - 1] [i_5] [i_7]) ? 25047 : (arr_41 [i_5 - 3] [i_0] [i_0 - 1])));
            }
            for (int i_14 = 3; i_14 < 24;i_14 += 1)
            {
                arr_53 [0] [24] [i_0] |= (((arr_18 [i_5 - 2] [i_14 - 1]) | (arr_18 [i_5 - 2] [i_14 - 1])));
                var_30 = ((~(((arr_52 [i_14] [8] [i_14]) ? 21 : var_5))));
            }
            arr_54 [i_0] [17] = (~28009);
            var_31 -= var_0;

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                arr_57 [i_0] = (((arr_18 [i_5 - 1] [i_15]) ? (arr_18 [i_0 + 1] [i_0]) : (arr_18 [i_5 + 1] [i_15])));
                arr_58 [i_0] = ((!(arr_48 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_5 - 1] [i_5] [i_15])));
                arr_59 [i_0] [i_5] [i_0] = ((var_13 & (arr_20 [i_0] [i_15])));

                for (int i_16 = 1; i_16 < 23;i_16 += 1)
                {
                    arr_62 [i_5 - 1] [i_0] [i_5] = (((arr_20 [i_0] [i_0]) == 0));
                    var_32 = (65535 == var_0);
                    var_33 = -1;
                    arr_63 [i_0] [i_0] [i_15] [i_16 - 1] = (((arr_38 [i_16] [i_16] [i_15] [i_5 - 2] [i_5] [i_0] [i_0]) ? -19201 : 65525));
                    arr_64 [i_15] |= var_14;
                }
            }
        }
    }
    var_34 |= (5607196877286805270 <= -5607196877286805271);
    var_35 = ((!((((!37293) ? ((var_19 ? var_10 : var_18)) : (var_0 <= 11))))));
    #pragma endscop
}
