/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((max(0, -656938691)));
                                var_21 = var_4;
                                var_22 = (min(var_22, ((max((max(((max(127, 0))), (arr_2 [i_0]))), ((min(var_12, (arr_5 [i_1 - 4] [4] [i_4 + 2])))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] [i_0] = ((((max(var_6, var_1))) ? (arr_8 [2] [i_1 - 4] [i_2] [i_1 - 4]) : (max(928364274, 0))));
                }
            }
        }
    }
    var_23 = (max(1, 132));
    #pragma endscop
}
