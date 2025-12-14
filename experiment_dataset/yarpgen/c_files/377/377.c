/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((!(1 << 1)))) > (((((1 ? 1 : 1)) <= ((max(1, 1))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (!1);
                                var_15 = (min(var_15, (((1 ? ((((((1 ? var_10 : (arr_6 [i_0] [i_2] [i_3] [i_4])))) ? ((max(1, 1))) : (((1 < (arr_4 [i_0] [i_3] [14]))))))) : ((1 ? -124 : -26)))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [13] [9] = (((arr_2 [i_1 + 1] [i_1]) ? (((arr_7 [i_1 + 2] [i_1 - 1]) - (arr_2 [i_1 + 1] [12]))) : ((((arr_4 [1] [i_1] [i_0]) ? (arr_8 [i_0] [8] [i_1 - 1] [i_1]) : ((1 + (arr_12 [i_0] [i_1 + 1] [i_1] [i_1] [7]))))))));
            }
        }
    }
    var_16 = (max(var_2, (min(1, (max(1, var_7))))));
    var_17 = (((54025 ? var_6 : var_7)));
    #pragma endscop
}
