/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 190;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [1] [i_0] = ((+(min((var_8 / 1), (min(1099511627775, (arr_1 [i_1])))))));
                arr_9 [i_0] [i_1 - 1] [i_1 - 1] = -66;
                arr_10 [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
