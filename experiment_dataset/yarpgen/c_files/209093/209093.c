/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [0] = ((12350870468781957855 == (((((var_1 ? -1730245201479289663 : -1730245201479289650)) * (!1730245201479289676))))));
                var_17 = (min(var_17, 1730245201479289676));
                arr_6 [0] [0] [0] = ((!((((!var_0) ? (max((arr_3 [i_0]), 12)) : (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_18 = (((var_10 | var_1) ? ((min((!-571942280), (1730245201479289663 < 19)))) : (((!((min(var_8, 0))))))));
    #pragma endscop
}
