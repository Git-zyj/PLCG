/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_5 [i_0] [i_0] [i_0 - 1] [i_0])));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_21 = ((+(((arr_9 [i_2] [i_2] [i_2]) ? (arr_9 [i_0] [i_2] [i_3]) : 3970217078243184676))));
                        var_22 = max(((((max(14476526995466366946, 14476526995466366939))) ? var_13 : (arr_7 [i_0] [i_0 - 1] [i_0]))), ((((arr_8 [i_0 + 1] [i_1] [i_2] [i_0]) >= (arr_8 [i_0] [i_2] [i_1] [i_0])))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_10 [i_0] [7] [i_2]);
                            arr_14 [i_0] [i_0] [6] [i_0] [13] [i_0 + 1] [5] = (((((+(((arr_9 [1] [i_1] [i_4 + 2]) ? 14476526995466366946 : 14476526995466366932))))) ? ((max((max(var_3, var_7)), var_1))) : ((4095 ? ((-69877392 * (arr_7 [i_0] [i_2] [i_0]))) : (arr_9 [i_3] [i_2] [i_1])))));
                            arr_15 [i_0 - 3] [i_0 - 3] [i_0] [3] = var_13;
                            var_23 = (((((((!(arr_9 [i_3 + 2] [i_1] [i_0]))) ? (max(85, var_14)) : (arr_11 [i_0 - 2] [i_1] [i_0] [i_3 - 2] [i_4])))) && (((((max(var_2, (arr_8 [i_0] [i_1] [i_1] [i_0])))) ? (arr_10 [9] [9] [i_2]) : (!64))))));
                            arr_16 [i_0] [i_0] [4] [i_3 + 2] [i_3 + 2] [i_4] = ((!(arr_0 [i_4] [i_3 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            arr_21 [i_1] [i_0] [i_2] [i_3] [i_5] [i_1] = (((arr_12 [i_0] [13] [i_2] [i_3] [i_5 - 3] [i_1] [13]) || (arr_12 [i_0 - 1] [i_0 - 1] [1] [i_5] [i_5 - 3] [2] [i_0 - 3])));
                            var_24 = ((((!(arr_12 [i_2] [i_3] [10] [i_2] [i_1] [i_1] [4])))) != (((arr_9 [i_0] [i_2] [i_5 + 1]) ? var_13 : (arr_10 [11] [11] [i_3 - 2]))));
                        }
                        var_25 += (arr_19 [i_0] [i_1] [i_3 - 1] [8]);
                        arr_22 [i_0] [i_1] [i_0] [i_1] = (((66846720 && (arr_17 [i_0] [i_0 + 2] [i_1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_26 = (((((215 ? 60 : 48))) ? ((max(-48, -69877405))) : (((max(11966894558857452490, 25)) | 69))));
                        var_27 = ((-(arr_24 [i_0] [i_1] [i_1] [i_6])));
                        arr_26 [1] [i_0] [1] [i_2] = ((((((8589934591 ? 166 : var_13)))) && (((84 ? 60 : (((arr_19 [i_0] [i_0] [i_0] [1]) * (arr_7 [i_0] [i_2] [i_0]))))))));
                    }
                }
            }
        }
    }
    var_28 = (((var_2 ? -var_2 : ((var_3 ? var_16 : 45)))));
    #pragma endscop
}
