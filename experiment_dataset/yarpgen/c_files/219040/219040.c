/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 ^= (min(((((1 ? 0 : var_11)) & (1 == 1))), (((!((max((arr_4 [i_0]), (arr_0 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((max((arr_5 [i_3 - 3]), (arr_5 [i_3 - 2])))))));
                                var_17 -= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(1, var_0));
    #pragma endscop
}
