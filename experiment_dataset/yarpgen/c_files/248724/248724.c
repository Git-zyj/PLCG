/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [15] [1] [i_2] [i_1] = 31;
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (53936 ? 65535 : ((53949 ? -516875368 : 11587)));
                    arr_9 [0] [i_2] = var_3;
                    var_18 = (((((((!(arr_1 [13] [i_1]))) ? (var_5 || 3) : (max(65535, -838426057))))) ? -var_16 : var_4));
                }
            }
        }
        var_19 = (((arr_6 [i_0] [i_0] [i_0]) ? ((-60 ? var_16 : var_15)) : var_12));
    }
    #pragma endscop
}
