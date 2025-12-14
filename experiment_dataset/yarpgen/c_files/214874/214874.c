/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_10 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((~var_0) / (arr_0 [i_1] [i_1])))));
                                var_12 += var_9;
                                var_13 -= (((-(arr_11 [i_2]))));
                            }
                        }
                    }
                    var_14 = (max(var_14, (arr_8 [i_0])));
                }
                arr_13 [i_0] = ((26 ? var_4 : (arr_5 [i_1] [i_0] [i_0])));
                var_15 ^= var_4;
            }
        }
    }
    var_16 = 12399287431295596046;
    #pragma endscop
}
