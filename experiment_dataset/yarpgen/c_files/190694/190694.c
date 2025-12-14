/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((-var_0 >> (((!((((var_6 + 2147483647) >> (var_11 + 2011114614)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((((((~(arr_1 [8]))))) ? (var_4 != var_14) : ((~(-127 - 1)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = var_13;
                                arr_18 [8] [8] [i_0] [i_0] [8] [8] = (((0 ? var_14 : 1)));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, 0));
            }
        }
    }
    var_17 = (((((-(~125)))) ? (((!((min(var_12, var_0)))))) : var_12));
    var_18 = 0;
    #pragma endscop
}
