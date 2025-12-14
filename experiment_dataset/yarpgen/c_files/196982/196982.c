/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((((((arr_8 [i_0] [i_0] [i_3]) ? (arr_5 [i_3] [i_3] [i_3]) : (arr_2 [i_0] [i_1])))) ? ((-(((arr_5 [i_0] [i_1] [i_2]) ? (arr_9 [i_1]) : (arr_8 [i_0] [i_1] [i_1]))))) : (!4)));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] = (min(((((arr_2 [i_0] [i_1]) <= (0 <= 251)))), ((min((arr_4 [i_1] [i_2]), (arr_1 [i_2]))))));
                            arr_15 [i_0] [i_4] [i_0] [i_0] = ((!(((-(arr_8 [i_0] [i_1] [i_1]))))));
                            var_18 = -1597332916;
                            var_19 = (max(var_19, ((((((((max(0, -1))) > 1))) % (max((arr_9 [i_1]), (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                    }
                }
            }
            arr_16 [i_0] = ((min((((arr_1 [i_1]) ? (arr_8 [i_0] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0]))), ((min((arr_0 [i_1]), (arr_0 [i_0])))))) / (((arr_2 [i_0] [i_1]) ? (arr_4 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
            var_20 = (max(var_20, (arr_0 [i_1])));
        }
        var_21 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_22 = (((((((arr_9 [i_0]) ? (arr_1 [i_0]) : (arr_9 [i_0])))) ? (max((arr_2 [i_0] [i_0]), (arr_9 [i_0]))) : (min((arr_5 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = (~104);
        var_24 = (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    var_25 = var_8;

    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_26 = (((arr_9 [i_6 + 1]) / (arr_2 [i_6 + 1] [i_6])));
        var_27 = (((arr_0 [i_6 + 1]) ? ((min((arr_17 [i_6 + 1]), (arr_18 [i_6 + 1])))) : (((arr_21 [i_6] [i_6 + 1]) ^ (arr_21 [i_6] [i_6 - 1])))));

        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            arr_24 [i_7] = (arr_17 [i_6 + 1]);

            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                var_28 = ((((((arr_6 [i_6] [i_6] [i_6] [i_6]) ? (((arr_9 [i_7 + 1]) ? (arr_0 [i_8]) : (arr_27 [i_8]))) : (arr_5 [i_6] [i_6] [i_6])))) ? (((((arr_8 [i_6 + 1] [i_7 - 1] [i_8]) != (arr_8 [i_6 - 2] [i_6 - 2] [i_6 - 2]))))) : ((3333637846 ? (max(21465, (arr_23 [i_6]))) : 21470))));
                var_29 = (arr_25 [i_8] [i_7]);
            }
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_30 = (((-(arr_30 [i_6] [i_6]))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_31 = (arr_0 [i_9 + 1]);
                            var_32 = (-(arr_8 [i_10 - 1] [i_10] [i_10]));
                            var_33 = (((((-(arr_3 [i_6]))) >= (arr_19 [i_6 - 1] [i_7 - 1]))));
                        }
                    }
                }
                var_34 = ((((((min((arr_27 [6]), (arr_26 [i_6] [i_6] [i_6]))) + (arr_33 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6])))) ? (arr_7 [i_6 - 2]) : ((((arr_31 [i_6] [i_6]) <= (arr_0 [i_9]))))));
                arr_35 [i_6] [i_7] [i_6] = (min(((((arr_13 [i_6 - 1] [i_6 - 1] [i_7 + 1]) ? (((((arr_7 [i_6]) != (arr_32 [8] [i_6] [i_6] [i_6] [i_9] [i_9 + 2]))))) : (arr_21 [i_6] [i_6])))), (((!(arr_18 [i_9]))))));
                var_35 ^= ((((!(arr_5 [i_6] [i_7 - 1] [i_9])))));
            }
        }
        var_36 = (arr_26 [i_6 - 2] [i_6 + 1] [i_6 - 1]);
    }
    #pragma endscop
}
