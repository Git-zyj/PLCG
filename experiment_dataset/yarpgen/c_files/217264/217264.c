/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = -1073741760;
                var_18 = (arr_3 [i_0] [i_0]);
                var_19 = ((+(max((arr_4 [i_0 + 2]), (!349071430)))));
            }
        }
    }
    var_20 = (min(-26123, 715656747));
    #pragma endscop
}
