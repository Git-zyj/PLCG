/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_4;
    var_21 = 3930183516;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 *= 79;
                arr_5 [i_0] [i_1] = (arr_2 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_13 [i_3] = (arr_9 [i_3] [i_3]);

            for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
            {
                arr_16 [2] [2] [i_3] = 364783788;
                arr_17 [i_3] [i_3] = 364783788;
            }
            for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
            {
                var_23 = (max(var_23, 6972843251674492398));
                var_24 = (min(var_24, -4392653171352320311));
                arr_22 [i_3] [i_3 + 1] [i_2] = 12474797622907406082;
            }
            for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
            {
                var_25 = (min(var_25, 3930183516));
                arr_25 [i_2] [i_3] [i_3] [i_2] = (arr_18 [i_2] [9] [i_6] [i_3]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, (arr_23 [i_8] [i_3] [i_3] [10])));
                            var_27 = (min(var_27, -6112029315493779094));
                            var_28 = (max(var_28, var_7));
                        }
                    }
                }
            }
        }
        var_29 = 916441918;
    }
    var_30 = var_17;
    #pragma endscop
}
