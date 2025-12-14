/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((var_6 + (min(1623365470, 1623365474))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [4] = ((((min(-var_9, (1 % -32763)))) ? (((-((min((arr_1 [i_0] [i_4]), var_11)))))) : (min((arr_4 [i_0]), ((((-2147483647 - 1) ? (arr_7 [i_0] [i_0] [i_0] [i_3]) : -1)))))));
                                arr_15 [0] [i_0] [i_0] [i_0] [6] [0] = ((+(((arr_8 [i_0] [i_0 - 1] [i_0 + 4] [i_0 - 1] [i_0] [i_0]) * (!1)))));
                                var_17 += (((((-25 ? 1 : var_5))) != (arr_3 [i_0] [i_1])));
                                var_18 = (min(1381771324, -1298328257));
                            }
                        }
                    }
                }
                var_19 = (arr_8 [i_0] [7] [3] [11] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_5] [10] = (arr_6 [i_6] [i_0] [i_0]);
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] = (min((arr_13 [6] [i_0] [i_0 + 3] [i_0] [i_0 + 3]), (((arr_13 [i_1] [i_0] [i_0] [i_0] [i_0 + 2]) + var_1))));
                            var_20 = (max(var_20, (((min((arr_17 [i_0 - 1] [i_1] [i_5]), -6862025506421792742)) >= ((((var_10 < ((((arr_0 [i_6] [i_6]) != var_0)))))))))));
                            var_21 = (max(var_21, (((!((min((min(var_3, (arr_7 [i_0 + 1] [i_1] [i_1] [i_6]))), ((min((arr_10 [i_6]), (arr_0 [i_6] [2]))))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
