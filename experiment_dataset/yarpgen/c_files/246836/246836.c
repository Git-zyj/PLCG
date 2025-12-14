/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 *= ((max((arr_4 [i_0]), (arr_4 [i_0]))));
                var_22 = ((!(((-(((var_4 + 2147483647) >> (var_18 - 867431527))))))));
                arr_5 [i_0] [i_0] [i_1] = ((((min((var_10 || var_13), (min(var_6, var_11))))) ? ((~(max(var_4, (arr_4 [i_0]))))) : (!var_5)));
            }
        }
    }
    #pragma endscop
}
