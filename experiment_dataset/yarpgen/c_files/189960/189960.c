/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(min(((max(32829, -100))), (~var_0)))));
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 ^= (min((arr_1 [i_1]), (min(7342942536865071278, 106))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = var_7;
                            var_17 -= (((((min(var_7, var_9))) ? (((-107 ? var_6 : var_6))) : (((arr_6 [i_1] [i_1] [i_1]) / (arr_3 [i_1] [i_1]))))));
                            var_18 = (max(var_18, ((((17325 / (arr_10 [i_1] [i_1] [i_2] [i_0 + 1])))))));
                            var_19 &= (min(((((min((arr_8 [i_0] [i_2]), var_3))) ? var_1 : 128)), (arr_10 [i_0] [11] [i_3 - 1] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
