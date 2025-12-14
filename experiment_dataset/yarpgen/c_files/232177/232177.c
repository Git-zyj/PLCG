/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((max((4294967276 && var_12), (!500338037)))), var_14);
    var_19 = (((((~(~42834064)))) ? ((((max(9223372036854775808, var_6))) ? var_3 : (~var_12))) : (((~(~var_11))))));
    var_20 = 48;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((min(4294967280, (arr_3 [i_0 - 1] [i_0 - 1]))) * (((arr_3 [i_0 - 3] [1]) - (arr_3 [i_0 + 1] [i_1])))))));
                var_22 = 9223372036854775813;
                var_23 = (max(40, (arr_2 [i_1])));
                var_24 = var_17;
            }
        }
    }
    #pragma endscop
}
