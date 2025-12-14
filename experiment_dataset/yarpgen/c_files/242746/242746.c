/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((-(((((32752 / (arr_0 [i_0] [i_1])))) ? (arr_5 [13] [i_0] [i_1]) : -24447))));
                arr_6 [11] [2] = ((((((9223372036854775807 ? var_6 : -2285095372960012460)))) ? (arr_1 [i_1]) : (!7168)));
                var_12 = (min(var_12, ((((9223372036854775798 / (var_9 & 9223372036854775807)))))));
                var_13 = (min(var_13, ((min(((((~(arr_0 [i_0] [10]))) / var_4)), (arr_4 [i_0] [i_1]))))));
            }
        }
    }
    var_14 = var_8;
    var_15 = ((9223372036854775807 ? (-9223372036854775807 - 1) : 2594894323883701781));
    var_16 ^= var_5;
    #pragma endscop
}
