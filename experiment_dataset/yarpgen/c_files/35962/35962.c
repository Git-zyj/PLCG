/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [3] [8] [3] [10] = (var_13 - var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = var_0;
                                var_19 |= 822527452;
                                var_20 = 1;
                            }
                        }
                    }
                    var_21 = (arr_12 [i_0] [i_1] [i_2] [i_0] [i_1]);
                    arr_16 [i_1] [i_1] [i_1] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
