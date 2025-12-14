/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(9, 55673)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = 246;
                var_15 = ((arr_3 [i_1] [i_1 - 2] [i_1]) ? (((arr_3 [i_1] [i_1 - 3] [i_1]) ? (arr_3 [i_1] [i_1 - 3] [i_1]) : var_12)) : (arr_3 [i_1] [i_1 + 1] [i_1]));
                var_16 ^= max((((~(5 ^ var_0)))), (min((var_10 + var_6), (max(var_9, 9)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = ((((14 ? 26 : 4))) ^ ((((max(var_4, 24))) ? var_6 : (arr_6 [i_0] [i_1 - 3] [i_0] [i_2]))));
                                var_18 = (min((arr_4 [i_1] [i_1]), ((var_11 / (arr_1 [i_0])))));
                            }
                        }
                    }
                }
                var_19 = ((~((((((arr_12 [i_0] [i_1 + 2] [i_0] [i_0]) ? var_8 : (arr_6 [i_1] [i_1 - 3] [i_1 + 3] [2])))) ? ((min(27872, var_10))) : ((min(var_9, (arr_9 [i_1 + 2] [10] [10] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
