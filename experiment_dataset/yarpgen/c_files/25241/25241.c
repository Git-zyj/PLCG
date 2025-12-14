/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((((((max(48167, var_6))) ? ((min((arr_0 [i_0] [i_2]), var_13))) : (max((arr_4 [i_1]), var_8))))) ? ((max((((arr_2 [i_0]) - (arr_1 [i_2]))), (arr_0 [i_0] [i_0])))) : (min((arr_6 [i_2] [i_1]), (arr_6 [1] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = arr_7 [i_0] [i_1];
                                var_18 = (((((arr_7 [i_0] [i_0]) | (0 || var_1)))) ? var_12 : ((((var_5 < (min((arr_11 [i_0]), (arr_6 [9] [9]))))))));
                                arr_14 [i_4] [i_4] = (((((var_2 ^ (arr_8 [i_0] [i_0] [i_2] [i_0]))))) ? (((((!(arr_0 [i_0] [i_1])))))) : (max(((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]), (arr_11 [i_0])))), var_5)));
                                var_19 = ((~(((((arr_9 [i_0] [i_0] [i_2]) <= (arr_11 [1]))) ? -var_11 : (arr_9 [i_4 - 1] [i_4 + 4] [i_4 - 1])))));
                                var_20 = var_5;
                            }
                        }
                    }
                    var_21 = (((-((0 ? 16747980524068922746 : var_2)))) | (((~(min((arr_5 [i_0] [i_0] [3]), (arr_4 [i_0])))))));
                }
            }
        }
    }
    var_22 = var_5;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                var_23 = (min(1, (min((var_4 && 1), (((arr_7 [i_6] [i_5]) ? 0 : var_10))))));
                var_24 = var_2;
            }
        }
    }
    var_25 = ((var_6 ? var_6 : var_11));
    #pragma endscop
}
