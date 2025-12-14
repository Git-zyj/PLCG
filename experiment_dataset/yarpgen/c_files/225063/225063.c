/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (min((min((arr_5 [i_1]), (-22076 | -22076))), ((min((!-64), var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((min((((((min(161, var_3))) < (95 <= -2160116854400063462)))), 63228)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = var_3;
                        }
                    }
                }
                var_14 = (max(var_14, ((max((((arr_9 [i_1 - 2] [i_1] [4]) && var_9)), (!22075))))));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
