/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_1 ? (!var_4) : ((0 ? -3199045423167387965 : ((3199045423167387960 ? -34 : 3199045423167387964))))));
    var_14 *= (((var_2 ? ((var_4 ? var_2 : var_0)) : var_11)));
    var_15 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 -= (((((((-3199045423167387965 ? 11870000239113233269 : -3199045423167387965))) ? 33 : (max((arr_0 [i_0] [3]), (arr_1 [1]))))) | (((arr_5 [4]) ? (arr_5 [8]) : (arr_5 [6])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 = (max(var_17, (((min((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_1 [i_0])))))));

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        var_18 ^= (((((-(arr_10 [i_3 - 1] [2] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_1])))) ? var_5 : (((((arr_2 [i_0]) ? var_12 : var_11))))));
                        var_19 = (min(var_19, ((max((((((53 ? 7398 : -34)) >= ((-34 ? -34 : 39))))), (arr_8 [i_3 - 2] [i_3 + 1] [i_3 - 4] [i_3 - 2]))))));
                        var_20 += var_2;
                        var_21 *= (((arr_3 [i_0] [0]) ? ((((((arr_10 [i_3] [i_3] [i_3 - 1] [9] [i_3] [i_3]) ? var_7 : var_1))) % ((~(arr_7 [i_0]))))) : (((max((3199045423167387965 < 33), var_5))))));
                        var_22 += (((((((((arr_4 [i_3] [i_1] [i_0]) ? (arr_5 [8]) : var_4))) ? (arr_0 [1] [i_1]) : (((arr_4 [i_3] [i_3] [i_3 + 1]) >> (((arr_8 [i_3] [i_1] [i_0] [i_3]) - 5072374536918035625))))))) ? ((((var_7 == (arr_7 [i_2]))) ? (((arr_7 [8]) ? (arr_9 [8]) : (arr_6 [2] [i_3] [i_2] [i_3]))) : var_7)) : ((~((-(arr_9 [6])))))));
                    }
                    var_23 -= ((~((+(min((arr_1 [8]), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])))))));
                }
                for (int i_4 = 2; i_4 < 6;i_4 += 1)
                {
                    var_24 = (min(var_24, ((((min((arr_8 [i_0] [i_0] [i_1] [i_4]), (arr_12 [i_0] [i_0] [1]))))))));
                    var_25 = (max(var_25, (((-(((max((arr_3 [0] [i_4]), var_12)))))))));
                    var_26 ^= ((-((-(((arr_7 [i_1]) ? (arr_3 [i_0] [i_4]) : var_11))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_27 = (min(var_27, (arr_14 [i_5])));

                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_5] [i_1] [i_1] &= (((arr_12 [i_0] [3] [3]) ? -3199045423167387964 : (((var_6 ? var_4 : var_3)))));
                        var_28 += ((var_10 ? (arr_13 [i_0] [i_0] [i_0]) : -var_0));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_29 *= ((33 ? 33 : 33));
                            var_30 ^= (arr_19 [i_7] [4] [i_7] [i_6 + 2] [i_7]);
                            arr_21 [i_7] [i_1] [i_7] |= ((-(((arr_3 [i_7] [i_7]) ? (arr_20 [4] [i_1] [4] [i_6 + 1] [i_7]) : (arr_20 [9] [i_6 + 2] [i_5] [i_1] [i_0])))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_31 = (min(var_31, 249));
                            var_32 |= (((((3199045423167387962 ? (arr_9 [i_5]) : 4449449049719720869))) ? (arr_2 [i_0]) : ((((arr_4 [i_1] [i_6] [i_8]) ? (arr_14 [i_5]) : (arr_1 [i_0]))))));
                            var_33 = -var_6;
                        }
                        for (int i_9 = 1; i_9 < 6;i_9 += 1)
                        {
                            var_34 *= (((arr_27 [i_6 - 1] [9] [i_9] [i_9]) ? (arr_27 [i_6 + 2] [i_6 - 2] [i_9 + 1] [i_9 - 1]) : (arr_27 [i_6 + 1] [i_6] [i_9] [i_9 + 4])));
                            var_35 = (min(var_35, (arr_19 [i_5] [i_1] [i_5] [4] [0])));
                        }
                        var_36 = (min(var_36, (arr_7 [1])));
                        var_37 -= ((((((arr_13 [i_1] [i_5] [i_6 + 1]) ? var_8 : var_1))) ? (~var_2) : (((-(arr_17 [7]))))));
                    }
                    arr_28 [i_5] [i_5] [i_0] &= ((-(arr_20 [5] [1] [i_5] [5] [i_1])));
                    var_38 = (max(var_38, ((((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0]))))));
                    var_39 += (((((~(arr_27 [1] [i_0] [i_5] [6])))) ? (var_7 < var_0) : (arr_4 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
