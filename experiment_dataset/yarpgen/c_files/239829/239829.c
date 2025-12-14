/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((((((2869792824 ? 30714 : -54)))) ? ((max((min((arr_6 [i_0] [i_0] [i_3] [i_4]), (arr_1 [i_0]))), (arr_1 [i_0])))) : ((-(30706 ^ -54)))));
                                var_19 = (arr_3 [i_0]);
                                arr_10 [i_0] [i_3] [i_4] = (arr_9 [i_2] [3] [i_2] [i_2] [1] [1]);
                            }
                        }
                    }
                    var_20 = ((-((((7718288944742724454 ? -60 : 180)) & 6071753804950640299))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_4));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                var_22 |= ((!(((-(((arr_13 [i_5] [i_5]) >> 0)))))));
                var_23 += (max(((min((arr_15 [i_5] [5] [i_5]), -1))), ((((arr_14 [i_6] [i_5] [i_5]) ? var_13 : 84)))));
                var_24 = ((((((var_1 ? (arr_15 [i_5] [i_6] [i_6]) : 399007007166043444)))) ? (!3565515337) : (min((arr_12 [i_6 - 3]), (arr_12 [i_6 - 1])))));
                var_25 = 4294967283;
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
