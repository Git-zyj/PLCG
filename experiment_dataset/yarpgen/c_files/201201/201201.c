/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-(arr_2 [i_0] [i_1])));
                var_16 = arr_4 [i_0] [i_0];
                arr_6 [i_0] [13] [i_1 - 2] = (max(((max((var_6 != var_7), var_5))), ((127 ? var_9 : (arr_1 [i_1 + 1])))));
            }
        }
    }
    var_17 |= ((var_10 > ((var_6 ? 9223372036854775807 : (((var_1 ? var_15 : 2215295599)))))));
    #pragma endscop
}
