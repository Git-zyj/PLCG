/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] = (((2443192343 && 1) ? ((var_3 ? ((1 ? (arr_2 [i_0] [i_1]) : 15173586707532384185)) : (((min(var_11, 1)))))) : 3271952759));
                arr_5 [6] [i_1] [i_1] = (arr_3 [1] [i_1]);
            }
        }
    }
    var_14 |= ((1023014547 ? 1 : -1));
    #pragma endscop
}
