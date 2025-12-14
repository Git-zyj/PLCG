/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_13 ? (var_3 <= var_16) : var_16)) << (var_14 - 8940178254665423622)));
    var_20 = var_2;
    var_21 = (var_6 ^ var_18);
    var_22 = (min(var_22, var_18));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_23 = 0;
        var_24 = ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -1)) - 12692679829290362876);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (((((arr_5 [i_2 - 2] [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_2 - 1] [i_1] [i_1 + 2]) : (arr_5 [i_2 + 1] [i_1 + 1] [i_1 + 1])))) < (min(-var_3, (max(4294967295, 8)))));
                    arr_10 [i_0] = (((arr_4 [i_2] [i_0]) ? (arr_1 [i_0] [i_0]) : 4));
                    var_25 = (max(var_25, (((+(max(((min((arr_8 [i_0] [i_0] [i_0] [i_0]), -2155))), (arr_6 [i_2 - 2] [i_2] [i_1 + 1] [i_2 + 2]))))))));
                    arr_11 [i_0] [i_0] = ((0 ? (((((var_4 ? 1 : 6108463575101594850))) ? var_10 : -28819)) : ((~((var_12 ? (arr_3 [i_0] [i_1 - 1] [1]) : 48))))));
                    var_26 = (min(var_26, var_16));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_27 &= ((((-(((arr_8 [i_0] [i_4] [i_0] [i_0]) ? 67108864 : var_3)))) / var_17));
                    arr_16 [i_0] [i_0] [i_0] = (((((((1 > (arr_15 [i_0] [i_0] [i_3] [i_3]))) ? (var_9 <= 0) : (((arr_3 [i_3] [i_3] [i_0]) + (arr_15 [i_0] [i_0] [i_3] [i_4])))))) > (((var_12 == var_8) ? (arr_2 [i_3]) : (max((arr_2 [i_4]), 1))))));
                    var_28 -= (max(((2839354623 ? (arr_5 [i_4] [i_3] [i_0]) : 53)), ((2957070537666775930 ? (arr_5 [i_0] [i_3] [i_4]) : (arr_5 [i_4] [i_3] [i_4])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_23 [i_0] [i_0] [i_6] [i_0] = 1;
                    var_29 = (arr_22 [i_6]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_30 += 255;
        arr_26 [i_7] = (((arr_20 [8]) ? (arr_22 [i_7]) : 48));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 11;i_9 += 1)
            {
                {
                    var_31 &= (min((min((arr_8 [i_7] [i_8] [i_9] [i_9]), -7775378651618883728)), var_18));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_39 [i_10 + 3] [i_10] [i_7] [i_10] [i_10] [i_10 + 3] [i_10 + 3] = ((~(((arr_33 [i_11] [i_10] [i_7]) ? 0 : var_18))));
                                arr_40 [i_9] [0] [i_7] [i_10] [i_9] [i_9] [i_11] = arr_18 [i_9 - 4] [i_10 + 3] [i_11 + 1];
                                var_32 = (max(var_32, ((((((+(((arr_17 [i_8] [i_9 + 1] [12]) ? 2147483647 : -9223372036854775803))))) < ((1 ? (((arr_35 [i_7] [i_7] [i_8] [i_9 + 2] [11] [i_11]) ? 14479704577903897279 : (arr_37 [i_7] [i_7] [i_9] [i_10] [i_11]))) : var_4)))))));
                                var_33 = -20;
                            }
                        }
                    }
                    var_34 = (~2516060589);
                }
            }
        }
        var_35 = min(((-(arr_29 [i_7]))), 3);
    }
    #pragma endscop
}
