/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 ^= var_12;
                arr_5 [i_0] [i_0] = (((((arr_4 [i_0] [i_0] [i_0 - 1]) < (arr_1 [i_1 - 1]))) || var_4));
                var_14 = (max(var_14, ((((15441543920355525479 >= (arr_2 [i_0] [i_0] [i_1])))))));
                var_15 = (arr_0 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_16 = ((((((max(9968625483819489794, var_6))) ? (arr_6 [i_2] [i_2]) : (arr_7 [i_2] [i_3]))) << ((((min((arr_7 [10] [i_3]), (arr_6 [i_2] [i_2])))) + 11316))));
                arr_10 [i_2] [i_3] [i_3] = ((~(((!(arr_8 [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? ((min((min((((-(arr_15 [i_2] [i_2] [i_2] [i_2])))), (((arr_12 [i_3]) - var_3)))), 94))) : ((min((min((((-(arr_15 [i_2] [i_2] [i_2] [i_2])))), (((arr_12 [i_3]) + var_3)))), 94)));
                            var_17 = min(-57, (((((~(arr_8 [i_3])))) ? ((((var_4 <= (arr_13 [i_2] [i_2] [12] [i_2] [i_2]))))) : (arr_7 [i_4] [i_5]))));
                            var_18 = (min(var_18, (((!(((var_10 ? 150800164 : (arr_14 [i_2])))))))));
                        }
                    }
                }
                var_19 -= var_11;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_20 = ((198 ? ((((((arr_18 [i_6] [i_7]) ? 41 : var_2))) ? (((arr_20 [i_6] [i_6]) ? 56 : (arr_17 [i_6] [i_6]))) : var_7)) : 1105636699));
                    arr_23 [i_6] [i_7] [i_8] = (((((max(3189330596, (arr_2 [i_6] [i_6] [i_8])))) ? (((arr_13 [i_6] [i_6] [i_6] [12] [i_6]) ? (arr_15 [i_6] [i_6] [i_6] [i_8]) : var_11)) : (arr_20 [2] [i_7]))));
                    var_21 = (max(var_21, ((((arr_2 [i_6] [i_7] [i_8]) ? (((((var_6 ? var_2 : (arr_7 [i_6] [i_6])))) / ((1105636727 ? (arr_4 [i_7] [i_7] [i_8]) : (arr_1 [i_6]))))) : ((((((arr_11 [i_7] [i_7]) ? 3189330597 : 199))) ? var_1 : 1)))))));
                    var_22 = (max(var_22, (arr_1 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
