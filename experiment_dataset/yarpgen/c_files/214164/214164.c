/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_2] = ((-(((arr_0 [i_1 + 3]) / (arr_0 [i_1 - 1])))));
                    arr_8 [i_2] [i_1] [i_2] = 65519;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 += ((((((arr_5 [i_0] [i_1 + 3]) < var_0))) * (arr_4 [i_4] [i_1] [i_2])));
                                var_17 = (((((arr_12 [i_4] [i_3 - 1] [i_2] [i_0] [i_0]) ? var_6 : (~var_0))) * ((max((10 & 22), (arr_11 [i_3 + 1] [i_3] [i_3 + 2] [i_1 + 3] [i_1] [i_1 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 3;
    #pragma endscop
}
