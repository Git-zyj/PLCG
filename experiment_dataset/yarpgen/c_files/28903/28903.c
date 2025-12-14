/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_0] [5] [i_0]);
                var_15 = (((!-0) ? var_11 : (arr_2 [i_0] [i_0])));
                var_16 = ((!((((27761 * var_14) ? (arr_4 [i_1] [i_0]) : (arr_0 [i_1]))))));
                var_17 = ((37777 / ((((46 & -646965535) || (((20835 ? 0 : 37777))))))));
            }
        }
    }
    var_18 = (8798 ? ((max(((var_3 ? 27769 : var_8)), ((var_2 ? var_1 : var_13))))) : (min(((min(6571, 2143289344))), (max(var_12, var_3)))));
    #pragma endscop
}
