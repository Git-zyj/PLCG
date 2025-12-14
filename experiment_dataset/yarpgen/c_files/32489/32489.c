/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((!(!var_2)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = min((arr_2 [i_0]), (((((var_5 ? 0 : var_0))) ? var_5 : ((max(32256, (arr_3 [i_0])))))));
        arr_4 [i_0] = (((arr_0 [i_0] [1]) * ((((~1438144503650503965) ? -102 : (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_5;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_3] = 127;
                    arr_14 [i_3] [i_2] [13] [i_1] &= ((-16915 ? 2 : -2));
                }
            }
        }
        arr_15 [i_1] = ((var_4 * (!-978)));
        var_12 = (((+(((arr_3 [i_1]) + (arr_6 [i_1]))))));
        var_13 = var_2;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((-(arr_0 [i_4] [i_4])));
        arr_20 [i_4] [i_4] |= (arr_9 [i_4] [i_4]);
        var_14 += (!var_7);
        arr_21 [i_4] [i_4] = ((var_4 ? ((((arr_6 [i_4]) && var_7))) : var_7));
    }
    var_15 = ((((!(31518 && 17))) ? (((var_5 * (var_5 * 3)))) : (-9223372036854775807 - 1)));
    #pragma endscop
}
