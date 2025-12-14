/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_5 - (65535 && var_7)))), ((((5571017464165267469 ? var_6 : 7643258803599419432)) >> ((((var_10 ? var_13 : 16872158076026891051)) - 18446744073618909871))))));
    var_15 ^= (!(!var_9));
    var_16 = (min(var_16, ((((((-((min(-23234, var_1)))))) ? var_1 : ((-((-23234 ? -7643258803599419443 : 636483664)))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((+(min((arr_3 [i_0]), (((var_7 ? (arr_1 [i_0]) : 100)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 ^= 32754;
            arr_7 [i_0] = (((-23395 + 2147483647) << (-var_8 - 2168650815)));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_10 [i_0] = (arr_5 [i_2 + 1] [i_2] [i_2]);
            arr_11 [i_0] [i_0] = ((!(((var_3 ? ((var_12 ? 236 : var_7)) : (arr_8 [i_0]))))));
            var_18 = (((min((var_11 + var_4), (arr_8 [i_0]))) < (arr_0 [i_0] [i_0])));
            arr_12 [i_0] [i_0] [i_0] = var_6;
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_19 = (max(var_19, (((+(max((arr_0 [8] [8]), (((arr_1 [20]) - (arr_15 [i_0] [i_0] [i_0]))))))))));
            var_20 |= ((!((((65527 ? 5283 : 1))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 = ((min(1, -1163603464)));
                            arr_24 [i_0] [i_6] = (-7643258803599419432 / var_0);
                            arr_25 [i_0] [i_6] [i_4] [i_5 + 1] [i_6 - 2] [i_6] |= var_13;
                        }
                    }
                }
            }
        }
        arr_26 [i_0] = 134;
        var_22 = (min(var_22, 0));
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        arr_29 [i_7] = ((78 ? (max(((23243 ? (arr_21 [i_7]) : var_11)), var_12)) : (-127 - 1)));
        var_23 ^= ((((!(arr_6 [0]))) ? (arr_19 [i_7] [i_7 + 2] [i_7] [i_7]) : ((((var_3 ? 3682360926 : var_12)) / 18806))));
    }
    var_24 |= 97;
    #pragma endscop
}
