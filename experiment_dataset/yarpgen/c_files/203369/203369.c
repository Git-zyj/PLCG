/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_9, (var_4 < var_3)))) ? var_6 : (((min(var_7, (!0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 ^= (min(246, ((min((var_9 != var_6), var_0)))));
                            var_13 = (max(var_13, (((-105 ? (max((arr_2 [i_1 + 1]), var_3)) : ((((arr_5 [i_0] [i_2 - 3]) > var_1))))))));
                        }
                    }
                }
                arr_12 [i_1] = var_3;

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_17 [i_0] [i_1 - 1] [i_1] = var_6;
                    var_14 += 8381370508110843211;
                }
            }
        }
    }
    #pragma endscop
}
