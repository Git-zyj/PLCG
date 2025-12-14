/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (~69);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = min((arr_1 [i_0]), (0 >= 13302554599937602837));
        var_22 = ((arr_1 [i_0]) == (65280 != 2));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 1;
        var_23 *= 2731;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((min(14665901144289095093, -167412897465270275)) < (min((arr_3 [i_2] [i_2]), 10348041339563996804))));
        arr_11 [i_2] [i_2] = ((~((((-1061006321 % 8098702734145554812) > (max(8098702734145554812, -11422)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_24 = (arr_6 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [i_6] [i_3] [i_5] [i_4] [i_3] = (-8474 + 10348041339563996824);

                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            var_25 = (!3788963946);
                            var_26 = (max(var_26, ((((arr_17 [i_3] [i_7] [i_5 - 2]) ? 0 : 18)))));
                        }
                        var_27 = ((154 ? 453748729 : (arr_13 [i_5 - 2])));
                        arr_25 [i_5] = (((-8334 + 2147483647) << (((arr_3 [i_5 + 3] [i_6]) - 1667729063))));
                    }
                }
            }
        }
        arr_26 [i_3] = ((4 - (~575334852396580864)));
        arr_27 [i_3] = ((1235917049511543354 ^ ((((arr_8 [i_3]) ? 31300 : 185)))));
    }
    #pragma endscop
}
