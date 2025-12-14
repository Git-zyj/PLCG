/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 15357170181297437222;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_0 [i_0 - 3])));
                var_16 = ((((((arr_2 [i_1] [i_0 - 2] [i_0 - 2]) ? var_10 : var_9))) + (arr_2 [i_0 - 3] [i_0 - 3] [i_1])));
                var_17 = 0;
                arr_5 [i_0 + 1] [i_0] [i_0] = (((15769641590186527303 ? (((arr_3 [i_1]) ? (arr_2 [0] [0] [i_0]) : var_6)) : (31 | 1))));
            }
        }
    }
    var_18 &= ((-(1 || -224)));
    #pragma endscop
}
