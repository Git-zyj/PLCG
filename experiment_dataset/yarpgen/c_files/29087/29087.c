/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 ^= var_9;
    var_21 = (min(var_21, (!65527)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((!((max((248 * var_2), ((max(227, var_16))))))));
                arr_6 [2] [i_1] [i_1] = (65511 / 227);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_22 = ((65516 == (max(var_12, (~var_5)))));
                            arr_11 [i_3] [i_1] [13] [i_2] [i_3] = 192;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
