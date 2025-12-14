/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((var_9 + 2147483647) << (var_14 - 26993)));
    var_17 = (min(var_17, (((max(var_1, ((var_0 ? var_0 : var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_18 -= (max((arr_1 [i_1 - 1] [i_1 + 1]), ((max((arr_1 [i_1 + 2] [i_1 + 2]), (arr_1 [i_1 - 1] [i_1 - 1]))))));
                arr_6 [i_0] [i_1] [i_1 - 1] = ((((max(var_12, (((arr_2 [i_0]) & var_15))))) ? var_4 : (arr_5 [i_1])));
            }
        }
    }
    var_19 -= ((var_12 & var_1) ? -var_8 : (((13 ? var_12 : var_7))));
    #pragma endscop
}
