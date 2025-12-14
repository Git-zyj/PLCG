/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_2] [i_2] [i_4] [i_0] [i_4] = -var_8;
                                var_20 = (((arr_7 [i_1 + 1] [i_3] [i_4]) ? ((-((var_9 ? (arr_13 [5]) : (arr_7 [i_0] [i_1] [i_2]))))) : (arr_10 [1] [1] [i_4] [i_2] [i_4] [i_3 + 2])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_2] [19] [i_2] [i_5] [i_5] = 39682;
                        var_21 = (-127 - 1);
                    }
                }
                var_22 = ((((((arr_17 [i_1] [6] [i_0]) ? var_19 : (max((arr_10 [i_0] [i_0] [i_1] [i_0] [i_1] [4]), 10138690898224264838))))) ? 7817850043633109326 : (var_19 > 60)));
            }
        }
    }
    var_23 = (max(var_23, var_18));
    #pragma endscop
}
