/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((+(min((arr_7 [6] [i_1] [i_2]), (((arr_0 [i_0] [13]) ? 120 : (arr_5 [i_0 + 1] [i_1] [i_0] [i_0 + 1])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_4] &= (((arr_4 [i_4 + 1]) ? (arr_13 [i_0] [i_3] [8] [i_3] [1]) : (arr_4 [i_4 + 2])));
                            arr_16 [i_1] [i_1 - 1] [i_1] [i_3] [i_0] [i_2] = (((arr_1 [i_4 + 2] [i_0 - 1]) && -32767));
                            arr_17 [i_0] [i_1] = -var_4;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_5] [4] [i_2] [i_0] [i_1] [i_1] [i_0] = (arr_0 [i_0] [i_0]);
                            var_15 &= (33954 ? ((114 ? (arr_5 [i_0] [i_0] [i_0] [7]) : -1)) : (((((arr_8 [i_3] [12] [i_3] [i_2] [6] [i_1]) || 3)))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] = ((((((var_13 ? (arr_9 [11] [i_2] [i_2] [i_0] [i_3]) : (arr_4 [12]))) + 2147483647)) >> (var_13 != var_3)));
                    }
                }
            }
        }
    }
    var_16 += var_0;
    var_17 = (max(var_11, (-var_12 && 3696178153612706381)));
    var_18 = ((var_5 ? var_5 : var_5));
    #pragma endscop
}
