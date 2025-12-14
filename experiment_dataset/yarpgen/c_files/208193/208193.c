/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = (max(4294967289, 5134));
        var_14 = (max(var_14, ((((((((var_6 ? var_4 : var_2))) ? ((~(arr_2 [i_0]))) : var_12))) && ((((arr_1 [i_0]) ? var_3 : 160)))))));
        arr_3 [i_0] = 60394;
        arr_4 [i_0] = (max(4294967289, var_12));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (5134 | 3253348497);
        var_15 = (max((arr_7 [i_1]), ((min(var_8, var_11)))));
    }
    var_16 = (((735429338 != 4294967280) ? 4294967275 : 1));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            {
                var_18 = ((2704229911 * (max((min((arr_5 [i_2] [i_2]), var_3)), var_6))));
                arr_15 [i_2] [i_3] |= (!var_12);
            }
        }
    }
    #pragma endscop
}
