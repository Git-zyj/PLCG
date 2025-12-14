/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 &= (~(((!var_0) ? var_6 : (max(var_7, (-2147483647 - 1))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((!(((~(arr_9 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))))));
                                arr_12 [20] = (max((min((arr_9 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1]), 2305842459457880064)), (~2305842459457880064)));
                            }
                        }
                    }
                }
                arr_13 [6] [i_0] = (max(-2305842459457880064, (arr_2 [19] [i_0])));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_13 *= (min((-1568366215 * -1), (((~(arr_0 [i_1] [i_6]))))));
                                arr_20 [i_6] [i_6] [i_0] [i_0] [i_6] = (((((!(arr_15 [i_5])))) / (arr_15 [i_0])));
                            }
                        }
                    }
                    arr_21 [i_0] = -2305842459457880064;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_26 [i_0] [i_0] [1] [i_8] = (arr_14 [i_0] [i_1] [i_8]);
                    var_14 *= (((!var_9) ? (arr_25 [1] [i_1] [6] [6]) : var_6));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_15 = 19395;
                    var_16 = (((arr_1 [i_1] [i_9]) > -19405));
                }
                var_17 = (min(var_17, (arr_15 [1])));
            }
        }
    }
    #pragma endscop
}
