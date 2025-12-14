/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1984 ? var_15 : ((~(436685339888410668 % var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 += ((-(((((min((arr_1 [i_0]), (-127 - 1)))) > (min(436685339888410696, var_2)))))));
                var_18 = var_13;
                arr_5 [i_1] = max((arr_0 [i_0]), (max((arr_4 [i_1]), (arr_4 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 += (((((5890444713100008999 | (arr_3 [i_2] [i_1] [i_0])))) ? (arr_4 [i_3]) : (~26838)));
                            var_20 = ((+(max(12556299360609542616, (((arr_7 [i_3] [i_2] [i_1] [i_0]) & 5890444713100008999))))));
                            var_21 = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
