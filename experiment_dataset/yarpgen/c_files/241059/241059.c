/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) >> 7))) || 32739));
        var_13 = var_12;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((((((((var_0 ? var_3 : -7544))) ? var_11 : var_0))) ? (((0 || 17) + (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1 - 1]))))) : (((((((var_4 ? 124 : (arr_4 [i_1])))) < -7742536809206393522)))))))));
        arr_6 [i_1] = (min((arr_4 [i_1]), ((0 ? ((var_5 ? 7541 : 2504333855)) : 0))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((!(arr_4 [15]))))));
        var_16 = var_5;
        var_17 = ((+(((var_0 && ((((arr_5 [i_2] [i_2]) ? -10035 : 127))))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 = (((((8285 ? 1 : 1))) ? 16 : (!var_2)));
                    var_19 ^= var_9;
                }
            }
        }
    }
    #pragma endscop
}
