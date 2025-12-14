/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max(((-(15243751103130238009 | 3202992970579313613))), var_10)))));
    var_16 = 63702;
    var_17 ^= var_4;
    var_18 = 3202992970579313590;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = 3202992970579313600;
                arr_4 [i_0] [i_0] [i_1] = (min((!3202992970579313613), (((arr_3 [i_0] [1] [i_1 + 1]) || 1188619803))));
                var_20 = (896 == 1188619791);
                var_21 |= var_2;
                arr_5 [i_0] = (max(((var_9 ? (arr_0 [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1 + 1] [i_1]))), ((min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
