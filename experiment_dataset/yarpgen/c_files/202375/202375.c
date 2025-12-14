/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = ((1 | var_2) ? var_2 : (~var_11));
    var_21 = (min(((max(var_8, var_11))), var_10));
    var_22 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (max((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_1]))), (!var_8)));
                var_24 = (arr_4 [i_0 - 2] [i_0 - 1]);
                var_25 = ((var_0 >> (!var_9)));
            }
        }
    }
    #pragma endscop
}
