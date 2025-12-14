/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((-((627837781910041404 ? 627837781910041404 : var_1))))));
                arr_4 [i_0] = (!-16);
            }
        }
    }
    #pragma endscop
}
