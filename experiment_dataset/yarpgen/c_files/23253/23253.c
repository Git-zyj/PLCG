/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((15908 ? 22061 : -29795));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_11 = (max(var_11, (((((max(var_4, (arr_1 [10])))) ? (((!(((-29821 ? -32010 : 16383)))))) : (max((arr_0 [i_0]), -var_1)))))));
        arr_3 [i_0] = 15749;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = ((((((((var_7 ? (arr_6 [i_1]) : var_9))) ? -7317 : 15749))) ? (max((((arr_7 [i_1]) + 14529)), -var_2)) : (((arr_5 [i_1]) ? (arr_1 [i_1]) : (arr_5 [i_1])))));
        arr_9 [i_1] = ((-29784 ? 16388 : -20419));

        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            var_12 = (max(var_12, (((((!(arr_2 [12]))) && (-28367 > 20066))))));
            var_13 = ((19820 ? -7 : -29795));
            arr_14 [i_2] [i_2] |= -var_8;
            var_14 = (max(-var_9, ((16449 * (arr_4 [i_1])))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_18 [6] [i_1] [i_1] &= 5007;
            var_15 = ((((-16390 ? -15749 : (arr_13 [i_1] [i_3]))) % (~var_1)));
        }
        var_16 = (((((arr_13 [i_1] [i_1]) < 32571)) ? ((max(-27221, -16448))) : (max(((-29773 ? (arr_17 [7]) : 58429)), ((~(arr_0 [i_1])))))));
        arr_19 [i_1] = (((((~(arr_0 [i_1])))) ? var_2 : (((((25320 ? 16725 : -16449))) ? 56445 : (arr_15 [i_1])))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_17 = ((((((arr_22 [i_4 + 1] [i_4 + 3] [i_4 + 3]) ? var_1 : (arr_22 [i_4 + 1] [i_4 + 1] [i_4])))) ? ((((var_2 < 9090) < 9090))) : ((-15150 ? ((9107 ? var_1 : -16390)) : var_1))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_18 = (max(((var_2 - ((65535 ? (arr_27 [i_7] [i_6] [i_5 + 1] [i_5 + 1] [i_4 - 1]) : 0)))), ((var_2 ? (((arr_0 [i_6]) ? (arr_25 [i_7] [i_6] [i_5 + 1] [i_4]) : var_8)) : (!29772)))));
                        arr_28 [i_4] [i_6] [i_6] [i_6] = ((15 ? 5499 : 56445));
                        arr_29 [i_4] [i_4] [i_4] [i_6] = arr_24 [i_4 + 1] [i_5] [i_6] [i_6];
                        var_19 = var_5;
                        var_20 = (((~var_5) ? (arr_24 [i_4] [i_5] [i_6] [i_7]) : (((((-(arr_25 [i_7] [i_7] [i_7] [i_7])))) ? -28367 : var_8))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = (((var_0 * var_3) ? (arr_0 [i_6]) : (arr_26 [i_8] [i_6] [0] [8])));
                        arr_34 [i_4] [i_4] [i_6] [i_8] = 2990;
                        var_22 = (arr_20 [2] [i_8]);
                    }
                }
            }
        }
        arr_35 [i_4] = (((((((var_2 ? (arr_24 [i_4] [i_4] [i_4] [i_4 + 2]) : (arr_25 [i_4] [11] [2] [i_4]))) < ((18028 ? var_3 : 28370))))) * (((((5114 ? var_7 : var_6)) > (var_5 * 57030))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_23 = (((arr_1 [i_9]) ? ((5499 ? (15749 % 5481) : ((max(57030, 24963))))) : (min((arr_38 [5] [i_9]), (40141 + -28383)))));
        var_24 = ((((max(var_6, (max((arr_0 [i_9]), (arr_38 [i_9] [i_9])))))) ? (arr_37 [i_9]) : (arr_37 [i_9])));
    }
    var_25 = var_5;
    #pragma endscop
}
