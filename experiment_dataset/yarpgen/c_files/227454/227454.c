/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 = ((~(~var_5)));
        arr_3 [i_0] = (var_7 ^ var_9);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((~(~var_7)));
        var_11 = (((((var_3 * var_1) < (((var_6 - (arr_5 [i_1] [i_1])))))) && var_9));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_12 = ((62448 ? 3081 : 3088));
                arr_15 [i_2] = ((-(7 / 20220)));
                arr_16 [i_2] [i_3] = (max((((!var_7) ? ((max(var_7, var_1))) : -var_1)), (arr_11 [i_2] [i_2])));
            }
        }
    }
    var_13 = (((((((var_1 ? var_5 : var_8)) & (~var_5)))) ? var_9 : ((var_5 ? var_6 : ((max(65528, 62448)))))));
    #pragma endscop
}
