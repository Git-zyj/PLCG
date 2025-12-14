/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((((((var_2 ? -8996471348369380014 : 1)) >= var_12))), ((-((1458583018 ? var_3 : var_13)))));
    var_15 = ((var_11 + var_0) > ((((max(var_0, var_11))) ? (var_3 / 82) : (var_12 / var_1))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = ((((((arr_0 [i_0 - 2]) ? 86 : (arr_1 [i_0 - 3] [i_0 - 2])))) ? (((arr_1 [i_0] [i_0]) * (-20557 / var_7))) : (((((13 ? -1554164714 : 103)) / (arr_0 [i_0 + 2]))))));
        arr_3 [i_0] &= var_8;
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 += var_8;
                            var_18 = (((arr_18 [i_4 + 2] [i_2] [i_1 - 3]) ? (arr_15 [i_4 - 1] [i_1 - 3]) : 1));
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_19 = var_10;
                            arr_23 [i_2] [i_4] [i_6] = ((var_6 ? (arr_6 [i_1]) : 5738938611413220758));
                            arr_24 [i_1] [i_2] [i_3] [i_3] [i_6] [1] = (!var_0);
                            var_20 = (((arr_19 [i_3]) > ((~(arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        }
                        for (int i_7 = 4; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_21 |= ((var_9 ? ((13 ? (arr_9 [0] [i_4] [i_2]) : (arr_9 [i_4] [i_4] [i_3]))) : ((var_11 ? 7467 : var_10))));
                            var_22 = (var_6 + var_2);
                            arr_27 [i_1 + 1] [i_2] [i_3] [i_2] [10] = ((var_11 | ((2016045842 ? -12484 : -1934553473))));
                        }
                        var_23 = ((-(arr_5 [i_2] [i_3])));
                        var_24 = var_0;
                    }
                }
            }
        }
        var_25 -= ((49783 | (~105)));
        var_26 |= ((-(arr_19 [i_1 - 1])));
        arr_28 [i_1] = ((!(((122 ? 2 : 3)))));
        var_27 = 2097151;
    }
    #pragma endscop
}
