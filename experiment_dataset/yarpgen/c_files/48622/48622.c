/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (min((((((var_13 ? var_14 : var_5))) ? (var_4 || var_6) : (!var_1))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((105 % ((1 ? (arr_1 [i_0]) : (arr_3 [i_0])))))) && ((min(var_3, 48)))));
                var_20 += -115;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] = (min((max((arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1]), var_5)), ((((arr_10 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 2] [i_2] [i_2 + 2]) ? var_0 : (arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2] [i_2 + 2]))))));
                                var_21 = 1;
                                var_22 &= ((((1007715571 ? ((196 * (arr_0 [i_4]))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) | (((!((min(var_15, (arr_9 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0])))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_4] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((((-63 ? var_7 : 22175))) ? 0 : 1)));
    #pragma endscop
}
