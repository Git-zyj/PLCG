/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_13 = min((arr_0 [i_0 - 4]), (((var_4 ? var_6 : var_8))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_14 = -198;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_15 = max(0, 0);
                            var_16 |= (((((-((134152192 ? var_9 : 143))))) ? (var_5 ^ 1) : ((((((arr_9 [11] [i_3] [3] [i_1] [1]) ? (arr_3 [i_0] [i_0] [i_2]) : var_7))) ? ((((arr_3 [i_1] [i_2] [i_3 + 2]) != var_10))) : (((!(arr_1 [i_4]))))))));
                        }
                    }
                }
            }
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                var_17 = (max((((((max((arr_2 [i_5] [i_1] [i_0]), var_11))) ? var_6 : var_5))), (max((min(1, (arr_6 [i_5]))), var_9))));
                var_18 = (((arr_2 [i_0] [i_0] [i_5]) ? (min((((arr_13 [i_0] [i_0]) / (arr_11 [i_0] [i_0] [i_1] [i_1] [10] [1] [10]))), (arr_10 [i_0] [i_5 - 1] [i_5 - 1] [1]))) : ((var_4 ? var_11 : var_5))));
            }
            var_19 = ((var_5 == ((((max(var_1, 0))) ? ((-(arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [8]))) : (~var_5)))));
        }

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_20 = (max(var_20, 4398046511103));
            var_21 += var_5;
            var_22 = (max(var_22, 1));
        }
        var_23 = (((arr_8 [i_0]) | ((((((arr_14 [4] [i_0]) ? (arr_3 [i_0] [i_0] [3]) : (arr_8 [3])))) ? ((min((arr_12 [i_0] [i_0] [9] [i_0] [i_0]), var_0))) : ((var_5 ? (arr_5 [4] [4]) : var_9))))));
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_24 = (min((((-((var_10 ? 120 : var_11))))), var_3));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_26 [i_7] [16] [i_7] = ((((((!var_1) | (min(var_3, (arr_19 [i_7])))))) % ((var_1 ? var_10 : ((var_0 ? var_10 : var_0))))));
                    var_25 = (max(var_25, ((max((((arr_20 [i_7 - 1] [1]) ? var_7 : var_7)), (arr_24 [i_7] [i_7] [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((var_11 ? (((((var_3 ? var_7 : var_5))) ? (arr_21 [6]) : var_3)) : var_7)))));
                                var_27 = (min(var_27, (((var_5 ? var_0 : ((var_3 ? (((var_3 ? (arr_30 [i_7] [i_7] [i_9] [i_10] [1] [7]) : var_10))) : ((var_11 ? var_1 : var_9)))))))));
                            }
                        }
                    }
                    arr_31 [i_7] [i_8] [i_7] = (var_7 % ((min(var_11, var_4))));
                }
            }
        }
        var_28 ^= (max(var_5, ((-((var_4 ? 3588280479069718521 : var_9))))));
        var_29 ^= (max((899 && 15419503906520897470), (!var_1)));
        var_30 -= var_3;
    }
    var_31 = (min(var_31, var_2));
    var_32 = ((((var_8 ? var_2 : var_9)) >> ((((var_10 || var_8) && var_5)))));
    var_33 = var_7;
    #pragma endscop
}
