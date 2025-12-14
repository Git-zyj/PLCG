/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = ((var_0 <= (((arr_8 [i_0] [i_0] [i_1] [i_2] [i_3]) ? 2002014331920642569 : 5405903134173306229))));
                            var_17 *= ((71 ? (((((383623247376886885 ? var_8 : 199))) * (2002014331920642572 / 66))) : 0));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = var_16;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 += (arr_5 [i_1] [i_4] [i_5] [i_6]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5] [i_6] = (!-1012961633);
                                var_19 = -32;
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((+(max((max((arr_18 [i_0] [i_1] [i_4] [i_5]), 214)), ((min(var_15, 57)))))));
                                arr_22 [i_1] [i_1] = (arr_8 [i_0] [i_1] [i_4] [i_5] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(-472275034, 1));
    var_21 = ((!((((((68 ? var_16 : var_6))) ? 49653 : ((var_10 ? var_14 : 13861952566413217489)))))));
    #pragma endscop
}
