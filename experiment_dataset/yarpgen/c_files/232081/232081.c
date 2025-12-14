/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [0]);
                var_18 ^= (!0);
            }
        }
    }
    var_19 = (max(var_19, var_9));
    var_20 = (max(var_20, (((~(min((~var_0), var_14)))))));
    #pragma endscop
}
