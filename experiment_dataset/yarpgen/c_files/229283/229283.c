/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 || var_7);
    var_11 = ((~((-var_6 + (~var_9)))));
    var_12 = max(var_1, var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_6;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_2]);
                                arr_14 [i_3] [i_2] [i_2] [i_3] = -var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
