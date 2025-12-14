/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((1 ? var_2 : (var_14 || var_7)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 *= ((!((max(3248687449244100956, var_17)))));
                            var_21 = ((((max(26898, 3758096384))) || (((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) && (arr_5 [i_0 - 4] [i_0 - 2] [i_0 - 1])))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((arr_1 [15]) & (arr_8 [i_4 - 1] [i_1] [i_2] [i_3]));
                                var_22 = (((arr_1 [i_1]) <= -4));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = ((((((arr_11 [i_5]) ? (arr_10 [i_0] [i_1] [18] [i_3] [i_5]) : (arr_9 [i_0] [i_1] [i_2] [i_2])))) ^ (((((max(11080, var_17))) ? -26887 : var_5)))));
                                var_24 |= arr_6 [i_1];
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_1] [i_1] = (min(((~(((arr_2 [i_0] [i_1]) ? (arr_7 [i_0] [i_1] [i_0]) : var_17)))), (((((max(var_16, -26900)))) ^ ((-26899 ? var_5 : (arr_7 [i_0 - 4] [i_0] [i_0])))))));
                arr_19 [i_1] = (((arr_7 [i_1] [i_1] [i_0]) <= (((var_15 & 6705853050166770018) ? var_5 : 4095))));
                var_25 = (max(var_25, (((1 ? (min((arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_17 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 4]))) : ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_1]))))))));
            }
        }
    }
    var_26 = var_17;
    #pragma endscop
}
