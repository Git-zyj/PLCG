/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = var_6;
        var_19 = ((((((((5724679868523215416 * (arr_0 [i_0])))) ? var_13 : (arr_0 [i_0])))) ? var_7 : (arr_0 [i_0])));
        var_20 = (((((((max(1, var_17)))) != -11168591490870878023)) ? -5724679868523215416 : (((-(((!(arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (((!-var_6) ? 7278152582838673592 : (arr_4 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_22 = arr_6 [i_1];
            var_23 = (var_17 * 7278152582838673593);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_24 = max((max((!var_15), ((-(arr_2 [i_1]))))), (((~(((arr_3 [13]) ? (arr_9 [i_1]) : 28237))))));
            arr_10 [i_1] [i_1] [i_3] = ((!((((arr_6 [i_3]) / (arr_8 [i_1] [i_3] [i_3]))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_25 = var_11;
            var_26 = ((!(((((min((arr_13 [i_1] [i_4]), (arr_12 [i_1] [i_4])))) ? (max(var_9, var_2)) : ((max(-4378, (arr_6 [i_1])))))))));
            arr_14 [6] [i_4] = (~((var_17 | (~var_7))));
            var_27 = (min(var_27, ((((((var_17 - ((16753 - (arr_11 [i_1])))))) ? var_14 : (((((max(151, 108)))) - var_8)))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_28 &= (arr_9 [i_5]);

            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_5] [i_5] = ((((-(arr_15 [i_5]))) - (arr_11 [i_6])));
                var_29 = (((arr_13 [i_6 + 2] [i_1]) ? (arr_19 [i_6 - 3] [i_6 - 2] [i_6] [i_6]) : ((var_16 ? var_5 : var_9))));
                arr_23 [i_1] [i_1] [i_1] [i_1] = (((arr_5 [8] [i_1] [i_6 + 1]) * var_0));
                arr_24 [i_1] [i_5] [i_6 - 1] = ((((var_9 & (arr_8 [i_1] [i_5] [0])))) ? (((var_6 ? (arr_5 [0] [i_5] [i_6 - 1]) : var_13))) : (arr_8 [i_6 - 1] [8] [i_6 - 2]));
            }
            arr_25 [i_1] [i_1] [i_5] = (!(((var_16 ? var_15 : (arr_15 [i_1])))));
            arr_26 [i_1] [5] = ((((!(arr_18 [i_1] [i_1] [i_5] [i_1]))) ? ((-1 ? var_11 : var_15)) : (var_1 > var_1)));
        }
        arr_27 [1] |= (arr_8 [i_1] [i_1] [i_1]);
    }
    var_30 -= (var_7 & var_12);
    #pragma endscop
}
