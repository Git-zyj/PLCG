/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_15 = (max(var_15, ((min((arr_0 [i_0 - 3] [i_0 + 2]), (((arr_0 [i_0 + 1] [i_0 - 2]) ? var_9 : (arr_0 [i_0 - 3] [i_0 - 1]))))))));
                    var_16 = (((max((arr_6 [i_0 - 1]), (arr_0 [i_0 + 3] [i_0 - 2])))) ? ((min((arr_6 [i_0 - 3]), var_6))) : ((min((arr_6 [i_0 - 3]), (arr_6 [i_0 - 2])))));
                    var_17 -= (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 3])))) <= (((arr_3 [i_0 - 2] [i_1] [i_2]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_2]) : (arr_6 [i_0 + 1]))));
                    var_18 = (((arr_3 [i_0 + 3] [i_1] [i_2]) ? ((((arr_7 [i_0] [i_0 + 1] [i_0 - 2] [i_2]) && (((var_8 ? (arr_2 [i_0]) : var_3)))))) : (((arr_3 [i_0 - 1] [3] [i_0 - 1]) - (arr_3 [i_0] [i_0] [i_0 + 1])))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 &= (max((arr_9 [i_0 + 2]), (min((arr_6 [i_0 + 3]), var_12))));

                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_20 += (min((((min(1, 1)))), var_4));
                                var_21 -= (arr_16 [i_0] [i_0] [i_3] [i_3] [i_5]);
                                arr_17 [i_0 + 3] [i_1] [i_3] [i_4] [i_4] = (min((arr_11 [i_4] [i_5]), (min(6021742636814034942, 1))));
                                var_22 = arr_11 [i_3] [i_5];
                                var_23 = (((var_9 | var_5) ? (((var_4 - (arr_0 [i_0 + 1] [i_0 - 3])))) : var_10));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_24 = (min(11627, 1));
                                var_25 = (min((arr_4 [i_1] [i_4]), var_10));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_26 = (((arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 2]) ? var_9 : (arr_8 [i_0 + 2] [i_0 - 2] [i_1])));
                                arr_22 [i_0] [i_1] [i_3] [i_4] [i_4] = (((((arr_14 [i_0] [i_7]) ? (arr_8 [i_0] [i_0] [i_7]) : var_10)) / (arr_15 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 - 3])));
                                var_27 = ((var_0 - (arr_0 [i_0 - 3] [i_0 - 2])));
                                var_28 = -9;
                                var_29 = (arr_10 [i_0 - 1] [i_1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
