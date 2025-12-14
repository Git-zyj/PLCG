/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((1888754078673371301 && (arr_2 [i_1] [i_0])));
                var_17 = (max(((~(arr_2 [i_0] [i_1]))), ((max(108, (arr_2 [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = var_6;
                    var_19 = -var_4;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_12 [i_5] [i_1] [i_3] [i_1] [i_4] = (min((arr_4 [i_3] [i_3] [i_3] [i_0]), (min((arr_5 [i_4 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1]), 126))));
                                var_20 = (((arr_6 [i_3]) ? 109 : (~var_4)));
                            }
                        }
                    }
                    var_21 = (min(var_21, (max(((var_2 ? 198 : (arr_4 [i_0] [i_3] [i_3] [i_0]))), 104))));
                }
                var_22 ^= 108;
            }
        }
    }
    #pragma endscop
}
