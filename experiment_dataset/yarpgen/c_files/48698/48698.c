/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((~(arr_8 [5] [i_1] [i_1])));
                    var_16 &= ((var_8 <= (arr_4 [i_2])));
                    var_17 += var_4;
                    arr_9 [i_0] [i_1] [i_2] = ((((arr_1 [i_0 - 1]) / (arr_1 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (~(min(((~(arr_11 [i_4 + 3] [i_3] [i_2] [i_1] [i_0] [i_0 + 1]))), var_1)));
                                var_19 = var_9;
                                var_20 |= ((((max((max((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]), -1)), (arr_12 [i_0 + 3] [i_3] [i_4] [i_4] [i_4 - 4])))) | var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            {
                var_21 = (max(var_21, (arr_14 [i_5] [3])));
                var_22 = 1;
            }
        }
    }
    var_23 = ((((max(((var_11 ? var_9 : var_0)), var_5))) ? (~var_0) : ((((907116499 ? 16383 : 128))))));
    var_24 = var_13;
    #pragma endscop
}
