/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_9 + 16777212);
    var_15 = var_12;
    var_16 = (min(var_0, (-952381772 <= 29)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 *= (952381777 - -8508755325677978333);
                                var_18 = (max(var_18, ((max(((1879048192 + (214 <= 952381792))), 952381771)))));
                                arr_16 [i_3] = (1792 - 8508755325677978333);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
