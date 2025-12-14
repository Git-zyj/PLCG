/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 *= ((+-1) ? var_3 : (((arr_2 [i_3] [i_1] [2]) - 1)));
                            var_19 *= ((0 ? ((1 ? (((~(arr_0 [10] [10])))) : (((arr_6 [i_0] [i_2]) - var_10)))) : ((~(max(1, var_7))))));
                        }
                    }
                }
                var_20 *= (((((199 ? -1391409503892159470 : 0))) ? (arr_0 [i_1] [i_1]) : 56));
            }
        }
    }
    var_21 *= (max(var_14, (min((var_2 | 231), var_3))));
    #pragma endscop
}
