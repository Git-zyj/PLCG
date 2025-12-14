/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_15 ? var_1 : var_4)))) ? (min(((-281768407 ? -281768407 : 281768414)), (9695360341516093260 < var_11))) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [12] [i_1] = var_1;
                var_17 = (+((var_0 ? (arr_5 [i_0 - 3] [i_0 - 3]) : (arr_5 [i_0 + 2] [i_1]))));
            }
        }
    }
    var_18 = (!8751383732193458351);
    var_19 = ((-((var_4 - (~var_14)))));
    #pragma endscop
}
