/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((max(234, var_13))) ? (min(var_3, (arr_3 [i_0 - 1]))) : ((max((arr_0 [i_0 - 1]), var_7)))));
                var_15 = (((!63) < ((4166058284 >> (-50 + 64)))));
            }
        }
    }
    var_16 += ((!(((((var_3 ? var_10 : var_3)) - ((max(4166058284, var_8))))))));
    var_17 = var_10;
    #pragma endscop
}
