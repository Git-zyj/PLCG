/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((((max(var_4, 27099))) - (~14)))) ? var_0 : ((var_11 ? (!63392) : -39))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [13] [i_2] = ((var_9 ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (((arr_6 [i_0] [i_2 - 1] [i_2 - 2] [i_2]) ? (arr_8 [i_2 - 1] [i_2 - 3] [i_2] [i_2]) : -40))));
                    var_17 += ((~((((arr_7 [i_2] [i_2 - 2] [i_2 - 2]) == (arr_6 [9] [i_2 - 2] [i_2 - 2] [i_2 + 1]))))));
                    var_18 = (!99);
                    var_19 = (max(var_19, var_6));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    var_20 = 154;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = (((~1) & -var_1));
                                var_22 = ((arr_3 [i_7]) ? ((39 & (arr_1 [i_3] [i_4]))) : (arr_6 [i_4] [i_7 + 1] [i_7] [9]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = -2222386723165788614;
    var_24 = var_11;
    #pragma endscop
}
