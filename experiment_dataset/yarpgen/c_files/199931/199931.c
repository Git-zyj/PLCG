/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((!(197 || -86))))));
                    var_17 = 1;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_0] = ((var_2 ? 183 : -4507720278360785362));
                        var_18 = (-(((arr_8 [i_2] [i_1] [i_0]) ? (var_4 - 1430275981) : ((6848119045082791845 / (arr_4 [i_3] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_19 = ((!(arr_10 [i_0] [i_0] [i_2] [i_4] [i_2])));
                        arr_15 [1] = (arr_5 [i_2] [i_1]);
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] = ((var_6 ? ((var_8 ? (arr_3 [i_0]) : (arr_9 [i_2]))) : (arr_7 [i_0] [i_1] [i_4] [i_0])));
                        var_20 -= (((arr_13 [i_1] [i_1]) / ((-890130227 ? 1 : 0))));
                        var_21 = (max(var_21, ((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_0]) : var_2)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_22 = 4507720278360785369;
                            var_23 = (arr_14 [i_0] [i_1] [i_2] [i_5 - 1] [i_6]);
                        }
                        arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] = var_7;
                        var_24 = (max(var_24, (((1 / (arr_8 [i_0] [i_0] [i_0]))))));
                        var_25 = (max(var_25, ((((!1) ? ((((!(arr_10 [i_0] [i_2] [5] [i_0] [i_0]))))) : -8198696381655768028)))));
                    }
                }
            }
        }
    }
    var_26 = var_9;
    var_27 = (max(var_27, (((var_10 ? (max(var_9, var_0)) : var_3)))));
    #pragma endscop
}
