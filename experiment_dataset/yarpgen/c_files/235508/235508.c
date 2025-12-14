/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += min(var_3, var_2);
    var_12 |= ((~((~((var_7 ? var_3 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_1] [17] [i_2] [i_3 + 1] [6] = (min(((min(255, 234))), 3));
                                var_13 = ((-39 || (((~(arr_13 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_3] [i_4]))))));
                                var_14 *= ((((min(var_4, (arr_1 [i_4 - 2])))) ? var_2 : ((var_9 ? (arr_2 [i_3 - 1]) : var_5))));
                            }
                        }
                    }
                }
                var_15 = ((3 && (arr_0 [i_1])));
                arr_16 [i_0 - 1] [i_1] = -5;
                arr_17 [i_0 + 1] [i_0 - 1] [i_1] = ((((((arr_1 [i_0 - 1]) ? (arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1] [i_1] [i_1]) : var_1))) || (((53812 ? (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_1]) : var_6)))));
                var_16 = var_5;
            }
        }
    }
    var_17 = (min(var_10, ((((4 ? 3 : 127)) + var_7))));
    #pragma endscop
}
