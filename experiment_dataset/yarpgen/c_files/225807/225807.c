/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 ^= -569218025;
                            arr_9 [i_0] [i_1] [1] [i_2] [i_3] = (max((((((arr_8 [i_2] [i_2] [6] [i_3]) + 2147483647)) << (var_2 - 18))), ((var_1 ? var_4 : -var_3))));
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = min((((((min(var_6, (arr_5 [i_2])))) ^ var_1))), var_9);
                            var_13 = -7;
                        }
                    }
                }
                arr_11 [i_0] = ((((var_2 - (arr_7 [6] [6] [i_0] [i_0 - 3] [i_0 - 1] [i_0 + 1]))) <= -875420626));
                var_14 = (max(var_14, (((var_6 <= (max(-var_9, (arr_8 [10] [8] [10] [i_0 + 1]))))))));
            }
        }
    }
    var_15 = (min(((((var_8 ? var_8 : var_0)))), (min(-var_3, var_2))));
    var_16 = var_0;
    var_17 = (min((((((min(29, var_2))) != (var_3 <= var_7)))), ((var_0 ? var_11 : ((min(var_0, 2047)))))));
    #pragma endscop
}
