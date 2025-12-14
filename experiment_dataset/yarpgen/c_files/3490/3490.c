/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = var_1;
    var_14 = (max(var_14, ((min(var_9, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (~var_1);
                arr_5 [i_1] = (((arr_3 [i_0] [i_0] [i_0]) ? var_7 : ((~((min(18324, var_2)))))));
                var_16 -= (((arr_1 [i_1] [i_1]) ? (max(var_6, (min(47235, var_6)))) : (((((var_0 ? (arr_0 [i_1]) : var_5)) << (((((arr_0 [1]) * var_10)) - 91433449)))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 4] [4] = arr_4 [7] [9] [i_1];

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 += ((((((var_8 != (arr_3 [i_2] [0] [i_0]))) ? (arr_7 [i_0 + 1] [i_1 - 1] [5]) : (arr_3 [i_1 + 1] [i_1 + 2] [i_0 + 1]))) < ((max((var_7 || var_9), (arr_3 [i_1 - 3] [i_0 + 1] [i_0 + 1]))))));
                        var_18 = (min((47211 % 2590880285), ((18446744073709551615 * (((var_8 ? var_9 : (arr_3 [i_2] [0] [i_0]))))))));
                        arr_11 [10] [5] [i_2] [i_2] = (arr_1 [i_3] [i_0]);
                        arr_12 [5] [i_1] [i_1 - 2] [i_1] = ((((var_11 ? var_9 : 1824)) & ((-(arr_6 [i_0 + 1])))));
                    }
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = (~1279273023);
                    arr_16 [i_0] [i_1] = (~var_2);
                    var_20 = var_3;
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = var_4;
                        var_22 = ((var_10 ? (((((((arr_1 [2] [1]) ? var_8 : (arr_13 [i_1] [i_5] [i_1] [1])))) ? ((18332 ? (arr_19 [i_0] [i_0] [i_5] [i_6]) : (arr_0 [i_0]))) : (arr_10 [i_0] [i_0] [0] [4])))) : (((arr_3 [i_0 + 1] [i_1] [i_5]) ? (min((arr_22 [i_0] [3] [i_5] [i_6]), var_3)) : (((4124024277 ? (arr_6 [i_0]) : (arr_7 [1] [0] [i_0]))))))));
                        arr_23 [i_0] [5] [i_5] [i_6] [3] [8] = ((var_3 ? (((arr_22 [i_0 - 1] [3] [i_5] [2]) ? (arr_22 [i_0 + 1] [7] [1] [i_6]) : (arr_22 [i_0 + 1] [i_1 + 1] [1] [4]))) : 20372));
                        var_23 = (max((min(1, 4871023948789984048)), ((max((((arr_6 [i_0]) ? 65535 : 18323)), var_11)))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 = (max(var_24, (((((((((arr_7 [1] [i_5] [1]) < var_0)) ? ((max(var_2, (arr_14 [i_0 + 1] [i_1] [i_5] [i_7])))) : -var_10))) ? ((~(((var_6 <= (arr_0 [i_0])))))) : ((min(var_2, (arr_24 [i_0] [i_0 + 1] [i_5] [i_1 + 2])))))))));

                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            arr_28 [i_0] [i_0 - 1] [i_0] [i_0] [5] = ((((arr_7 [i_8 + 2] [i_8] [i_8 - 1]) ? var_7 : (arr_20 [i_8 + 1] [i_1 + 2] [i_0 - 1]))));
                            var_25 += (min(7553941717581029412, var_0));
                        }
                        var_26 = -47;
                        var_27 -= (min((min((~1), (18446744073709551615 >= var_6))), ((var_0 >> (((~101) + 117))))));
                        arr_29 [1] [i_5] [0] [1] = var_3;
                    }
                    var_28 = ((((((arr_20 [i_0] [i_0 + 1] [i_0 - 1]) & var_10))) ? (((((arr_25 [6] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) <= var_7)))) : (((arr_20 [i_0] [i_0 - 1] [i_0 - 1]) ? var_8 : (arr_20 [i_0] [i_0 + 1] [i_0 + 1])))));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_29 = (min((((arr_13 [1] [i_1] [i_1] [i_1 - 4]) <= 47193)), var_2));
                    var_30 = (arr_9 [i_0] [i_1] [i_9] [1]);
                    var_31 *= (((min(var_7, ((var_7 ? 0 : var_7)))) >> (((((min((arr_25 [i_0] [2] [10] [i_0 - 1] [i_0] [i_0]), 3612116325)) * var_11)) - 162545234608))));
                }
            }
        }
    }
    #pragma endscop
}
