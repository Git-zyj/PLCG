/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_2] = (arr_0 [i_1]);
                    var_19 ^= ((((((arr_4 [i_0] [i_0] [i_0] [i_0]) && ((((arr_3 [i_0]) & (arr_3 [i_0]))))))) - (arr_2 [i_1] [i_1] [11])));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_20 -= var_7;
                                var_21 -= ((-(((max(var_10, (arr_9 [i_0]))) & ((((arr_12 [15] [8] [i_3] [i_4] [i_5]) / var_12)))))));
                            }
                        }
                    }
                }
                var_22 = (arr_2 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_23 = (((var_13 * (!var_1))));
    #pragma endscop
}
