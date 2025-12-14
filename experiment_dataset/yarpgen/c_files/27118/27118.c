/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((-(arr_3 [i_0] [4] [i_2]))))));
                            var_18 -= 2812;
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_19 = ((+(((-var_3 + 2147483647) >> (arr_12 [i_5 - 1] [i_4 - 3])))));
                        arr_17 [i_0] [i_4] [i_0] [i_0] = -121;
                        var_20 = (((!1762115304) ? (((arr_5 [i_0] [i_4 + 2] [i_4 + 2]) ? var_12 : (arr_11 [i_0] [i_4 + 2] [i_4 - 2] [i_5] [i_4]))) : (((arr_5 [9] [i_4 + 4] [i_4]) ? (arr_11 [i_0] [i_4 - 4] [i_4 + 2] [i_0] [i_4]) : var_8))));
                        arr_18 [i_4] [i_5] = (((!var_15) ? (arr_3 [i_0] [i_1 + 2] [i_5 - 1]) : 95));
                        var_21 = (min(var_21, var_15));
                    }
                    arr_19 [i_1] [i_1] [5] [i_4] = -95;
                    var_22 = (min(var_22, ((((((!62747) ? (!10771393158773689327) : (arr_14 [i_4] [i_1] [i_0]))) << (24457 - 24449))))));
                }
            }
        }
    }
    var_23 = (max((!var_13), var_5));
    var_24 &= var_0;
    #pragma endscop
}
