/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = (((-((var_12 ? 51 : 71)))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] [i_4] = (arr_9 [i_0] [i_0] [i_2] [2] [i_4]);
                            }
                        }
                    }
                }
                var_13 ^= ((((((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? ((min(5973, (arr_11 [i_1] [4] [i_1] [i_0] [i_0 - 1])))) : (((arr_13 [i_0]) ^ (arr_5 [i_0] [i_1] [7])))))) ? (((arr_7 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) % (-11380 || 47971))) : (min(((15230 ? var_8 : 31744)), (arr_4 [5] [i_1] [i_0 - 1])))));
            }
        }
    }
    var_14 *= -57;
    var_15 = var_1;
    var_16 = var_3;
    var_17 = var_10;
    #pragma endscop
}
