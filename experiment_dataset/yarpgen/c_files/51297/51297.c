/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = 25859;
                var_12 = 0;
                arr_5 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (((1 ? (arr_3 [i_0] [i_1]) : -1391359798))) : ((4016035289771592652 >> (((arr_2 [7] [7]) - 2026484653164668646))))))) ? (~6) : 545741905));
            }
        }
    }
    var_13 = (~-2);
    var_14 = (max(65536, 0));
    #pragma endscop
}
