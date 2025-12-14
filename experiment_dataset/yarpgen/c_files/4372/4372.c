/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [9] [1] [1] = (max(3971221335, ((-(arr_0 [i_1])))));
                            var_10 -= -5723252450791429150;
                            var_11 = (!(arr_8 [i_2] [i_1 + 3] [i_1 - 3] [i_1 + 4]));
                            var_12 ^= 1527516915;
                        }
                    }
                }
                var_13 ^= (max(((min(var_0, var_6))), ((min(2903089578, var_2)))));
            }
        }
    }
    var_14 = ((min(-6737753649093305248, 32)));
    #pragma endscop
}
