/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (((~(min(var_7, var_10)))));
                    var_15 -= 4795061796982432099;
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = ((((min(var_8, ((1267626689303822602 ? 19 : var_4))))) ? (-var_4 - var_10) : ((max(((min(23032, 0))), var_12)))));
    #pragma endscop
}
