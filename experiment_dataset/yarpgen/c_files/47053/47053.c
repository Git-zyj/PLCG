/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((arr_4 [i_1 - 1]) << (arr_4 [i_1 + 1]))));
                var_14 += (arr_1 [i_0]);
            }
        }
    }
    var_15 = (max(var_15, (((((-327064552 ? ((var_5 ? var_4 : var_10)) : var_13)) >> (var_13 - 4190767908))))));
    #pragma endscop
}
