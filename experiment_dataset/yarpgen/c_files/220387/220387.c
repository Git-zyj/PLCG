/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [7] [i_2] [i_2] = (min(var_6, (((((arr_9 [i_0] [i_0] [i_2 - 1] [i_0]) / (arr_5 [i_0]))) & 61440))));
                            var_12 = ((((arr_9 [i_1 - 1] [i_2 + 4] [i_2 - 2] [i_3 - 1]) || (arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 4] [i_3 + 1]))) ? -var_9 : (((arr_9 [i_1 + 1] [i_2 + 3] [i_2 - 1] [i_3 - 1]) ? (arr_9 [i_1 + 1] [i_2 + 4] [i_2 + 2] [i_3 + 1]) : (arr_9 [i_1 - 1] [i_2 + 3] [i_2 + 4] [i_3 + 1]))));

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 17;i_4 += 1)
                            {
                                arr_16 [15] [i_0] [i_0] [i_2] [15] [i_4] = var_1;
                                var_13 = (arr_15 [i_0] [i_2] [i_2] [i_2]);
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 17;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_2] = ((489 && (((255 ? 1 : 1)))));
                                var_14 = (~3153923631);
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1)
                            {
                                arr_23 [i_0] [8] [i_2] [0] [0] |= ((~(((((4095 ? 18446744073709551615 : 61440))) ? ((65535 ? -116 : 908297233)) : (((min(32752, 1))))))));
                                var_15 += (arr_15 [i_0] [i_2 + 3] [i_3] [i_2 + 3]);
                                arr_24 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] = ((+((((arr_14 [i_6 - 1] [i_2] [1] [1] [7]) > 3)))));
                            }
                        }
                    }
                }
                arr_25 [i_0] = ((((((arr_7 [i_1 + 1]) || 0))) >= ((((arr_13 [6] [14] [i_1] [i_1] [i_1]) || ((((arr_22 [i_0] [6] [6] [6] [12] [6] [6]) * (arr_17 [2] [i_1 - 1] [i_0] [i_1] [i_0] [12] [i_0])))))))));
                var_16 = ((!((!(arr_2 [i_0] [i_1 + 1])))));
                arr_26 [i_0] = (((((13620486153667694305 << (-483785126 + 483785148)))) ? ((((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : var_4))) ? (~var_3) : var_0)) : var_5));
                var_17 += (arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]);
            }
        }
    }
    #pragma endscop
}
