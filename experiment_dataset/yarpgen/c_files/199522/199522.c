/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_11 ? var_8 : 11510792433469366948));
    var_13 = (~-var_1);
    var_14 = -4061271225477975215;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= (max(var_9, (min((32201 | var_0), var_4))));
                var_16 |= ((2197866328 + (((arr_5 [i_0] [i_1]) ? (2097100968 < 2197866309) : (min((arr_3 [i_0] [i_0]), 6213597469771579013))))));
                arr_7 [i_0] [16] |= (arr_1 [i_0]);
                arr_8 [i_1] = ((var_3 >= ((max(var_3, var_3)))));
                var_17 = (max(var_17, ((((-268435456 - var_11) / ((-(arr_5 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
