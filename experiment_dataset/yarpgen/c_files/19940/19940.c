/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-(var_7 != var_4))) < (!1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [1] = 15734420500826355443;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((((-((239843708 ? var_14 : 1992536431)))) + 2147483647)) >> (-var_4 - 62)));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = ((-(((arr_0 [i_1 + 1]) ? var_10 : (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1])))));
                        var_18 = (min(var_18, var_7));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (min(((-(var_7 * var_13))), (((((!(arr_4 [i_1]))))))));
                        arr_15 [i_1] [i_1 + 1] [i_0] [i_4] = ((4055123588 <= ((min(((-(arr_5 [i_1] [1]))), (var_11 <= var_0))))));
                        arr_16 [i_1] [i_2] [i_1] = ((-(min((4055123610 / var_14), (arr_8 [i_1] [i_1] [i_1 + 1] [8])))));
                        arr_17 [i_1] [i_1] = var_2;
                    }
                }
            }
        }
    }
    var_20 = ((!((((!var_11) ? 1 : ((var_14 ? 1 : 2)))))));
    #pragma endscop
}
