/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 -= (((max(1026545944, (var_1 || 1026545944)))) && (((var_6 ? (16986408123544437574 != var_2) : 1026545956))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 *= (((((-127 ? (arr_2 [i_0 - 1]) : 1))) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])));
                var_22 = arr_4 [i_0 - 1] [i_0 - 1];
            }
        }
    }
    var_23 -= ((-((-((min(var_9, var_16)))))));
    #pragma endscop
}
