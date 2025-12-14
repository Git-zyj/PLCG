/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, 63820));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = (max(((+(((arr_10 [11]) / (arr_0 [4] [i_1]))))), var_13));
                            arr_12 [i_1] [i_2] [i_1] = (arr_10 [i_2]);
                            arr_13 [i_3] = var_2;
                        }
                    }
                }
                var_15 ^= (arr_7 [i_0] [i_0] [i_0] [i_1]);
                arr_14 [5] [i_0] [i_1] = (max(((-(max(var_9, (arr_5 [i_1] [i_1] [i_0]))))), var_5));
                arr_15 [i_1] [1] = (max((arr_7 [i_1] [i_0] [i_0] [i_0]), (((arr_2 [i_1]) ? 1716 : 36028522141057024))));
                arr_16 [4] [i_1] [i_0] = ((-0 >= (((36028522141057024 / -32) ? (20459 >= 4009961004) : 134217696))));
            }
        }
    }
    var_16 = (min(((((max(4841425751899704017, var_7))) ? (min(var_2, var_8)) : var_7)), 1));
    var_17 *= (max((((var_7 ? ((var_6 >> (var_6 - 922338646))) : (!0)))), ((-(max(var_2, 65535))))));
    #pragma endscop
}
