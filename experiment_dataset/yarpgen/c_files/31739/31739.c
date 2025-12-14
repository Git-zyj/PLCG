/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(((96 ? 86 : var_0)), ((((var_11 ? 4592195809919119217 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((((17135984280104948326 ? (((9223372036854775807 << (160 - 160)))) : 16089259512214539257))) || (-6985 <= 62)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3 + 1] [19] [i_4] [19] [i_0] [19] = -242;
                                var_17 = (max(var_17, (((4592195809919119212 < (max(((((arr_11 [i_1] [i_1] [i_3] [2]) ? -3889425125593230933 : 58647))), (min(var_13, var_8)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
