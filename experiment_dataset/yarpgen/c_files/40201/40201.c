/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (arr_10 [i_1] [i_3] [i_1]);
                                arr_14 [0] [i_0] [i_2] [i_0] [i_0] = ((((max(var_2, var_10))) ? (arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_1 - 1]) : (((arr_9 [i_3] [i_3] [19] [i_1 + 1] [i_3] [i_1 + 1]) * (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_1 + 1])))));
                            }
                        }
                    }
                    arr_15 [i_0] = (-(min(((1 ? 4098343260 : 99)), -var_6)));
                }
            }
        }
    }
    var_16 |= -var_10;
    #pragma endscop
}
