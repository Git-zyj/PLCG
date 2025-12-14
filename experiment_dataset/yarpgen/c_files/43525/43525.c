/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (-9223372036854775807 - 1);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 = ((((((arr_11 [i_3] [i_2 - 1] [i_2 + 1]) ? var_0 : (arr_11 [i_3] [i_2 - 1] [i_2 + 1])))) ? (80 * 80) : (((arr_11 [i_3] [i_2 - 1] [i_2 + 1]) - var_10))));
                        var_19 *= (((((-(((arr_11 [i_1] [i_1] [i_1]) ^ var_12))))) ? (arr_11 [i_1] [i_2 - 1] [i_2 - 1]) : var_11));
                        arr_12 [i_2] [i_1] [i_1] [i_3] &= (max((max(-var_0, (max(var_13, (arr_11 [i_1] [10] [i_3]))))), (((!(arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]))))));
                    }
                    arr_13 [13] [13] [i_2] = ((((var_14 ? (arr_2 [i_0] [i_1]) : (arr_2 [15] [i_1]))) >> (((arr_2 [i_0] [i_1]) - 11145))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_20 *= (max(((+(((arr_9 [i_1] [i_4 + 4] [i_1] [i_1] [i_1]) / 12726099302670271540)))), ((min(((min((arr_4 [i_1]), 80))), var_3)))));
                                var_21 -= (((!(((arr_0 [i_0]) && (arr_2 [i_1] [i_4]))))));
                                var_22 = ((-(arr_7 [i_5] [i_5])));
                            }
                        }
                    }
                    var_23 = ((!((!(arr_15 [i_2 - 1] [i_2 - 1] [i_2] [i_0] [15])))));
                }
            }
        }
    }
    var_24 = (min((var_6 | var_2), var_3));
    var_25 = (max(var_25, var_11));
    #pragma endscop
}
