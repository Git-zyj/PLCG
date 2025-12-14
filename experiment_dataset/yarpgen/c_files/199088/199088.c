/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    var_14 = ((!((((!-80) ? (-657670350 != 2147483647) : var_12)))));
    var_15 = (!-43);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 -= 32767;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = (((min(-1052188157, 32758)) > (min((((arr_2 [i_0] [i_1] [i_3]) ? (arr_4 [i_0] [i_1] [i_3]) : (arr_4 [i_1] [i_2] [i_3]))), ((254 ? -32767 : 20))))));
                        var_17 = var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
