/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_3] [i_4] [2] [2] = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                                arr_14 [i_1] = (max((max(var_8, 1)), (arr_1 [i_4])));
                            }
                        }
                    }
                    var_16 = (arr_7 [i_0] [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                }
            }
        }
    }
    var_17 = (max(var_17, ((((min((((1 ? var_12 : 1))), ((63854 ? var_8 : var_10))))) ? 1681 : var_11))));
    #pragma endscop
}
