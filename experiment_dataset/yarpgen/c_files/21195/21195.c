/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((5070252488000969602 + 27316) ? (var_3 % var_0) : 38219));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (i_0 % 2 == zero) ? ((((((arr_3 [i_0] [i_1]) + 9223372036854775807)) << ((((~(arr_0 [i_0]))) - 79))))) : ((((((((arr_3 [i_0] [i_1]) - 9223372036854775807)) + 9223372036854775807)) << ((((~(arr_0 [i_0]))) - 79)))));
                arr_4 [i_0] [i_1] [i_1] = (((arr_1 [i_0 - 1] [i_0 + 1]) / ((-(arr_1 [i_0 - 1] [i_0 + 1])))));
            }
        }
    }
    var_17 = ((~(~27329)));
    #pragma endscop
}
