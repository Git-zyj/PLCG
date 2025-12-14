/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min(620465583419963422, 78)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_11 = 78;
            var_12 &= var_5;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_2] = ((arr_0 [7]) ? ((-((9594524417058578227 ? var_4 : 177)))) : ((((arr_5 [i_0]) ? var_8 : ((197 / (arr_3 [i_2])))))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_13 [i_0] [i_3] [i_3] [i_3] = var_0;
                arr_14 [i_0] [i_2] [i_3] = (arr_0 [i_0]);
                arr_15 [i_2] [i_2] [i_2] = -var_4;
                arr_16 [i_0] [i_3] = (arr_0 [i_3]);
                var_13 |= ((((arr_11 [i_0] [i_2] [i_3] [i_3]) ? (arr_11 [i_0] [i_2] [i_3] [i_3]) : 2184520780653416577)));
            }
            arr_17 [i_0] [i_2] [13] = ((!((((arr_6 [i_0] [i_0]) ? (!var_3) : (min(7971012352730519862, 60854)))))));
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_20 [i_0] = var_5;
            arr_21 [i_0] [i_4] = ((!23069) ? ((((arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 1]) ? (18446744073709551615 || var_7) : ((var_5 ? 9223372036854775807 : (arr_19 [i_0] [i_4])))))) : (~var_4));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_26 [i_0] = arr_25 [i_0] [i_5];
            arr_27 [i_0] [i_0] [i_0] = ((8475181070604303522 ? ((-(arr_18 [i_0]))) : (42 || var_7)));
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_14 = ((arr_30 [18]) ^ ((((!(arr_28 [i_7]))))));
            var_15 &= (arr_28 [i_6]);
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_36 [i_6] [i_6] = ((58 && (arr_30 [i_8 - 1])));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_41 [i_6] [i_8 - 1] [i_9] [i_10] [i_10] = (arr_35 [i_6] [i_8 - 1]);
                            var_16 |= 15227034869600370356;
                            var_17 = ((18446744073709551596 ? ((48680 ? 59 : var_7)) : (arr_39 [i_6] [i_8] [i_9] [i_10] [i_10])));
                        }
                    }
                }
                var_18 -= ((var_6 ? 48680 : (arr_32 [i_6] [i_8] [i_8 + 1])));
                var_19 &= (((var_8 && var_6) ? (arr_29 [i_6] [i_8 + 1]) : (9223372036854775805 || -1)));
            }
            var_20 &= 128;
            var_21 -= (~9223372036854775807);
            var_22 = (!var_3);
        }
        var_23 = (((((((((arr_28 [i_6]) >= (arr_40 [i_6] [i_6] [i_6] [22])))) > ((var_8 ? (arr_34 [i_6] [i_6] [i_6]) : 0))))) % ((-(arr_39 [i_6] [i_6] [i_6] [i_6] [4])))));
        var_24 = ((-((-(((arr_40 [i_6] [i_6] [i_6] [4]) ? var_1 : (arr_31 [i_6] [i_6])))))));
    }
    for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = (arr_38 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]);

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_25 = (min(var_25, (((var_1 ? 9706901106006687913 : (arr_28 [i_12 - 3]))))));
            arr_47 [10] [i_12 + 1] &= min(9594524417058578227, (min((var_0 / 8493937053334416909), var_3)));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_26 = (arr_37 [i_14] [i_14] [i_14] [i_14] [i_12 + 1]);
            var_27 = arr_33 [i_12 - 4] [i_14 - 1];
            var_28 = (((arr_42 [i_12] [i_12 - 3]) == (arr_42 [i_12] [i_12 - 3])));
        }
        for (int i_15 = 2; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_29 = (arr_49 [i_12 - 4] [i_12]);
            var_30 = ((!((max((-29705 + 9223372036854775802), ((128 ? (arr_48 [i_12] [2] [i_15]) : 121)))))));
            arr_54 [i_12] [i_12] [i_15] = (arr_38 [i_12] [i_15 + 1] [i_15 + 1] [i_12]);
        }
    }
    for (int i_16 = 4; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_31 = ((((min(1866125852109736523, var_0))) >= (((((~var_9) > (arr_37 [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        arr_58 [i_16] = (~((-(8852219656650973389 | -8491073096342780014))));
    }
    #pragma endscop
}
