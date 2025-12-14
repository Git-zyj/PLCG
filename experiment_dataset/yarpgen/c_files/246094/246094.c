/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 594;
    var_12 = (((((min(var_7, 598))) == var_1)) || ((min(((var_6 ? var_9 : 594)), ((var_8 ? 593 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((max(((min(var_9, var_9))), (arr_2 [i_0 - 1])))) ? (((!890475245488944807) ? (arr_0 [i_0 - 1] [i_0 - 2]) : var_3)) : (((~(arr_3 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = var_10;
                                arr_12 [i_4] = var_6;
                                var_15 |= (min((arr_5 [i_0]), ((~(arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 2])))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_4] = ((var_5 / (arr_5 [i_1])));
                                var_16 -= ((64942 + ((((var_7 >= (arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 3])))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [0] [0] [0] [10] = (((((min((arr_9 [i_0] [i_1] [i_1] [13] [i_5 - 1]), var_8))) ? -36 : (arr_8 [i_0 - 2] [i_0 + 1] [i_5 + 1]))));
                        var_17 = (max(var_17, (arr_11 [i_0] [i_0 + 1] [i_5 - 1] [i_0 + 1] [i_1])));
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_6 - 1] [i_0] = (arr_0 [i_0] [i_1]);
                        var_18 = (((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_6 + 1]) ? (arr_11 [i_0 - 1] [i_1] [i_1] [i_6 - 1] [i_0 + 1]) : 17556268828220606816)) * (arr_11 [5] [i_1] [5] [i_6] [i_2])));
                        arr_20 [i_0] [i_1] [i_2] [i_2] [14] = (((((arr_10 [i_0] [i_1]) ? (arr_6 [i_6 - 1] [i_0 + 2]) : (arr_9 [i_0 - 1] [i_1] [i_2] [i_2] [i_6]))) == var_7));
                        var_19 = ((!(arr_4 [i_1] [i_1] [i_0 + 1])));
                        var_20 = (min(var_20, (((!(!593))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
