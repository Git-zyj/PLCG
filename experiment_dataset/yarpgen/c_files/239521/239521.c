/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((243 + 1) ? var_5 : (min((~92), ((min(var_3, 222)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [7] [i_1] = (~16);
                var_17 = max(243, ((((var_7 || var_13) || ((max(243, 52)))))));
            }
        }
    }
    #pragma endscop
}
