/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_2, (!-9309))));
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((~(min(((0 ? var_7 : var_9)), 25677))));
                                var_15 = (~1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((min((min(((-(arr_14 [i_0]))), 10)), 208)))));
                                arr_20 [i_0] [i_5] [i_2] [i_0] [i_6] [i_2] [i_5] = (arr_11 [i_6 - 1] [i_1] [i_2] [i_5 + 1]);
                            }
                        }
                    }
                    arr_21 [i_2] [i_1] [i_0] = ((~((0 ? (max(var_7, var_4)) : 149))));
                    var_17 *= 7826841803388889307;
                }
            }
        }
    }
    #pragma endscop
}
