/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!12359785840201836351);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0 + 1] [i_2] [i_2] [i_0] [i_0] = -14373;
                            var_18 -= var_13;
                        }
                    }
                }
                arr_12 [i_0 + 1] [i_1] = 255;
                var_19 = (max(var_19, ((min((min(var_13, (((arr_6 [i_0] [i_1]) >> (((arr_2 [i_0] [i_1] [i_1]) + 83)))))), (((arr_0 [i_0 + 1] [i_0 + 1]) ? ((min(var_4, var_15))) : (arr_4 [3] [i_0 + 1] [i_0 + 1] [i_1]))))))));
                var_20 = (min(var_20, ((min(576441896, (min((arr_5 [i_0] [i_1] [i_1]), (min((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), 3561155482)))))))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
