/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_0] [i_1]);
                var_17 = (min(var_17, ((min(((min((arr_0 [i_1]), (arr_1 [i_0])))), 1)))));
            }
        }
    }
    var_18 = (min(var_15, (~var_11)));
    var_19 = (((((((var_14 >> (var_8 + 1418863580)))) ? var_11 : var_13)) >> (((max(var_9, 31830)) - 10936529526709100543))));
    #pragma endscop
}
