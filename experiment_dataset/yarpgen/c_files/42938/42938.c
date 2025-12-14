/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (max(var_19, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = 1047075118;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (2147483630 - 1);
                            var_21 = (((((55907 || 5022385886817967192) && var_5)) ? (((((5022385886817967195 ? 1427297418 : 19))) ? (900432053 || 5022385886817967192) : -67)) : ((var_14 ? (arr_4 [i_3 - 1]) : (arr_4 [i_0 + 2])))));
                            arr_11 [i_0] [i_0] [3] = (((arr_4 [0]) ? ((var_11 - (var_8 + 1))) : ((~(13424358186891584411 <= 1)))));
                            var_22 = (33554431 < 19);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
