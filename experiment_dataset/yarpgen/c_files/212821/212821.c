/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((~(~0)));
                arr_4 [i_0] = (max(-17137, 21222));
            }
        }
    }
    var_19 = (1 ? (((~-21222) ? (var_0 & var_0) : ((var_0 ? var_8 : var_1)))) : ((((((-16234 ? 62968037 : 1))) ? 6961134071848202515 : 0))));
    #pragma endscop
}
