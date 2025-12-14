/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_4 & var_8) ? (6826939736663337214 > 123) : ((-46 ? -76 : var_3)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_8 [10] [i_1 - 1] [i_1] [i_2] [i_2] [i_3 + 1] &= (min(((1287286023541700064 / ((5 ? 9223372036854775807 : -12)))), ((min(var_8, var_0)))));
                            arr_9 [i_0] [i_1 + 1] [4] [i_3] = (min(((min(var_3, var_9))), (arr_4 [i_2] [i_3 + 1] [8] [11])));
                            var_16 = var_9;

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_0 + 1] [i_1 - 1] [i_0] [i_3 - 1] [8] = (-(((arr_0 [i_0 - 1] [i_1 + 1]) ? var_9 : var_6)));
                                var_17 = ((min(var_3, 6336115321663345917)));
                                var_18 = (((arr_4 [i_0 + 1] [i_1 - 1] [i_3 - 1] [i_4 - 1]) % (((var_3 | (arr_11 [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_4 - 2]))))));
                            }
                            var_19 = ((var_13 + ((-12 ? ((min(var_12, var_12))) : -var_13))));
                        }
                    }
                }
                arr_15 [2] [8] [i_1] &= var_4;
            }
        }
    }
    #pragma endscop
}
