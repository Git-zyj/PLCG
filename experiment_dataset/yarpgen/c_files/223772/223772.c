/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((90 ? (max((arr_0 [i_1]), -77)) : 1813708859));
                var_21 = ((+(max((arr_3 [i_1] [6] [7]), var_11))));
            }
        }
    }
    var_22 = 4;
    var_23 = var_14;
    #pragma endscop
}
