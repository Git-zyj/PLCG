/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2 + 2] = var_10;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = (arr_5 [i_0] [i_2 + 1] [i_4 + 1]);
                                var_12 = (((var_7 >= (((-32767 - 1) + 6429501474981214113)))));
                                arr_15 [i_0 + 3] [6] [i_2 + 2] [i_3] [i_4] = (var_7 == 1);
                                var_13 = (max(var_13, 9080688188252470082));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_1] [i_2] = (839107181 > -14);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_1] [i_0] [i_5] [i_6] = 140;
                                var_14 -= (~(min(9, 3)));
                                arr_25 [i_0] [8] [i_0] [i_0] [i_0 + 3] = 3616948350;
                                var_15 = (min(var_15, 198));
                                var_16 = (max(var_16, (arr_18 [i_2] [i_5] [i_2] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (~var_7);
    var_18 = (((!200) ? (((-2283033119655496924 != 76) ? (min(var_1, var_10)) : (~var_8))) : ((min(((620227442313955430 ? 82 : (-127 - 1))), 119)))));
    var_19 = ((var_11 >= ((min((253 == var_11), -var_10)))));
    #pragma endscop
}
