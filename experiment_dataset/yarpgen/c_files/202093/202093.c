/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_11 ? 1 : var_4))) % ((var_6 ? var_10 : var_7)))) ^ (((var_14 ? (max(55637, -6159077095645440716)) : (var_8 || var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_11 [11] [i_3 - 2] [2] [i_2 - 1] [i_1] [i_0] = ((-(1646 - 1)));
                                arr_12 [i_4] [i_3] [i_2 + 1] [i_1] [i_1] [i_0] = 1;
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_17 [1] [i_3 + 2] [i_2 + 1] [1] [i_0] = (arr_16 [i_0] [i_2 - 1] [i_3 - 2]);
                                var_18 += ((!((min((((-(arr_9 [i_5] [10] [i_2] [i_1] [i_0])))), -var_11)))));
                                var_19 = (((((min((arr_2 [i_0] [i_0] [i_0]), (arr_1 [24]))))) | (min(((var_12 ? var_11 : var_12)), (!-32760)))));
                            }
                            var_20 = (((((!(arr_5 [10] [i_1])))) | (arr_0 [8])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_6] = -32765;
                            arr_23 [i_6] [i_1] [22] [i_6] = ((-(((((arr_18 [i_6] [i_0]) ? (arr_5 [i_0] [i_0]) : var_10)) >> (((((arr_9 [i_7] [i_6] [i_1] [i_0] [i_0]) ? (arr_21 [i_7] [i_6] [i_1] [i_0]) : -32760)) - 814741959))))));
                        }
                    }
                }
                var_21 = ((((max((arr_6 [i_1]), (var_14 ^ var_0)))) ? (var_12 + var_2) : ((((!(var_10 <= var_15)))))));
            }
        }
    }
    #pragma endscop
}
