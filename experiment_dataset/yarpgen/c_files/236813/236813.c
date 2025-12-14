/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = 1;
        var_12 = (min(var_12, ((min(((3771898586 ? (!-1777868457) : var_2)), (((!(((var_9 ? var_5 : 0)))))))))));
        var_13 = (min(((~(min(3771898563, 4924186217420464088)))), var_6));
        arr_2 [i_0] = min(3771898605, ((var_7 ? ((var_10 ? (arr_1 [17] [i_0]) : 3771898586)) : (arr_0 [i_0]))));
        var_14 = min((!17770581215013474368), ((-(arr_1 [i_0 - 3] [i_0 + 2]))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 3] = 2518275044;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (~((min((arr_4 [7]), var_1))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_16 += ((!((!(arr_4 [i_1 - 1])))));
                arr_12 [i_2] = ((((min(3771898586, (!-9223372036854775799)))) ? ((min(55391, 17))) : (arr_11 [6] [11] [6])));
                var_17 = (((arr_11 [i_3] [i_2] [13]) ? (min(var_9, -4861031048997226025)) : ((min(12775902546603668742, -17)))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 = ((arr_3 [i_1 - 1]) & -32749);
            var_19 += (~4095);
            var_20 = 1882328505;
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_19 [i_1] [i_5] = (((arr_15 [i_1 - 1] [i_5 + 2] [i_1 - 1]) ? -32740 : 9223372036854775799));

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_24 [i_6] [i_5] [i_1] = (((arr_13 [i_6]) ? (127 && -18) : -32749));
                var_21 = (((arr_21 [i_1 - 3] [i_5] [i_5 - 1]) >> (32737 - 32720)));
                var_22 *= ((!(arr_17 [i_5] [i_5] [i_6])));
                arr_25 [i_6] [12] [i_6] |= ((-3 ? (((~(-32767 - 1)))) : 0));

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_29 [i_1 - 2] [i_5] [i_5] [i_6] [17] = ((-var_5 ? ((-(arr_15 [i_1] [i_5] [i_5]))) : (arr_22 [i_6])));
                    var_23 = (arr_3 [i_1 - 3]);
                    arr_30 [i_1] [i_5] [i_7] [i_6] &= (arr_15 [i_1] [i_1] [i_1]);
                    arr_31 [i_5] = ((-(~28)));
                    arr_32 [i_1] [i_1] [i_5] [i_1 + 1] = (arr_16 [i_5] [i_5]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_36 [16] [16] [i_6] [i_5] = (((~65535) ? 125 : 4095));
                    arr_37 [5] [i_6] [i_6] [i_5] [i_6] = (-(arr_20 [i_1 - 3] [i_5 - 2] [0] [i_5 - 2]));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_24 *= 1324;
                        var_25 &= (arr_35 [i_1 + 1] [i_5 - 2]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_43 [14] [i_5 - 2] [i_5] [14] [i_10] [i_1] [i_5] = (-125 + var_5);
                        arr_44 [i_5] [i_10] = var_9;
                        arr_45 [i_1 - 1] [i_5] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = 26823;
                        var_26 *= 18446744073709551614;
                        var_27 = (((16384 ? var_10 : (arr_38 [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] [i_5]))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, ((((((arr_13 [i_11]) + (arr_35 [i_1 - 3] [i_1]))) - (arr_27 [i_1 + 2] [14] [i_6] [i_8] [i_11] [i_11]))))));
                        var_29 = ((-(arr_41 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_5 - 1])));
                        arr_49 [i_1] [i_5] [i_1] [i_1] [i_1 - 1] = (((~3771898572) ? ((1848815831 ? -32740 : 9223372036854775807)) : (~-21)));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_54 [i_1] [i_5] [i_6] [i_8] = (-9223372036854775807 - 1);
                        arr_55 [i_5] [1] = ((~(~140)));
                        var_30 = (max(var_30, (((((!(arr_48 [i_1 + 1] [i_1 + 1] [i_6] [i_8] [9] [9]))))))));
                    }
                    var_31 = 0;
                }
            }
        }
    }
    var_32 = var_4;
    #pragma endscop
}
