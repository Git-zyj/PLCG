/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -126;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (30 ^ -4026094504839644204);
                arr_4 [i_0] [i_0] = (((((((max(var_13, (arr_1 [i_0])))) ? (arr_2 [i_0] [i_0] [i_0]) : 10))) ? (((((((((arr_0 [i_0]) && 1)))) < (var_17 - var_5))))) : ((((((arr_0 [i_0]) / -10))) % (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
