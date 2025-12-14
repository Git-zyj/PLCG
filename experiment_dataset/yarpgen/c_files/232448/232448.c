/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) ^ var_5)))) % ((((((arr_1 [i_0]) > (arr_0 [i_0])))) - (arr_0 [i_0])))));
        var_12 ^= (arr_1 [i_0 - 1]);
        arr_3 [i_0] = (arr_1 [i_0 + 3]);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [16] &= ((-((248 ? (arr_7 [i_1]) : (arr_7 [i_1 + 3])))));
        var_13 = ((var_1 * (((arr_6 [i_1] [9]) ? ((~(arr_6 [3] [i_1]))) : (arr_7 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (min(((~(max((arr_6 [i_2] [i_2 + 1]), var_9)))), (((-8868701431929084588 ? ((~(arr_5 [i_2]))) : (arr_9 [i_2]))))));
        var_14 = arr_7 [i_2];
        arr_12 [i_2] &= ((((-((143974450587500544 ? (arr_5 [i_2]) : 4290421271923125379)))) <= (((min((max(var_11, (arr_5 [i_2]))), (4290421271923125370 != 7)))))));
        arr_13 [i_2] [i_2] = var_11;
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_15 = ((!(((((((arr_15 [i_3 - 1]) ? var_5 : (arr_14 [i_3])))) ? ((42 ? (arr_14 [i_3]) : (arr_18 [i_3]))) : (arr_17 [i_3 - 2] [i_3 + 2] [i_3 + 2]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_26 [i_3] [i_3] = (~4290421271923125379);
                            var_16 = (((((-(arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 2])))) && 7));
                            var_17 = ((((~(arr_24 [i_3] [i_4] [i_5] [i_6] [i_3])))) ? (((-8704557767675116142 ? ((max(254, 213))) : ((max(var_0, 145)))))) : ((7 ? 7276084126862772198 : 199)));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;

    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_38 [i_7] [i_9] [4] [i_7 - 1] [i_7] [i_7] = ((((((arr_34 [13] [i_10] [i_8 - 1]) ? var_1 : var_8))) ? ((~(arr_34 [i_8] [i_8 - 1] [i_8 - 1]))) : (arr_34 [i_7] [i_8] [i_8 + 2])));
                        arr_39 [i_7] [i_7] [i_9] [i_7] = (min((~0), ((~(arr_10 [i_7 + 1])))));
                        arr_40 [i_9] [i_9] = 8704557767675116142;
                        var_19 = ((-((-(arr_22 [i_9] [i_9] [i_9])))));
                    }
                }
            }
        }
        var_20 = (min(var_20, (((0 >> (((arr_24 [i_7] [i_7] [i_7] [i_7 + 2] [i_7]) - 7094260702822233743)))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_21 = 171;
                        arr_49 [i_7] [i_7] [9] [i_11] [i_7] = ((~(((((arr_7 [18]) ? var_11 : var_10))))));
                    }
                }
            }
        }
        var_22 ^= var_7;
        var_23 = arr_35 [i_7] [12] [i_7];
    }
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
