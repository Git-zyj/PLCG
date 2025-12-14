/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((2572 << (-1787003266 + 1787003267)))) ? ((var_4 ? (arr_6 [i_1 + 4] [i_1 + 4] [i_1 + 4]) : (arr_2 [i_0] [i_0 + 1] [i_0]))) : (arr_4 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_19 = (((((!var_8) ? var_12 : ((15 ? var_14 : var_5)))) << ((((((~((var_16 ^ (arr_4 [2] [0] [2]))))) + 29766)) - 26))));
                                arr_13 [2] [2] [i_0] [2] [2] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
