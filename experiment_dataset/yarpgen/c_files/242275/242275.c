/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = 26726;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_19 = (min(-26704, ((-193065967869173613 ? ((0 ? var_17 : -5023523007879640041)) : (((min(var_17, (arr_9 [i_0] [i_0] [i_0 + 2])))))))));
                                var_20 -= ((((min(7289782605768886053, (arr_12 [i_3] [i_2] [i_1] [i_3])))) ? 174 : (min(19, (min((arr_0 [i_0]), (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_21 = ((var_8 ? ((var_12 ? var_2 : var_5)) : (arr_12 [i_3] [i_3] [i_2] [i_0])));
                                var_22 = ((var_1 ? (4710429990111202419 / var_10) : ((0 ? 193065967869173593 : var_12))));
                                arr_16 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_5] = ((~(~var_14)));
                                var_23 = (arr_7 [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_5] = (((~506201976) >> (((arr_4 [i_0 + 2] [i_0] [i_0]) - 4231656962))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_3] [i_0] [i_1] [10] = ((~(arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0])));
                                var_24 = (arr_3 [i_0 + 2] [i_6]);
                            }
                            var_25 = 34480;
                        }
                    }
                }
                var_26 = 32767;
            }
        }
    }
    var_27 = var_16;
    var_28 = (((((4294967295 ? var_0 : (~var_11)))) ? -16491 : var_1));
    var_29 = ((!((((max(-26350, -6613248472790479454)) * (((0 << (5942 - 5938)))))))));
    var_30 = var_4;
    #pragma endscop
}
