/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((58675 ? var_1 : 32767))) ? ((var_8 ? -32767 : var_1)) : (var_0 - var_4)))) ? ((((var_10 < var_2) << ((((var_10 ? var_2 : var_9)) - 17176))))) : ((var_9 ? ((var_0 ? var_3 : var_2)) : (~var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= ((+((((((arr_3 [i_0]) ? var_11 : 1)) != (var_0 >= 13804312377503447619))))));
                var_15 = ((((max(var_10, var_10))) ? (((-11 - var_2) ? (var_11 + -1107067842) : -42)) : (((+(((arr_4 [i_1] [i_1]) ? var_9 : var_5)))))));
                var_16 = (max((max(((1 ? 1 : (arr_2 [i_1]))), ((max((arr_0 [i_1]), var_3))))), ((max(((var_0 ? var_1 : var_0)), 14)))));
            }
        }
    }
    var_17 = ((((max((((var_6 ? -6454 : var_12))), ((var_0 ? var_7 : var_3))))) ? (max((var_6 & 2665151549496772824), (((var_8 ? var_9 : var_9))))) : (((((var_11 ? var_2 : var_5))) ? ((var_6 ? var_7 : var_1)) : (~var_6)))));
    #pragma endscop
}
