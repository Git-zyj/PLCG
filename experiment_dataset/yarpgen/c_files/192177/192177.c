/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_1 ? (~29433) : (min(var_10, ((max(var_14, var_14)))))));
    var_17 = ((~((((max(-17367, 1250))) ? ((min(162, -91))) : 65529))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = 14397960459668119398;
                                arr_13 [i_0] [i_2] [0] [i_2] [i_2] [i_3] [i_4] = (((~var_9) << (14397960459668119400 - 547577678)));
                                var_18 = min(var_11, (min((arr_6 [i_2 + 1] [i_2 + 1]), 39670955)));
                                arr_14 [i_2] [i_2] [i_3] [i_2] [i_1] [i_2] = (((((~((var_13 ? var_8 : 0))))) ? ((var_15 ? (arr_2 [i_2 - 1]) : var_12)) : (((arr_10 [i_2 - 1] [1] [i_2 - 1] [i_2] [i_4] [i_4]) ? var_7 : ((var_5 ? var_12 : var_3))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_0] = ((((min((min(var_14, 1522526476)), var_7))) ? 6019793988725977471 : (((max((max(-29433, 64914)), 65516))))));
                    arr_16 [i_0] [i_2] [i_2] = (arr_10 [i_2 - 1] [i_2] [i_2] [i_2] [i_0] [i_0]);
                    var_19 = var_4;
                    var_20 = ((var_10 >> (((var_7 < (arr_1 [i_2 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
