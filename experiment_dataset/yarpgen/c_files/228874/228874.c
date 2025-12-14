/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (arr_4 [i_1]);
                var_14 = ((!-4936) - (arr_1 [12]));
            }
        }
    }
    var_15 = (min(var_15, ((((((var_10 ^ var_5) ? var_2 : (~30585))) - var_4)))));
    #pragma endscop
}
