/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = 595881813442612562;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = 8731;
                                var_13 = ((((!((min(4, 4294967289))))) ? 4294967291 : (((305559248 ? -1 : 27372)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, (((((var_9 ? 27372 : ((3647 ? var_7 : var_8)))) | var_0)))));
    var_15 = var_2;
    #pragma endscop
}
