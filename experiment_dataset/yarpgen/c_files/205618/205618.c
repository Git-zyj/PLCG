/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (max(var_20, 54360));
    var_21 = (max(var_21, (((~var_10) & ((var_3 ? -var_11 : (var_6 - 524288)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_23 *= (arr_0 [i_0 + 1]);
                            arr_11 [i_0] [i_2] = (((8 ^ var_13) || (arr_4 [i_3])));
                            arr_12 [i_0] [4] [i_2] [i_3] = ((min(29199420, 878218537)));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_1] = (~(min((arr_6 [i_0 - 1] [i_1] [i_2] [9]), 247)));
                        }
                    }
                }
                arr_14 [i_1] = ((~(((min(65532, (arr_6 [i_0 - 1] [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
