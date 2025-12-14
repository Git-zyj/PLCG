/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(var_7, ((-59 ? var_4 : var_8)))), ((max(var_9, (((var_5 + 9223372036854775807) << (var_11 - 2652181202))))))));
    var_18 = (min(var_18, ((((((((min(var_0, 1))) | (max(17592186044415, 18446726481523507185))))) ? 12429389209530523927 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_15;
                arr_6 [i_0] [i_1] = ((+(max((((arr_3 [i_0]) ? 1 : var_16)), (arr_0 [i_0] [i_0])))));
                var_20 = (min((max((min((arr_4 [17] [i_0] [i_1]), (arr_3 [i_0]))), ((((arr_5 [i_0] [i_1]) <= (arr_5 [i_0] [i_1])))))), (max((min(3145728, 1)), (arr_5 [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
