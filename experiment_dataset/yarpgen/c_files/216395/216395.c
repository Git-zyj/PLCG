/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 16383;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, var_4));
                    arr_7 [i_0] [i_1] [i_1] = (arr_5 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (-(((arr_6 [i_0] [i_0] [i_0] [i_0]) | var_13)));
                                var_23 *= (+-32767);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
