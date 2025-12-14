/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_1 ? (var_5 | 1388347736) : (((max(var_10, var_10)))))), (var_14 / var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = var_16;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = (min(var_19, (((2880519957 ^ (arr_5 [i_0] [2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 = 167;
                                var_21 = (((var_5 <= 1) ? (~178) : (arr_10 [i_0] [i_1] [i_1] [i_4])));
                            }
                        }
                    }
                }
                var_22 += (min((((arr_12 [i_0] [i_0] [i_0] [8] [i_1]) << ((((arr_10 [i_1] [i_0] [i_1] [i_0]) != 61))))), (((((var_0 * (arr_4 [i_1] [12]))) * (arr_2 [i_0]))))));
            }
        }
    }
    var_23 = var_2;
    var_24 = (min(var_24, var_10));
    var_25 = min(var_1, (min(207, var_15)));
    #pragma endscop
}
