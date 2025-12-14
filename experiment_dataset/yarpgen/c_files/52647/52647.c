/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((var_3 < (((arr_5 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_0] [i_1]))))))));
                var_17 = (max(var_17, ((((~(var_4 - 4294967295)))))));
                arr_7 [i_0] = ((-(max(1, 3786630513))));
            }
        }
    }
    var_18 = (min(var_18, (((15 ? -60 : 3786630515)))));
    #pragma endscop
}
