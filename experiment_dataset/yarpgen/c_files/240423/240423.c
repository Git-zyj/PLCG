/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [i_1] = (1 ? 16052889632812874881 : ((((max(4294967295, 2948527322)) * (((arr_4 [i_0 + 2]) ? (arr_0 [1] [i_1]) : 4294967295))))));
                arr_6 [i_0 - 1] = 33521664;
            }
        }
    }
    var_19 = (min((min(var_13, (max(var_5, var_9)))), (((var_15 ? var_16 : var_6)))));
    var_20 = var_12;
    var_21 = ((var_1 & (((23 & 8934444055061267157) ? (4079751591 % var_0) : (~var_15)))));
    #pragma endscop
}
