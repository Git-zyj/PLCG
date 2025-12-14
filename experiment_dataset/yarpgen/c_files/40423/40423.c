/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((38959 ? 4294967290 : 14));
    var_21 = (((var_15 | ((var_3 >> (241 - 236))))));
    var_22 = 4096;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((((arr_1 [i_1 + 1] [i_1]) ? (!511) : 23888)) % ((((min((arr_4 [i_1]), -2097152))) ? (arr_3 [i_1 - 1] [1] [1]) : ((var_15 - (arr_3 [12] [i_0] [i_0])))))));
                var_23 = (((((var_0 ? ((16320 ? -2097135 : 57343)) : (min(-2097155, (arr_1 [i_1 + 1] [14]))))) + 2147483647)) << (((min((arr_4 [i_1]), (min(65536, 181)))) - 181)));
            }
        }
    }
    #pragma endscop
}
