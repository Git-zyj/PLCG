/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = var_7;
                    var_11 = -30458;
                }
            }
        }
    }
    var_12 = -30458;
    var_13 = (max((var_0 == -949247727957111642), (var_7 & 127)));
    #pragma endscop
}
