/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -464722426));
    var_17 = (min(var_17, (((var_14 ? var_12 : (--464722426))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 |= (min((arr_5 [i_0] [1]), (max((~2855278481286389329), ((max(var_10, var_2)))))));
                var_19 += ((((-(arr_5 [i_0] [3])))) ? ((((min(-12291, 1137441905))))) : (min(12038975603999938783, 1)));
                var_20 = (((max((min(67, var_11)), var_1))) ? (((arr_2 [i_1 - 1]) << (((arr_2 [i_1 - 1]) - 7366836592681487052)))) : (arr_6 [i_1 + 1]));
                var_21 = ((min((arr_2 [i_1]), -var_12)));
            }
        }
    }
    var_22 += max(var_10, ((~((6900532512434367929 ? var_2 : var_13)))));
    #pragma endscop
}
