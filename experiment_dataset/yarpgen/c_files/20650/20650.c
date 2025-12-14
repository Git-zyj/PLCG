/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max((((arr_0 [i_0]) + (arr_0 [i_0]))), ((((~44190) || (((2775480987447068173 - (arr_0 [i_0])))))))));
                arr_6 [i_0] = (max(24669, ((max(var_2, 127)))));
                var_12 = (max(var_12, (((+(((arr_5 [i_0] [i_1 - 2]) & ((12 << (((((-9223372036854775807 - 1) - -9223372036854775798)) + 39)))))))))));
            }
        }
    }
    var_13 = 89;
    #pragma endscop
}
