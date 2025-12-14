/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((!(((((var_8 ? (arr_6 [i_0] [4] [i_0]) : 1))) || (1 & 24)))));
                arr_7 [5] = (((max((arr_4 [2] [i_1] [1]), (!var_11))) != ((((min(1, 2441463330)))))));
            }
        }
    }
    var_15 = ((((max(24, 75))) > (75 - 1)));
    var_16 = var_13;
    #pragma endscop
}
