/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((((!(((arr_6 [i_2]) == 1)))) ? ((var_9 ? (arr_7 [i_0] [13] [13] [i_3]) : (arr_9 [i_0] [i_1] [9] [i_3]))) : ((((~var_13) << (((max(-32764, (arr_0 [i_3]))) - 18446744073709518850)))))));
                        var_22 = (arr_2 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_23 = ((+(min((arr_3 [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 - 1])))));
                                var_24 = -12793;
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] = ((!(((18296301643787138786 ? (10929 != var_1) : ((min(var_3, var_9))))))));
                            }
                        }
                    }
                    var_25 = (((((arr_7 [i_0] [i_0] [i_0] [i_0]) / ((-32767 ? var_14 : var_4))))) ? (var_18 && 2147483647) : (arr_11 [i_0] [i_1] [i_1] [i_0 + 1] [i_1 + 1] [2]));
                    var_26 -= ((min((arr_13 [i_1] [i_1 - 1] [i_1] [i_2] [i_2] [1]), 12784)));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6 - 1] [i_2] [i_2] = 1;
                        arr_20 [i_2] = ((~((((~var_5) <= (arr_6 [i_0]))))));
                        var_27 ^= (min((10913 | 150442429922412841), (min(((var_12 ? var_6 : var_18)), var_5))));
                    }
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_28 = (((65532 / 18446744073709551615) ? (((arr_5 [i_0]) ? 24 : (arr_10 [i_0] [i_2] [i_0] [i_2] [i_0]))) : -1));

                        for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_29 = (arr_13 [i_2] [i_2] [i_8 + 2] [i_1 + 1] [i_1 - 2] [i_2]);
                            var_30 = (max(var_30, (((arr_14 [i_0] [i_0] [i_0 + 2] [i_1 + 1] [i_7] [i_7 + 4] [i_8 - 2]) ? (((var_13 * 255) + var_16)) : (((!(((var_14 ? (arr_21 [i_0] [i_1]) : (arr_1 [0])))))))))));
                            var_31 = (arr_12 [i_0] [i_0 + 2] [i_1 - 1]);
                            arr_28 [i_8] [i_7] [i_7] [10] [i_0] &= ((min((arr_12 [i_2] [i_7] [i_8]), (arr_9 [i_7] [i_7 - 2] [i_1 - 2] [i_0]))));
                        }
                        for (int i_9 = 3; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_32 = var_6;
                            var_33 = (~var_10);
                            var_34 ^= ((18446744073709551614 ? 230 : 127));
                        }
                        for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_35 = ((var_17 & (arr_30 [i_0] [i_2] [i_2] [i_7 + 1] [i_2] [i_2] [i_0])));
                            var_36 = ((((-4548141414882192356 < ((var_12 ? (arr_0 [i_2]) : (arr_26 [i_2]))))) ? var_11 : (((arr_13 [i_2] [i_10 + 1] [i_7] [i_2] [i_2] [i_2]) ^ 14162))));
                        }
                        for (int i_11 = 3; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_37 = (min(var_37, (((-(min(248868073, -var_16)))))));
                            var_38 &= 17592186044415;
                            arr_35 [i_2] = (arr_22 [i_1] [i_1] [i_1] [i_11 - 2]);
                            var_39 = (~var_9);
                        }
                    }
                }
            }
        }
    }
    var_40 = (min(var_40, ((((~var_18) * 63)))));
    #pragma endscop
}
