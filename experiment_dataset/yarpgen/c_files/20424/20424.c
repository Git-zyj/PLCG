/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = (max((min(240, 1)), 34));
                    var_14 = (min(var_14, (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = var_6;
                                var_16 = ((+((1 ? (arr_10 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 1]) : (arr_13 [i_2] [i_3 - 3] [i_3])))));
                            }
                        }
                    }
                    var_17 = 65535;
                }
            }
        }
    }
    var_18 |= ((var_0 < ((((~var_12) || 2147483647)))));
    #pragma endscop
}
