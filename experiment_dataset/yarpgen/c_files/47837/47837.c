/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 &= (min(1, -2863582232030377032));
                    var_18 = ((max(-2863582232030377049, 1)));
                }
            }
        }
    }
    var_19 = (min((max((min(63136, 0)), 4294967272)), var_8));
    #pragma endscop
}
