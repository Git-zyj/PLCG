/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] = (min((max((~181), (4715919279925763013 * var_4))), (((998838550665528656 ? 0 : 75)))));
                            arr_12 [i_0] = (~(((240 > (max(var_8, var_0))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (((arr_7 [8] [21] [8]) || ((max((arr_9 [i_0] [i_1 - 1]), 79)))));
                arr_14 [i_1] &= (arr_9 [i_0] [i_1 + 1]);
            }
        }
    }
    var_11 = (min((((!(9219328791656437968 && -4715919279925763014)))), var_0));
    var_12 = var_5;
    #pragma endscop
}
