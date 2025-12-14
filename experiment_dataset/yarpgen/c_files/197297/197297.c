/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-(var_7 + 11786829881863544846))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = 2590595722;
        var_14 = (~-583232735);
        arr_4 [i_0] = ((max((179 * 2590595722), ((((arr_1 [i_0] [i_0 + 3]) <= (arr_2 [i_0 + 3])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_15 = ((((((arr_5 [i_2] [i_3]) ? 48018 : -5210358632838673795))) ? (((((arr_5 [i_1] [i_2]) && (arr_5 [i_1] [i_2]))))) : (((arr_5 [i_1] [i_2]) + 404743259))));
                    arr_15 [i_2] [i_2] |= (((arr_0 [i_1] [4]) ? (arr_0 [i_3] [i_2]) : (min((arr_1 [i_1] [i_3]), (arr_1 [i_1] [i_3])))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        arr_18 [i_1] [i_3] [i_2] [i_2] [i_2] [i_4] = (arr_1 [i_1] [i_4]);
                        arr_19 [i_1] [i_3] [i_4] = 18446744073709551615;
                        arr_20 [i_3] [i_3] = (arr_9 [4]);
                    }
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_27 [i_3] [i_3] = (arr_5 [i_5] [i_2]);
                            arr_28 [i_1] [5] [i_3] [i_5] [1] [i_1] [i_3] = 2590595722;
                            var_16 = (arr_8 [3]);
                            var_17 = 664839879383390895;
                        }
                        arr_29 [i_3] = (((((arr_21 [i_5 - 3] [i_3]) ? (arr_8 [i_5 - 3]) : (arr_8 [i_5 - 3]))) ^ (max(18446744073709551615, var_10))));
                        arr_30 [i_3] [2] [i_3] [i_3] [i_1] = ((((-(arr_16 [i_3] [i_3] [i_3] [i_5 - 1] [i_5 - 1]))) + 45));
                        arr_31 [i_3] [3] [3] [i_3] = ((-(max((max(0, 0)), 0))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_18 = (-(max(-14, 4294967295)));
                        var_19 = 8895782409929827623;
                        arr_34 [i_1] [i_1] [i_1] [i_1] [i_3] = (((max(-8787600924461126108, ((((arr_6 [6]) / (arr_2 [i_1])))))) / (0 <= 0)));
                        arr_35 [i_3] [i_2] [i_2] [i_7] = (0 == var_0);
                    }
                    var_20 -= var_12;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_39 [i_1] [i_2] [i_2] [i_3] [i_8] = 13;
                        arr_40 [i_3] [i_2] = -14;
                    }
                }
            }
        }
        arr_41 [i_1] = (((((arr_6 [i_1]) == (arr_37 [i_1] [0] [i_1]))) ? (((!(arr_0 [i_1] [i_1])))) : 2805805281));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_48 [i_9] = 1500604432;
            arr_49 [i_10] [5] [i_10] = (((min(var_0, var_0))) % 1);
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_21 = (((max((((var_0 / (arr_53 [0] [0] [i_11] [i_13])))), ((-8787600924461126118 ? 1 : var_12)))) + ((((((arr_52 [i_9] [9] [i_12] [i_11]) ? 8787600924461126108 : var_6)))))));
                            var_22 = (min(var_22, ((!(arr_52 [0] [i_11] [i_11 + 3] [i_10])))));
                        }
                    }
                }
            }
        }
        arr_57 [i_9] = 9;
    }
    var_23 = var_4;
    var_24 = var_9;
    #pragma endscop
}
