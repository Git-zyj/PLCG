/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_6;
                var_17 = var_3;
                var_18 = 55688;
                var_19 = (max(1, var_1));
            }
        }
    }

    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_20 = ((var_2 >= ((((((-32767 - 1) & 1))) ? 1 : var_0))));
        arr_7 [i_2] = var_4;
    }
    var_21 = 11161122;
    var_22 = var_9;
    var_23 |= (((1 ? ((var_5 ? 1 : 1)) : 32736)));
    #pragma endscop
}
