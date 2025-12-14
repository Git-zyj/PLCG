/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_10 [i_0] [i_1] [i_3] [i_4]) ? ((-((7 ? (arr_5 [1] [i_1]) : 2753745726568579069)))) : (((-(((arr_3 [i_0] [i_0] [i_0]) ? var_10 : -11)))))));
                                var_17 = -8;
                                var_18 = (max((--18446744073709551615), (min(((1 ? 2753745726568579069 : (arr_1 [i_4]))), (max((arr_2 [i_2]), var_9))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = (((var_15 >> (((max((arr_0 [i_1]), var_4)) - 16228748742718013938)))));
            }
        }
    }
    var_19 -= var_6;
    #pragma endscop
}
