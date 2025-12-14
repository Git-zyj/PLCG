/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] |= ((((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 62938))))) != (((arr_0 [9]) ? (((arr_2 [i_0] [3]) ? (arr_2 [i_0] [i_1]) : var_14)) : var_9))));
                var_15 = -506981332126354510;
            }
        }
    }
    var_16 = (max(var_16, var_4));
    var_17 = (max(var_17, (((((((1073741823 != 1073741823) ? (var_5 != 436140307) : var_8))) ? ((var_10 ? var_12 : (var_11 == var_3))) : var_6)))));
    #pragma endscop
}
