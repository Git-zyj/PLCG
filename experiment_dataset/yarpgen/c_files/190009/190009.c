/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((((arr_3 [i_0]) ? ((min(var_16, (arr_0 [i_0])))) : (arr_2 [i_1]))) & (min(1, (min((arr_3 [i_0]), (arr_2 [i_0])))))));
                var_21 = (max(var_21, (arr_2 [i_1])));
                arr_4 [i_0] [i_0] [i_1] = arr_0 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = (arr_2 [i_0]);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = (((~(arr_12 [i_2 - 1] [i_4] [i_4] [i_2 - 1] [i_4] [20]))) & (((((~(arr_9 [i_0] [i_2] [i_0])))))));
                                var_23 = ((((min(var_4, (arr_1 [i_2 - 1])))) ? ((((arr_1 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])))) : 11224064593194608711));
                                var_24 = ((~(min((arr_1 [i_0]), ((1 ? (arr_10 [i_2] [i_2]) : (arr_12 [20] [i_1] [i_1] [i_2] [i_1] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_10 ? (max((((var_1 ? var_0 : 1))), ((var_2 ? var_16 : var_15)))) : (min((((var_7 ? 681097464 : var_5))), var_12))));
    var_26 = (max(var_26, 1));
    var_27 = var_3;
    #pragma endscop
}
