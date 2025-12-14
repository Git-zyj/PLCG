/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = max((arr_5 [i_2] [i_2]), var_4);
                                arr_13 [i_3] [i_3] [i_3] [i_3] = var_5;
                                var_14 = var_6;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_15 += ((((-6 > ((-6 ? (arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]) : 6588)))) ? ((-(((arr_16 [i_0] [i_1] [i_5] [i_0]) ? -31306 : var_9)))) : (((-(((arr_11 [i_0] [4] [i_0] [4] [i_5] [i_5] [i_5]) ? -6 : var_7)))))));
                            var_16 = (((-(arr_8 [i_0] [i_0] [i_0] [1]))) - -0);
                            var_17 = -1588159047545099231;
                            var_18 = var_10;
                        }
                    }
                }
                var_19 = var_7;
            }
        }
    }
    #pragma endscop
}
