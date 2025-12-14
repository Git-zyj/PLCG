/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = min((!546225747), 12);
                var_19 = ((-((-((var_8 ? 16652468619677487585 : 1))))));
            }
        }
    }
    var_20 = -12;
    #pragma endscop
}
