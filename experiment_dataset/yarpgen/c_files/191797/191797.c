/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, (~var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((!(((((max(-90, (arr_1 [i_0])))) ? var_0 : (arr_5 [i_1] [i_1]))))));
                    var_11 = (((min(((163 ? var_9 : 1698606587323245596)), (arr_1 [i_0])))) ? (~80) : (max((arr_8 [i_0] [i_0] [i_2]), (((arr_4 [21] [21] [21]) ? (arr_1 [i_0]) : -41)))));
                }
            }
        }
    }
    var_12 = var_0;
    var_13 = var_4;
    #pragma endscop
}
