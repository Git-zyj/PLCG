/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = (max((max((arr_5 [i_0 - 1] [i_2 + 1] [i_3] [i_3]), (51299 + 255))), ((-(arr_6 [i_0] [i_0])))));
                            var_20 = (arr_5 [i_0 - 1] [16] [i_0 + 1] [i_0]);
                        }
                    }
                }
                arr_9 [i_1] [i_0] [i_0] = ((-(((!((max((arr_2 [i_1] [i_0]), 0))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] = ((-(((max(251, (arr_7 [i_5] [i_5] [i_0] [i_4] [i_0] [i_0])))))));
                            arr_16 [i_0] = ((~(max((arr_0 [i_0 + 1]), (arr_0 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_21 = (min(var_21, (((((min(((min((arr_17 [i_6]), (-9223372036854775807 - 1)))), (min(1497318045444095541, 1))))) ? (((arr_2 [i_6] [i_7]) / (arr_2 [i_6] [i_7]))) : 63)))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_22 = (-63 <= var_17);

                            for (int i_10 = 0; i_10 < 18;i_10 += 1)
                            {
                                var_23 = (min(-120, var_4));
                                var_24 = (((((arr_10 [i_10] [i_8 - 2] [i_8 + 2]) * (((arr_8 [i_6] [3]) - var_13)))) | (((arr_28 [i_8] [15] [i_8 + 2] [i_8 - 2] [i_8 + 1]) | var_7))));
                                var_25 = ((255 ? ((((arr_4 [i_8 - 1] [i_8] [15]) >> 0))) : 7383464116108657575));
                                arr_32 [0] [0] [i_8] [0] [14] [i_10] = ((((min((((arr_8 [i_7] [i_9]) ? -2847381010236515662 : -76)), (((2288270076 ? 2288270076 : 99)))))) || (arr_19 [i_8 - 1] [i_8 - 1])));
                                var_26 *= ((((((222 % -10819) >> (((((min((-9223372036854775807 - 1), 14236)) - -9223372036854775783)) + 31))))) < (((arr_12 [i_6] [i_7] [i_8 + 1] [i_8 + 1] [i_10]) / var_5))));
                            }
                            /* vectorizable */
                            for (int i_11 = 3; i_11 < 17;i_11 += 1)
                            {
                                arr_36 [i_6] [i_6] [i_6] [i_11] [13] [i_6] = 0;
                                arr_37 [i_6] [i_11] [i_8] [i_11] [i_6] = (arr_7 [i_11] [i_11 + 1] [i_11] [i_8] [i_8 + 2] [i_8 + 2]);
                            }
                        }
                    }
                }
                arr_38 [i_6] [12] [i_6] = ((((((arr_11 [i_6] [i_6] [i_6]) ? 63 : 65535))) || ((max((((arr_13 [23] [i_7]) ? (arr_8 [i_7] [i_7]) : (arr_35 [i_6] [i_6] [i_6] [11] [i_6]))), ((((arr_7 [8] [i_7] [i_7] [i_7] [i_7] [i_7]) - -2847381010236515662))))))));
            }
        }
    }
    #pragma endscop
}
