/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_9;
    var_16 = (max(var_6, ((var_6 ? (((var_7 ? var_7 : var_6))) : (min((-2147483647 - 1), var_10))))));
    var_17 = (max(var_0, (((var_6 ? var_6 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 |= (min((arr_2 [i_0] [i_1]), (((160 == (arr_2 [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = var_5;
                                var_21 = ((((((var_5 && var_7) << ((((arr_1 [i_3]) && (arr_10 [i_2] [i_1] [i_2] [i_3]))))))) ? ((min(3214, 2147483647))) : (((arr_2 [i_0] [i_0]) ? var_4 : (min((-2147483647 - 1), (arr_6 [0] [0] [i_3] [i_4])))))));
                                var_22 = (((arr_4 [i_0] [i_3]) - 847317968));
                                arr_14 [i_0] [12] [i_0] [i_2] [i_4] = ((((max((arr_8 [i_2]), var_6))) ? ((max((arr_13 [0] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_2] [i_0] [i_3] [i_4])))) : ((min((arr_11 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [i_0]), (((!(arr_9 [i_1] [i_0])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_7 [5] [i_1]);
                            var_23 = (max((max(4294967288, (arr_16 [7] [i_1] [i_5] [i_6]))), 3335003479));
                            var_24 = (~(1 * var_8));
                            var_25 = (((((-15081 | var_11) + 2147483647)) << (var_2 - 1)));
                        }
                    }
                }
                arr_20 [i_0] [i_1] = ((-((((arr_1 [i_0]) != (arr_11 [i_0] [6] [i_0] [i_1] [i_0] [i_1] [i_1]))))));
                arr_21 [i_1] = var_9;
            }
        }
    }
    var_26 ^= (max(((var_9 - (((min(var_2, 54136)))))), (((var_14 ? (var_13 > var_11) : (max(3335003468, 113)))))));
    #pragma endscop
}
