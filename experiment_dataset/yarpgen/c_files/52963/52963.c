/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_12));
    var_16 = (~(~1));
    var_17 |= ((-var_5 ? ((min((((0 ? 364040958 : 1))), (min(var_7, var_9))))) : ((~(min(var_10, var_12))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((-1329053826 ^ var_14) > (((3930926331 + (arr_7 [i_0] [i_0] [i_2] [i_0])))));
                    var_19 = 8741574059250517073;
                    var_20 = ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? ((-(arr_4 [i_0]))) : ((((arr_6 [i_0] [i_1] [i_2] [i_0]) == 48639))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (max(var_21, (((-(arr_3 [i_3 + 2]))))));
                        var_22 = (((~((var_1 ? 1 : 48)))) - (22234 ^ 1));
                        var_23 = ((((-206 ? 16400160358618320401 : 19392)) ^ ((((arr_1 [i_3 + 1] [i_0]) ? var_3 : (arr_1 [i_3 - 4] [i_0]))))));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_24 = (max(var_24, (var_10 + 44)));
                        var_25 = (max(var_25, 38));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_26 = (min(var_26, (7914593008088291493 - 48)));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [1] [1] [1] [1] [i_5] [i_0] = ((~((max((arr_13 [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1]), (arr_9 [i_0]))))));
                            arr_22 [i_1] [i_0] [11] [i_6] = ((!((min(0, 46144)))));
                        }
                    }
                }
            }
        }
        var_27 = (((27908 + (arr_0 [6] [i_0]))));
        arr_23 [i_0] = var_12;
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_28 = (max(var_28, (arr_33 [i_7] [i_7] [i_9] [i_7])));
                        arr_34 [i_7] [i_8] [i_9 + 1] [i_10] [i_7] [i_8] = (((min((arr_33 [i_9 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 1]), (arr_33 [i_7] [i_8] [i_9 - 2] [i_10 + 2]))) / var_1));
                        arr_35 [i_9] [i_8] [i_9] |= (((((((max(66, 217)))) & (~var_10))) ^ ((min((arr_29 [i_7] [i_7 + 1] [i_9 - 1]), (arr_29 [i_7 + 1] [i_7 + 1] [i_9 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_29 = (((((-2147483646 ? ((~(arr_36 [i_8] [i_8] [i_12]))) : (arr_28 [i_8] [i_8])))) ^ (arr_25 [i_7])));
                                var_30 -= (((!var_0) ? (max((arr_24 [i_7 + 1] [i_9 + 2]), var_12)) : ((((min(4592798337114587331, -1732138442)))))));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (min(var_31, (arr_37 [6])));
        var_32 = (min(var_32, (arr_24 [i_7 + 1] [i_7 + 1])));
        var_33 ^= (((((209 ? (var_11 <= 123) : (arr_28 [i_7 + 1] [14])))) ? (((max(1, var_1)))) : (max(((max(6144, 16896))), 36333))));
    }
    var_34 = -86;
    #pragma endscop
}
