/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (arr_0 [16]);
                var_16 = (min(var_16, ((var_2 ? ((~((max(96, (arr_2 [6])))))) : ((0 ? (arr_0 [i_1]) : (((var_3 == (arr_4 [i_0] [i_0] [17]))))))))));
            }
        }
    }
    var_17 = (61440 / 2026);
    var_18 += var_11;
    var_19 = ((var_12 ? (var_4 | var_9) : (min(61456, 96))));
    var_20 = (~((~(~var_10))));
    #pragma endscop
}
