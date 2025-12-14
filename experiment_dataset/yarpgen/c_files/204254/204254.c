/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [0] [i_0] = 4198099140664697047;
                var_17 += 6666625583720305606;
            }
        }
    }
    var_18 += 1;
    var_19 += var_15;
    var_20 = var_0;
    var_21 = var_14;
    #pragma endscop
}
