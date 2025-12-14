/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? ((var_7 ? ((var_9 ? var_0 : var_14)) : var_16)) : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = max((((((min((arr_2 [i_1]), (arr_1 [i_1])))) && ((max(9552911227398599805, 63023)))))), ((((((arr_5 [i_1] [i_1]) ? 3 : (arr_0 [i_0])))) ? ((-(arr_5 [i_0] [i_1]))) : ((((!(arr_1 [i_1]))))))));
                var_19 = ((+((((max((arr_3 [1] [1]), var_2))) + ((7 ? (arr_1 [i_0]) : (arr_5 [i_0 - 1] [i_0 - 1])))))));
            }
        }
    }
    var_20 = (var_12 | var_5);
    #pragma endscop
}
