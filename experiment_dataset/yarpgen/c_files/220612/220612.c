/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((~((789916139 ? var_2 : 255))));
        var_19 = ((~((~(201570687 > 3505051165)))));
        arr_3 [i_0] [i_0] = (((((max(-201570698, 127)))) % (min(109, (((arr_0 [i_0]) ? 800130259419959639 : (arr_0 [i_0])))))));
        var_20 = (~var_13);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_21 = (max((arr_8 [i_1] [i_1] [i_3]), (~7)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_22 = var_3;
                                arr_19 [i_1] [i_2] [i_3] [i_3] = ((151 ? 74 : 74));
                            }
                        }
                    }
                    var_23 = 26;
                }
            }
        }
    }
    #pragma endscop
}
