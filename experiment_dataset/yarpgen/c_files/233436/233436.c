/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(((2236806498 ? var_0 : 8)), var_9))) ? var_4 : (((~36979) ? (~-5) : (max(var_2, var_4))))));
    var_13 = var_0;
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((min((arr_3 [i_0] [i_1 - 1] [i_1 + 2]), var_5)) % ((((max(var_10, 1915749237))) ? 19347 : (var_5 + 2786977743))))))));
                arr_6 [i_0] [i_0] [i_0] = var_1;
            }
        }
    }
    #pragma endscop
}
