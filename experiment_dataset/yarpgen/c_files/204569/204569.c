/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (~var_4);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (((~var_15) & var_15));
                        var_17 = (min(var_17, var_6));
                        arr_13 [i_0] [18] [i_2] [i_1] [i_1 + 2] = ((!(~var_5)));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_18 -= (((((var_12 < var_1) / (~var_15))) + (-98 > -var_8)));
        var_19 = ((-(~var_9)));
        arr_16 [i_4] = ((~((~(~var_10)))));
    }
    var_20 = (~var_14);
    var_21 = ((((((var_2 % var_14) == 3893441482854077196))) & (var_3 && var_4)));
    var_22 -= ((!((((!var_10) + -65522)))));
    #pragma endscop
}
