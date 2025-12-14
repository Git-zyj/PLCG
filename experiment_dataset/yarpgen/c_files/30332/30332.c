/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, ((min(((((max(127, (arr_2 [i_0] [5])))) ? 1 : (arr_0 [i_0]))), (!1))))));
        var_12 += ((((~((var_1 ? (arr_0 [i_0]) : var_4)))) - 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_13 = (((~(arr_0 [i_0]))));
                        var_14 &= var_4;
                        arr_11 [i_3] [i_2] [i_2] [14] = ((var_4 < ((min(16352, var_9)))));
                        var_15 = (min(var_1, 2805454237));
                    }
                    var_16 ^= var_1;
                    var_17 = (((((1 ? var_2 : (max(6901841822800637347, 1))))) && -var_7));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_18 = ((-((-(var_6 >= 1)))));
        var_19 = (min(-var_5, var_6));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_20 = (((((((min(6901841822800637347, 0))) ^ ((var_1 ? var_1 : 620422782))))) ? 3758 : var_1));
                    arr_23 [i_5] = (((((((7422 ? (arr_0 [i_6]) : (arr_6 [i_7] [i_7]))) - ((((arr_15 [i_5]) ? var_6 : 123)))))) ? (min((var_7 ^ 3758), 1)) : ((((min(var_3, 981701341))) ? (var_3 || var_5) : (16633679879138252511 < 1)))));
                    var_21 = ((((((var_8 | var_1) ? (min(var_2, (arr_3 [i_5] [i_6] [i_7]))) : -10783))) ? (max(((max(var_4, var_3))), ((var_10 ? (arr_1 [i_6]) : 1813064194571299129)))) : ((((((var_4 ? var_8 : var_10)) >= ((var_2 ? var_9 : 1))))))));
                    var_22 = (max(var_22, ((max((((33800 >= ((var_8 ? 2537456374 : -469659623470317118))))), (((61792 ? var_5 : 8671286997639738203))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_23 ^= ((-(~var_5)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_33 [i_5] [i_8] [i_5] [i_9] [i_10] [6] = (((((min((arr_9 [i_8] [1] [8] [i_8]), 3758))) ? (arr_29 [i_11] [8] [i_8] [i_5] [i_8] [i_5]) : ((((-981701313 + 2147483647) >> (((arr_24 [i_8]) - 50707387638552291))))))));
                                var_24 = ((~((~(arr_26 [i_8])))));
                            }
                        }
                    }
                    var_25 = ((((max((((620422782 ^ (arr_31 [i_5] [i_5] [i_8] [1] [i_8 + 2] [i_9] [5])))), (~var_1)))) ? (((((arr_30 [i_8] [i_8]) ? var_9 : var_7)))) : ((-(arr_5 [i_8 + 2])))));
                    var_26 = ((2926303642400035800 ? 1 : ((((max(var_9, var_10))) - (min((arr_17 [i_9] [i_8] [1]), var_1))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 4; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                {
                    var_27 = 72057594037927935;
                    arr_43 [i_12] [i_12] = (max(-20870, (max(((var_7 ? 145717313 : (arr_36 [i_12] [i_12]))), (arr_42 [i_12] [i_13] [14])))));
                    var_28 = (~(max((max(15520440431309515816, (arr_40 [i_12]))), (arr_41 [i_14 - 1] [i_12] [i_12 - 2]))));
                }
            }
        }
    }
    var_29 += (((((1 ? var_9 : 4149249983))) ? var_9 : (max((~-4503464093850771751), var_0))));
    var_30 = (min(var_8, var_3));
    #pragma endscop
}
