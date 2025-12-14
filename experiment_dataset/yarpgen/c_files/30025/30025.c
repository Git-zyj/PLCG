/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = 1;
        var_14 = (((((((max(var_9, 21585))) ? ((max(1, 32178))) : var_0))) | 4294967295));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = (min((arr_4 [i_2 + 1] [i_2 + 1] [i_1 + 1]), ((0 << (4992 - 4990)))));
                        var_16 = 65515;
                        var_17 |= (!-27337);
                    }
                }
            }
        }
        var_18 = 65533;
    }
    var_19 = min((((((min(var_7, 0))) && var_5))), (((max(-8, 136)))));
    #pragma endscop
}
