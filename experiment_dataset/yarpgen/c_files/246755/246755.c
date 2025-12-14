/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(2731800529, var_16))) ? (((var_10 ? var_10 : var_15))) : var_1))) ? ((-(max(var_13, var_14)))) : ((-859081131 ? var_0 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_0] = (((((~(((arr_1 [i_0]) ? 16420846503554313836 : var_9))))) && 4360));
                var_18 = (((((var_4 ? (42191 + 14359279842092652365) : (arr_3 [i_0 - 2] [i_1 - 1])))) ? ((~((min((arr_1 [i_0]), -4367))))) : (((((7467 ? (arr_4 [i_1 + 1]) : 57163))) ? (arr_4 [i_0 - 1]) : (((var_15 < (arr_1 [i_0]))))))));
            }
        }
    }
    var_19 -= ((!(((-(var_9 / var_16))))));
    #pragma endscop
}
