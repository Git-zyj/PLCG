/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((!((!(!var_2)))));
                arr_6 [i_0] [i_0] [i_0] = ((-(--0)));
            }
        }
    }
    #pragma endscop
}
