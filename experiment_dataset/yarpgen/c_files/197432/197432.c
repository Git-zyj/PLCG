/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (((((arr_9 [i_0 - 2] [i_2 - 1] [i_0 - 2]) ? (arr_2 [i_0 - 2] [i_2 + 2] [i_2 + 2]) : 1))) ? (((((arr_9 [i_0 + 1] [i_2 + 1] [i_2 - 1]) != (arr_9 [i_0 + 1] [i_2 + 1] [i_2]))))) : (((arr_9 [i_0 - 2] [i_2 + 2] [i_2]) ? (arr_5 [i_0 - 2]) : (arr_9 [i_0 + 1] [i_2 + 2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_1] [i_2] [i_3] [i_4] = ((-var_7 ? (((((arr_0 [i_3]) + 2147483647)) >> ((((64 ? var_14 : (arr_9 [i_4] [1] [i_0]))) - 15767695989398913271)))) : 54595));
                                var_20 ^= (arr_8 [i_1] [i_1] [i_1]);
                                var_21 = ((((max(var_7, (arr_5 [i_3])))) ? (arr_2 [i_0] [i_1] [i_2]) : (((((1918215880790758185 ? -15045 : 1))) ? (min((arr_10 [i_0] [i_1] [i_2] [i_1]), (arr_10 [i_1] [i_2] [i_2] [i_4]))) : var_15))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= var_14;
    #pragma endscop
}
