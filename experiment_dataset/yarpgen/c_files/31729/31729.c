/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_8, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [11] = ((!(((~(var_9 <= var_1))))));
                var_16 = (max(((((9223372036854775807 ? 20 : 103)))), 13358834991763499246));
                var_17 = (max(var_17, var_10));
            }
        }
    }
    var_18 -= ((((min(var_9, 1))) && (((~var_6) <= (var_10 + 20059)))));
    var_19 = (((var_0 == (var_8 + var_14))));
    #pragma endscop
}
