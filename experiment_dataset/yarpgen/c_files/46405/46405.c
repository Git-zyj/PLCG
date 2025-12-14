/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = var_6;

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                arr_11 [i_1] [i_1] = var_3;
                var_20 ^= (((var_13 ? (arr_4 [i_2 - 1] [i_2]) : (arr_3 [i_0 + 1]))));

                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    var_21 = (!1);
                    var_22 &= var_8;
                    var_23 = (max(var_23, var_8));
                }
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_24 ^= (min((~var_18), ((min(var_3, (arr_4 [i_0] [i_5]))))));
                        arr_21 [11] [11] [11] [i_4] [i_1] [11] = (max((((!((min(3755077929162728973, 508)))))), ((-7668796222889822679 ? (max((arr_9 [i_0] [7] [i_0] [i_0]), 6917529027641081856)) : ((14691666144546822643 ? 18446744073709551615 : -65))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] |= (min(var_1, (arr_9 [i_0 - 1] [i_1] [i_1] [i_1])));
                    var_25 *= ((~((((~(arr_4 [0] [i_2])))))));
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] = var_11;
                            arr_33 [i_0] [i_0] [4] [10] [i_0] |= ((((~((min(var_4, (arr_17 [i_6] [8]))))))) ? ((((!(arr_17 [i_0] [i_0]))))) : var_18);
                        }
                    }
                }
            }
        }
        var_26 = ((((min(var_5, (arr_0 [i_0 - 1] [i_0 - 1])))) ? (min(var_18, (arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) : var_4));
        var_27 = (((~14691666144546822643) ? 2122219819 : 23383));
        var_28 = (~94);
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_29 = ((((arr_36 [i_9]) ? (arr_36 [i_9]) : (arr_36 [i_9]))));
        var_30 = (max(var_30, var_12));
        var_31 = var_18;
        var_32 = min((min(var_5, (arr_35 [i_9] [i_9]))), ((4818332797406337014 ? 4818332797406337003 : 10330502717586540646)));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_40 [14] = ((-(max(((max(var_6, (arr_37 [15] [13])))), var_16))));
        var_33 = ((((arr_38 [i_10]) ? (arr_38 [i_10]) : (arr_38 [i_10]))));
        var_34 = var_14;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_44 [i_11] = var_7;
        arr_45 [i_11] = (min((min(var_6, (arr_43 [i_11]))), (((4294967295 ? ((max(var_1, var_11))) : (arr_41 [i_11]))))));
    }
    var_35 = (((((522 ? -var_0 : (~var_15)))) ? 16 : var_11));
    #pragma endscop
}
