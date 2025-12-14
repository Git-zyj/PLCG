/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (min((arr_3 [i_0]), ((var_12 ? (arr_3 [i_1]) : var_11))));
                arr_5 [i_0] [i_0] = (!(((!-2358867109188900044) && ((min((arr_0 [i_0] [i_1]), (arr_3 [i_0])))))));
            }
        }
    }
    var_15 = ((((min(var_5, ((var_14 ? var_5 : var_12))))) ? (((var_11 >= ((3512827002424668281 ? 1607802042 : -1607802025))))) : (((var_11 ? var_9 : var_10)))));
    #pragma endscop
}
