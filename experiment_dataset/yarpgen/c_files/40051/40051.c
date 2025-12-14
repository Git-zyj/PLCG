/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 -= ((((~(~var_15)))) ? 1897 : var_4);
                arr_5 [i_0] [8] = ((!((max(1897, 601097102861189836)))));
            }
        }
    }
    var_18 = ((var_9 ? (min(23, (var_1 ^ 1149302953))) : ((((!(((63638 ? var_1 : var_11)))))))));
    var_19 = var_13;
    var_20 = var_2;
    #pragma endscop
}
