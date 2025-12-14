/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = arr_4 [i_0] [i_1] [i_1];
                var_19 = var_18;
                var_20 = var_16;
            }
        }
    }
    var_21 = ((((max(var_14, var_0)) ^ var_9)));
    var_22 = var_13;
    var_23 = var_1;
    #pragma endscop
}
