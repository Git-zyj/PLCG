/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_3, (max((~var_6), (max(var_7, 1))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_18 = var_14;
                        arr_9 [i_0] = (((~(var_12 | var_13))));
                    }
                }
            }
        }
        var_19 = (min(var_19, (((-32760 ? 1 : -var_9)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_20 = ((var_12 ? (arr_2 [i_4]) : var_12));
        arr_12 [i_4] [i_4] = ((!(var_8 <= var_9)));
        var_21 *= (((arr_6 [i_4] [i_4]) ? ((var_4 ? 1 : var_9)) : var_2));
    }
    #pragma endscop
}
