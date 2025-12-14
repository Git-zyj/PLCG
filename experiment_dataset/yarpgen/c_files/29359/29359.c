/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((var_1 ? (arr_5 [i_0 - 1] [i_0] [18]) : (arr_2 [19] [i_1])))))));
                var_22 |= ((((((((arr_5 [i_0 - 1] [i_1 + 3] [6]) + 9223372036854775807)) >> (17833098566856363691 - 17833098566856363641)))) ? 1 : ((~(arr_0 [14] [i_1 - 1])))));
                var_23 -= ((-((-(max(var_4, var_0))))));
                var_24 = (max(var_24, (((((((arr_0 [18] [18]) ? (arr_0 [24] [24]) : 1))) ? (!var_16) : ((((arr_0 [0] [0]) || var_8))))))));
                var_25 = (min(((((((!(arr_4 [i_0])))) < var_14))), ((((var_14 ? 1 : var_19)) >> 1))));
            }
        }
    }
    var_26 = ((((((var_19 + 2147483647) >> (((~34746) + 34777))))) ? var_5 : (((var_8 % var_16) ? ((var_18 ? var_10 : var_14)) : (~var_1)))));
    #pragma endscop
}
