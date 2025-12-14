/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = max(((var_0 ? -4294967295 : 6144)), 4463);
                            arr_9 [i_0 + 4] [i_1] [i_2] [i_3] = (min((((!(arr_5 [i_1]))), ((707573903 ? 59400 : 4463)))));
                            var_11 = ((218 ? 7 : 4458));
                            var_12 = var_3;
                            var_13 = var_1;
                        }
                    }
                }
                var_14 = max((((((var_1 ? (arr_0 [i_0]) : 1983956180))) ? (2077186872 - var_3) : ((230 ? 28070 : 0)))), 26);
                var_15 = 40;
            }
        }
    }
    var_16 = (min(var_16, (((var_3 >= (((1042648476 & 4096) ? var_5 : 2147483647)))))));
    var_17 = (min(var_17, 87));
    var_18 = ((max((~4463), ((var_4 ? var_5 : -1137559872)))));
    #pragma endscop
}
