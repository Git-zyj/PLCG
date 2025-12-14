/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? ((var_8 ? var_8 : (var_16 != var_11))) : (((((max(var_9, var_17)) == (var_15 - var_13)))))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= ((1 ? ((min(113, (arr_0 [i_1])))) : ((((((arr_4 [20]) ? (arr_2 [12] [i_1]) : var_4))) ? (arr_4 [10]) : ((-109 ? (arr_4 [1]) : -114))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (arr_8 [i_2]);
                            arr_10 [i_0] = ((((((arr_8 [i_0]) ? (((arr_5 [i_0] [i_1] [i_2] [i_3]) ? (arr_0 [i_2]) : var_1)) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? (((((arr_0 [i_3]) >= (((!(arr_7 [i_1])))))))) : (arr_1 [i_0 + 2])));
                            var_22 = ((~(min((arr_2 [i_0] [i_0 - 1]), ((1 ? 16383 : -1880138932))))));
                        }
                    }
                }
                arr_11 [i_0] = (arr_1 [i_0 + 2]);
            }
        }
    }
    #pragma endscop
}
