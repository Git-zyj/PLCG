/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((((6371493635117712134 ? var_9 : 178))) ? (max(var_11, var_5)) : 48748)), (((((var_11 ? var_10 : var_10))) ? 21896 : (min(var_13, 878))))));
    var_15 = (((max(6034638445332618656, 3612114346))));
    var_16 = (max(var_16, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (~47003)));
                var_18 = (max(var_18, (((-((var_13 | (arr_3 [i_0] [i_0] [i_1]))))))));
                var_19 = (((((var_10 ? 7599262727120195366 : (arr_0 [i_0] [i_1])))) ? ((36454 ? 150 : 35085)) : ((var_7 ? (arr_4 [i_0] [i_0] [i_0]) : 29082))));
            }
        }
    }
    var_20 = ((var_10 ? 3612114345 : -var_3));
    #pragma endscop
}
