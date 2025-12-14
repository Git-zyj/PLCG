/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((max((5116625775074048681 > var_2), (min(-5116625775074048682, var_19)))), (var_7 > var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((((((((var_5 ? (arr_0 [i_1] [i_0]) : (arr_4 [i_0] [i_0])))) ? (-15155 / 5116625775074048681) : (min((arr_2 [i_2]), var_9)))) | ((max(((48 ? var_14 : (-127 - 1))), ((var_3 ? var_13 : (arr_1 [0] [i_2])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = (((((-(4294967270 | 690501230)))) ? ((((max(-115, 1))) >> ((var_10 / (arr_12 [i_0] [i_1] [10] [i_1] [i_4]))))) : var_18));
                                var_22 -= 326;
                            }
                        }
                    }
                    var_23 = (max((arr_2 [i_2]), 254));
                }
            }
        }
        arr_14 [i_0] = ((((((arr_0 [i_0] [i_0]) ^ (arr_6 [i_0] [i_0] [i_0])))) & (max((min(var_2, (arr_5 [i_0] [i_0] [i_0]))), 7970829316397214500))));
    }
    var_24 = ((-(min((max(-31, 5116625775074048681)), ((min(var_4, var_6)))))));
    #pragma endscop
}
