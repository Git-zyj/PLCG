/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = ((((((min(-21, (arr_0 [i_0] [i_0])))) ? (max((arr_2 [i_0]), -3801291385491444825)) : var_5)) ^ (((arr_2 [i_0]) / (arr_2 [i_0])))));
        arr_4 [i_0] = -84;
        arr_5 [i_0] |= (((arr_2 [i_0]) ? (min(1265547183, 140462610448384)) : var_5));
        var_18 = (((((~(arr_3 [i_0])))) / (arr_2 [i_0])));
        var_19 = (min((((~var_9) ? (-1842780364 ^ var_10) : ((min(31, var_12))))), 0));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (min(var_20, 25233));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_21 = (~-9168218409520186034);
                            arr_19 [i_3] [i_4] [i_3 - 1] [i_3] [i_3] = ((5214975716952538213 ? (arr_10 [i_5] [i_3 - 1]) : (arr_10 [i_4] [i_3 + 1])));
                            var_22 ^= (((arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? 14772172263701672254 : ((5214975716952538213 ? 3674571810007879362 : var_0))));
                            var_23 = (!var_0);
                            var_24 = (~8887348726655877984);
                        }
                        var_25 = (((var_16 > (arr_13 [i_3] [i_3]))));
                    }
                }
            }
            arr_20 [0] [0] = (((arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2]) ? var_15 : -52752871365906217));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_28 [i_1] [12] [i_8] [i_8] = arr_13 [i_8] [i_7];
                        var_26 ^= (arr_23 [i_8] [i_1] [i_1]);
                        var_27 = -8887348726655877985;
                    }
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = var_16;
    #pragma endscop
}
