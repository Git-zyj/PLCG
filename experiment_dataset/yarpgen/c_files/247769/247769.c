/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_1]);
                arr_5 [i_0] [i_1] = min(1, 1938262115);
                var_15 = ((((10351930860729298080 & (!1)))) ? ((max(var_7, 1))) : var_9);
                var_16 = (((max(255, (var_4 & 1))) & ((~(((arr_2 [i_0]) & var_9))))));
            }
        }
    }
    var_17 = var_4;
    var_18 = var_11;
    #pragma endscop
}
