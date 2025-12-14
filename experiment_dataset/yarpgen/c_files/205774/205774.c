/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!(((var_1 ? 19669 : (var_10 | 9170123499567438043)))));
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((((!(39228 >= 4294967277)))) <= 19669));
                arr_7 [i_0] [i_0] [i_0] &= var_3;
                var_17 = ((((((((var_4 == (arr_1 [i_0] [i_0])))) | var_10))) ? ((((((var_5 ? var_7 : 46077))) ? 0 : ((min(var_8, 94)))))) : (max((~94), var_12))));
                var_18 = 30206;
            }
        }
    }
    var_19 = 1;
    #pragma endscop
}
