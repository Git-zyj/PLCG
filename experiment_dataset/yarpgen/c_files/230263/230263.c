/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = (min(0, -5993084189178152850));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_12 = var_4;
                            var_13 = var_3;
                            arr_13 [i_4] = ((var_6 != (arr_5 [i_0 + 1] [i_0 + 1] [i_4 - 1] [i_4 + 2])));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_14 = (277454307659486537 - 0);
                            var_15 = 153034911702621798;
                            var_16 = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_5] [i_3]);
                            var_17 = -277454307659486537;
                            var_18 = (~9223372036854775807);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 &= ((!(arr_19 [i_6] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                                var_20 = ((var_2 ? var_4 : (min((arr_20 [i_0] [i_0 - 1] [i_0] [i_6] [i_6]), (min(var_9, var_2))))));
                                var_21 += ((((((!(arr_10 [11] [7])))) << (arr_17 [i_7] [i_6] [i_1] [i_0]))) * (((var_4 < (min(277454307659486536, var_6))))));
                                var_22 = ((!((!(arr_18 [i_0] [i_0 + 1] [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((9223372036854775807 << (((-8192 + 8204) - 12))));
    #pragma endscop
}
