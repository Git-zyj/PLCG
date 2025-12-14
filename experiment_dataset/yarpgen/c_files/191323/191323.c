/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((var_2 <= ((((183 < (!473283852273728563)))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_8 [i_1] = (-68 % var_2);
                        arr_9 [i_0 + 1] [i_1] [i_2] [i_2] [i_0 + 1] = (!0);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_20 *= 77;
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 2] = ((+(min((~var_5), (max(235284223, var_2))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_7] [i_2] [i_7] [i_0] = var_13;
                                var_21 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (!var_15);
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            {
                                arr_37 [i_10] [i_11] [i_10] [i_9 - 1] [i_8] [i_10] = ((68 ? 2626480323 : 1));
                                var_23 = ((2626480323 ? 1 : (!-32766)));
                            }
                        }
                    }
                    arr_38 [7] [i_10] [i_10] [i_8] = (min(17973460221435823058, 485486639226752026));
                    var_24 &= (min(-57300, -90));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 10;i_14 += 1)
        {
            {
                var_25 = 473283852273728563;
                var_26 -= (min(((((var_10 ? 1668486980 : 89)))), ((((max(var_4, 11))) * (1 / 21603)))));
                var_27 = (var_1 ? -var_16 : var_8);
            }
        }
    }
    #pragma endscop
}
