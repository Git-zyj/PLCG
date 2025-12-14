/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = ((-1 / ((min(var_12, 460476365)))));
        var_19 = (arr_1 [i_0]);
        var_20 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (6402872828933452861 ? ((155 ? 687573969 : 7376606)) : 3284334429);
            var_21 = var_3;
        }
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_22 = (arr_16 [i_2 - 1] [i_2] [i_2 - 1] [i_3] [i_3] [i_5]);
                        var_23 = 2;
                        var_24 = (((((((1230461886 ? 187 : var_0))) && (((29774 ? var_0 : (arr_10 [i_3])))))) && var_14));
                    }
                }
            }
        }
        arr_17 [i_2] [i_2] = 250;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_22 [1] = 364500777310997745;
        var_25 = (!6402872828933452861);
    }
    var_26 = 653691984;
    var_27 = (max((min((~var_16), ((min(1622041909, var_0))))), (((-1045571090 ? var_12 : var_11)))));
    #pragma endscop
}
