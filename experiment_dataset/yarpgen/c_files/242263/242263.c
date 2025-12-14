/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((~((-((-(arr_1 [i_1] [i_1]))))))))));
                arr_5 [i_0] = var_1;
            }
        }
    }
    var_17 = var_9;
    var_18 = ((var_11 / (((var_7 ? var_4 : 5983909764522906686)))));
    var_19 = ((((min(-5941916191854994176, (var_14 - 0)))) ? (max(var_10, (var_5 ^ var_5))) : (min(var_8, (~var_1)))));
    #pragma endscop
}
