/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((var_6 || 680750455) || var_11)))));
    var_15 = ((((var_0 ^ (var_7 <= 680750443))) / var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 *= (((arr_9 [i_0 + 3] [i_0 + 1] [i_2]) ? (~27344) : ((((arr_8 [i_0] [8] [i_1] [i_1]) == -680750455)))));
                    var_17 = (max(var_17, (((!((((arr_9 [i_0] [i_1] [i_2]) + 93))))))));
                }
            }
        }
        var_18 = ((27343 ? -3735559079278399283 : 0));
        var_19 = (((arr_6 [5] [i_0 - 1] [5]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_20 = ((~(arr_14 [i_5] [i_5] [i_5] [i_0])));
                        var_21 = ((!(arr_2 [i_0 - 1])));
                    }
                    var_22 = (((arr_11 [i_0 + 3] [i_0]) ? (arr_14 [i_0] [i_0 + 2] [i_0 + 1] [i_0]) : (3539364845505800756 + -680750453)));
                    arr_18 [i_0] [i_4] [i_3] [i_3] |= (((((arr_15 [i_0] [i_4] [i_4]) >= 32766)) ? (arr_8 [i_4] [i_0 + 2] [i_0 + 2] [i_4]) : 176));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_23 = ((((-2450653936887960558 ? 0 : 8))) ? (arr_3 [i_6 + 4]) : (arr_10 [i_0] [i_0 + 2]));
                                arr_24 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_0 + 1] [i_0]) - (arr_6 [i_0] [i_0 - 1] [i_0])));
                                arr_25 [i_0] [i_3] [i_4] [i_0] [i_6] [i_0] = ((176 ? 1033988275722920323 : -1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (((((var_11 - 1) ? ((-2450653936887960546 ? 0 : 11935424795026993460)) : var_3)) + var_2));
    #pragma endscop
}
