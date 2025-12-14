/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((max((max(var_14, var_2)), var_8))) ? var_11 : (max(var_0, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_18 ^= ((-1916251330 < (((!((min((arr_9 [i_0] [i_1 + 2] [i_2] [i_3 - 2] [1]), 59098195))))))));
                            arr_14 [i_2] = (!-1916251330);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] = (((arr_7 [i_3 + 1] [i_2] [i_2] [i_3]) ? var_12 : (arr_7 [i_3 + 1] [i_2] [i_3 + 1] [i_3])));
                            var_19 = ((229 < (~var_5)));
                            var_20 = 523519867;
                            arr_18 [i_0] [i_2] [i_1] [i_0] [9] = (!var_13);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = ((arr_4 [i_0] [i_3 + 1]) ? (arr_4 [i_3 + 1] [i_0 - 3]) : (arr_4 [i_0] [i_1]));
                            arr_22 [i_6] [i_2] [i_2] [i_0 - 1] = (var_12 ? 1 : (arr_1 [i_0] [i_3 - 1]));
                        }

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_22 = (((~2097151) ? 2097151 : (arr_24 [i_7] [i_3] [i_2] [i_1] [i_0] [i_0])));
                            arr_26 [i_2] [i_7] = (min((max((arr_5 [i_3 - 1] [i_2] [i_2] [i_0 + 1]), (arr_5 [i_3 - 2] [i_2] [i_2] [i_0 - 3]))), (((!(arr_5 [i_3 - 2] [i_2] [i_2] [i_0 - 3]))))));
                            var_23 = (min((((!(arr_7 [i_0 - 1] [i_2] [i_3 - 1] [i_7])))), (((arr_4 [i_0 - 1] [i_1 + 1]) ? (arr_4 [i_0 - 1] [i_1 + 1]) : -1916251330))));
                        }
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            var_24 = 1916251329;
                            var_25 = (arr_13 [i_0 - 4] [i_1 + 1] [i_2] [i_3] [i_8 - 1]);
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = ((((max((arr_10 [i_0] [i_0] [i_0] [i_2]), var_7))) < var_14));
                    }
                    var_26 += (((((-1916251319 ? 47 : 787335909))) < (((arr_3 [i_2] [i_1 + 2] [i_2]) ? (arr_3 [i_0] [i_1 + 2] [i_0]) : var_8))));
                    var_27 = ((1 ? var_16 : (-1916251310 <= -787335910)));
                    var_28 = max((((-1916251349 <= (arr_25 [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_2] [1])))), (max((arr_11 [i_2] [i_1] [i_2] [i_2] [i_2]), (arr_25 [i_1 - 1] [i_1 + 1] [i_1] [i_2] [9] [i_2]))));
                }
                var_29 += (((((var_8 ? (((arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_1]) ^ var_7)) : (arr_5 [i_0 - 2] [i_0] [0] [10])))) || (29447 - 1)));
                var_30 = (arr_12 [i_0] [i_0 - 3] [i_0 + 1] [i_0 - 4] [i_0 - 4]);
            }
        }
    }
    var_31 = var_1;
    #pragma endscop
}
