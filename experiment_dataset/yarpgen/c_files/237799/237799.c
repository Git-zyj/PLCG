/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 ^= 255;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = 1;
                                var_13 = ((~(((arr_5 [i_1] [i_2] [i_0]) ? (arr_9 [i_0] [i_0]) : var_3))));
                            }
                        }
                    }
                }
                var_14 = (((((arr_2 [i_0] [i_0]) - (arr_11 [i_0] [i_1] [i_1] [i_1]))) == (arr_7 [i_1])));
                var_15 &= ((max(var_7, (((arr_8 [6] [6] [0] [i_1] [14] [i_1]) >> (5771 - 5749))))));
            }
        }
    }
    #pragma endscop
}
