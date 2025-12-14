/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = ((2147483647 ? (((!(((-2147483645 ? -10 : 1731876157)))))) : (((((var_4 ? var_1 : -527638023))) ? ((1 ? 9 : 2147483647)) : ((-2147483646 ? 9 : 1))))));
                    var_10 = 1644351926;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = (((-(~var_9))));
                                arr_15 [i_2] = ((((((var_7 ? 1910924753 : -2147483646)) ? -1 : -3034099709328650534))));
                                var_11 *= (min(116, -2233845955511554830));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((((((!72) ? -var_0 : var_8))) ? ((((!(((9164 ? 2147483640 : 2494771665))))))) : (((29 - 0) ? var_8 : 127))));
    var_13 = (min(var_13, 2147483647));
    #pragma endscop
}
