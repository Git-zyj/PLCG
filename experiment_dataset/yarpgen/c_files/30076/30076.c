/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 + 2147483647) << (max(var_3, (var_1 <= var_7))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 -= (-4514 >= ((12 ? 253 : 8)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, -29803));
                        var_13 += -47;
                        var_14 = (min(var_14, ((min(((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_2]) : -401428877))), 1)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_4] [8] [i_6] [i_7] [i_7] &= (min(((((((12 * (arr_16 [i_0] [i_4] [i_5] [i_6])))) && var_4))), 32760));
                                arr_23 [i_7] [i_6] [i_0] [i_0] [i_0] = ((((((((arr_8 [i_0] [i_4] [i_6]) ? -32751 : (arr_2 [i_4])))) ? ((min(var_6, (-2147483647 - 1)))) : (arr_5 [i_0]))) == 1));
                            }
                        }
                    }
                    var_15 = (-32767 - 1);
                    arr_24 [i_0] [i_0] = max((23 || 29803), (max((arr_9 [i_0] [i_0] [i_0]), ((-32763 ? 1 : 20)))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_33 [i_9] [i_9] [i_10] [i_10] &= (max(var_4, -1011317365));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_16 = ((1 == (max(43552, (((-127 - 1) & 122))))));
                        var_17 = ((((-(arr_4 [i_8] [i_8] [i_8])))) ? (((((-1493706511 ? -1582854387 : 12)) + -31784))) : (max((14 + 2147483647), (arr_30 [i_11]))));
                        var_18 = 32751;
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_8] [i_12] [i_10] [i_12] [1] = (-1493706503 % var_1);
                        arr_39 [i_8] [i_9] &= (arr_30 [i_12]);
                        arr_40 [6] [1] [i_10] [i_8] [i_8] = (var_8 && 244);
                        arr_41 [i_8] &= ((0 ? 32742 : 2147483647));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                    {
                        var_19 ^= ((((arr_15 [i_13] [i_9] [i_10] [i_13]) | 134)) != ((min((arr_8 [i_8] [i_8] [i_8]), 97))));
                        var_20 &= ((((((arr_21 [i_8] [i_9] [i_10] [i_10] [i_9] [i_13]) ? (-2147483647 - 1) : (arr_21 [i_13] [i_8] [i_9] [i_8] [i_8] [i_8])))) ? (max((((var_0 + 2147483647) << (255 - 255))), ((4 ? (arr_37 [i_8] [i_13]) : var_6)))) : (((((min(var_4, 0))) == (min(43552, var_3)))))));
                        arr_44 [i_8] [i_13] [i_13] [i_13] = ((min(var_2, (min(4294967272, var_2)))));
                    }
                    arr_45 [i_10] [i_9] [i_8] = max((min(-2147483632, (arr_37 [i_9] [i_9]))), var_5);
                }
            }
        }
        var_21 = (min((((var_7 >= var_3) - (arr_9 [i_8] [i_8] [i_8]))), ((+((max((-32767 - 1), 1)))))));
        arr_46 [i_8] = ((0 ? (((((var_6 ? 32 : 4))) ? (20 && 220) : ((24 ? var_3 : 697878506)))) : ((min((arr_4 [i_8] [6] [i_8]), 1)))));
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_22 -= 4294967289;
        arr_50 [9] = (arr_13 [i_14] [1] [i_14]);
        var_23 = (((1 & 135) < (((arr_1 [i_14] [i_14]) ? (max(var_2, 4294967261)) : ((((arr_3 [i_14] [i_14] [14]) ? 135 : 24)))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_24 = (min(var_24, (((1 <= (arr_15 [3] [i_15] [i_15] [23]))))));
        var_25 = var_0;
        var_26 = (((-(arr_36 [i_15] [8] [i_15] [i_15]))));
    }
    #pragma endscop
}
