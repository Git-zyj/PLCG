/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (131 / 3091903011);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 *= (min(119, (min((arr_2 [i_0]), 0))));
                var_17 = -var_5;
                var_18 = var_10;
                var_19 = (min(var_19, (~7196097742807869443)));
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
