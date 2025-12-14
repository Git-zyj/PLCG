/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -514938631;
    var_11 = -42;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = (((((13994 ? var_2 : (0 && 42)))) ^ 1821789862));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_12 = ((((min(0, ((61 ? var_0 : -36))))) ? ((((!1821789862) ? ((((!(arr_5 [i_1]))))) : (min(var_4, (-32767 - 1)))))) : (max((max(-14, (arr_5 [i_1]))), (var_7 != var_1)))));
        arr_7 [i_1] [i_1] = (4110904859 <= 33863);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] = -42;

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_13 = 184062437;
            arr_16 [i_3] [i_2] = (!17927119935976742897);
            arr_17 [i_3] [i_2] [i_2] &= ((3037177149 || ((((arr_11 [i_2 + 1]) ? var_4 : (arr_14 [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_14 = 252;
            var_15 = (((arr_8 [i_2 - 1]) << (-3425535685 - 869431554)));
            arr_21 [i_4] [i_2] = 5158641402231315157;
            arr_22 [i_4] [i_2] = (arr_0 [i_2]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_16 = (max(var_16, (((((((((max(56, 6308))) < (arr_18 [i_2] [i_5]))))) != ((((((arr_14 [i_5] [i_5]) ? 4110904859 : 36))) ? ((1615073789 ? 184062447 : 59228)) : (arr_10 [i_2]))))))));
            var_17 = (min((((40375 ? 47088 : 4294967295))), ((max((73 / -2117), (arr_13 [i_5]))))));
            var_18 |= (((arr_9 [i_2 + 1]) && ((((arr_9 [i_2 + 1]) ? 2473177433 : (arr_9 [i_2 + 1]))))));
            arr_25 [i_5] [i_2] |= 106432638;
        }
        var_19 = ((!(((!var_4) && (!-18701)))));
        var_20 = 184062447;
    }
    #pragma endscop
}
