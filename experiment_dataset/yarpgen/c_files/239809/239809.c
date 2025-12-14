/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (min(var_13, ((max((((!(!var_11)))), (((0 ? 6 : var_10))))))));
    var_14 = (((-var_2 - var_7) ? 249 : -127));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [7] |= max(((~(arr_4 [i_0]))), 6581626887152498414);
                var_15 |= (((((((-127 ? (arr_5 [i_0]) : var_9))) ? (arr_6 [i_0]) : ((max((arr_2 [4]), var_8))))) != ((-1425935717 << (((arr_1 [i_0]) - 45256))))));
            }
        }
    }
    #pragma endscop
}
