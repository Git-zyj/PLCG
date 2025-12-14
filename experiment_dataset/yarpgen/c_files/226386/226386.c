/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((min((((var_5 ? var_1 : var_12))), var_14))) ? (min(var_3, (max(var_14, var_2)))) : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 |= (((min(4294967295, 127)) ^ (max(var_1, (arr_3 [i_2] [i_2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3] [i_3] [i_1] [4] [4] |= (((((((max((arr_11 [i_1] [1] [i_2]), var_8)))) == ((var_13 ? -693265778 : (arr_0 [i_0] [i_0])))))) > ((((arr_2 [i_2 + 1] [i_3] [i_4]) <= ((1 ? 1 : 19362))))));
                                arr_17 [i_0] [8] [i_2] [i_1] [8] [i_1] [i_0] = (((((min(46173, (arr_9 [i_4] [i_4] [i_3] [i_2 - 1]))))) - (min((arr_0 [i_0] [i_2 + 1]), 68709196))));
                                arr_18 [i_0] [i_3] [i_2] [i_0] [i_0] = var_14;
                                arr_19 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] = (max((((arr_10 [i_0] [i_0] [i_2 + 1] [i_3]) ? (arr_10 [2] [2] [i_2 - 1] [i_1]) : var_11)), (((arr_10 [14] [i_1] [i_2 + 1] [9]) + 60691))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 46179;
    var_19 *= var_0;
    #pragma endscop
}
