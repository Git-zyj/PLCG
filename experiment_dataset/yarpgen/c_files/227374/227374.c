/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(max(-46, 0))));
    var_19 = ((var_10 ? ((((max(var_8, var_13))))) : -64));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 ^= (((((-34 ? (((arr_0 [i_1]) ? var_10 : 50)) : ((248 ? (arr_0 [i_1]) : 1))))) && ((max((arr_0 [i_0]), (1133079150 * 0))))));
                var_21 = ((-(((!(arr_5 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
