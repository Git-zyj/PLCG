/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        var_19 = ((((((!1637969201344867065) < ((((arr_9 [i_0] [i_0] [i_0] [i_0]) < var_5)))))) < (1637969201344867089 < 93)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_2] [i_4] = (arr_0 [i_2 - 2]);
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_7 [i_1] [5] [i_2 - 2] [i_2]) ? (arr_4 [i_2 + 1] [i_1] [i_1]) : (arr_4 [i_2 - 1] [i_1] [i_1])));
                            var_20 -= ((+(((arr_2 [i_4] [i_1] [i_1]) ? var_17 : (arr_0 [i_2])))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_21 -= (max(((((arr_8 [i_2] [i_2] [i_2 - 1]) < ((((arr_3 [9]) < var_7)))))), ((min((arr_11 [i_5] [11] [i_2] [i_1] [i_0]), var_11)))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_22 ^= (((((-((16808774872364684574 ? var_0 : 18027))))) ? (max((~162), (max(16808774872364684574, (arr_7 [i_0] [i_1] [i_2] [i_6]))))) : (((0 ? 0 : 128)))));
                            arr_21 [i_0] [i_1] [i_2] [i_5] = max((max((arr_8 [i_5 + 2] [i_2 - 2] [i_2]), (arr_5 [i_5 + 3] [i_5] [i_2 + 1]))), (((arr_8 [i_5 + 1] [i_2 + 1] [i_5 + 1]) ? (arr_5 [i_5 + 2] [i_2] [i_2 + 1]) : (arr_8 [i_5 - 1] [i_2 - 2] [i_0]))));
                            arr_22 [i_6] [9] [i_0] &= ((((((112 < 16808774872364684534) < ((2411122571 ? 497481402 : 255))))) < (((var_11 + 91) + ((var_18 ? var_5 : 124))))));
                            var_23 = (min(var_23, 1637969201344867033));
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_26 [i_7] [i_7] [i_2 + 1] [2] [i_0] [i_0] = -116;
                        var_24 = ((246 ? 48266 : 20));
                        var_25 += (((!16808774872364684521) < (16808774872364684540 || -50)));
                    }
                    var_26 = var_6;
                    var_27 = (min(((((arr_23 [i_2] [i_0] [i_0] [i_0]) ? (arr_24 [i_0] [i_1] [i_0]) : 0))), 1));
                    var_28 += -0;
                    var_29 -= (((min((arr_0 [i_1]), (arr_9 [7] [7] [i_0] [i_0]))) < (~132)));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] = (((max((var_16 < 24800), 0)) < ((((((8924193993850702957 < (-127 - 1)))) < (((548880859 < (arr_28 [i_8] [i_8])))))))));
        arr_30 [i_8] = ((((((arr_27 [i_8]) ? (arr_27 [i_8]) : 3746086406))) ? (((!(arr_28 [i_8] [i_8])))) : (!4294967288)));
    }
    #pragma endscop
}
