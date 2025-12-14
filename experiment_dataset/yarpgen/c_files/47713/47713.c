/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (min(var_6, ((((((var_11 ? var_4 : 1261938933))) ? (min(var_7, var_2)) : (var_0 != var_6))))));
    var_13 = (min((!var_10), (((((var_11 ? var_10 : 3584))) - (var_8 * var_1)))));
    var_14 = (max(((~((var_1 ? var_11 : var_3)))), (((((var_10 ? var_2 : var_9)) == ((min(var_9, 7253))))))));
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_1] [i_2] [i_2 - 2] = ((arr_7 [21] [i_1] [i_2 - 1]) & ((5150811863241825357 ? var_6 : -32765)));
                                arr_15 [i_4] [i_2] = (arr_9 [i_0] [i_0] [i_1]);
                                var_16 = (((arr_13 [i_3] [i_1] [i_1] [i_3] [i_0]) - (arr_11 [22] [i_2] [i_2] [i_3] [i_2] [21])));
                            }
                        }
                    }
                    var_17 = ((((((arr_1 [i_0]) ? (arr_7 [i_0] [i_1] [i_2 - 2]) : 552312102))) ? (!var_1) : (var_8 % var_9)));
                }
            }
        }
        arr_16 [i_0] = (((arr_5 [i_0]) <= 46302));
    }
    #pragma endscop
}
