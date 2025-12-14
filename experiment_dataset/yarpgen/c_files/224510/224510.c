/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((((arr_2 [i_0] [i_0] [i_1]) ? 38897 : 32766)), (arr_2 [i_0] [i_1] [i_1])));
                var_17 = 1094042545;
            }
        }
    }
    var_18 = (max(var_4, (max(var_9, (!var_8)))));
    var_19 = (((((~32766) & var_5)) | 1094042567));
    var_20 = ((var_16 ? (((var_14 && (!var_7)))) : (!var_13)));
    #pragma endscop
}
