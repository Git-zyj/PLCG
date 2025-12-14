/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!(((min(var_2, var_15))))));
    var_20 = var_2;
    var_21 = (min(var_21, (((((max((-2147483647 - 1), (-9223372036854775807 - 1))) / -1412160276)) >> (var_14 + 6858135080010368669)))));
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((-(arr_1 [i_0 - 3])))))));
                arr_4 [i_0] = ((((+(max((arr_3 [i_0]), 24820)))) << ((((var_9 ^ (arr_3 [i_1 + 2]))) - 739083424))));
            }
        }
    }
    #pragma endscop
}
