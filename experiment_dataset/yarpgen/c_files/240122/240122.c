/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(-6688220854942577003, 29994)) * ((((!(((0 ? var_1 : -6688220854942576997)))))))));
    var_12 = (min(1, -6688220854942576997));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (min(-1454733368, -596009538));
                            arr_10 [i_3] [i_1] [i_2] [i_0] [i_1] [i_0] = ((min(29994, 596009537)));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_0] = ((((~29994) ? ((53622 ? (arr_6 [i_1] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_1]))) : (arr_7 [i_0]))));
            }
        }
    }
    #pragma endscop
}
