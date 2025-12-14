/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 62;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 -= (max(((-(arr_5 [i_0] [i_0] [i_0 - 1]))), (arr_5 [i_0] [i_0 + 1] [i_0 + 1])));
                                var_18 = (max(var_18, (((!((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0]) ^ (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= (((var_13 != (var_3 && 0))) && 62);
    var_20 = (max(var_20, var_13));
    #pragma endscop
}
