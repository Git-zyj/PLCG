/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((arr_3 [i_0] [i_1]) >= (arr_2 [i_1]))));
                arr_6 [i_1] [i_1] [6] = ((-(((((1472500877 ? 84 : (arr_1 [i_0] [i_0])))) ? var_1 : (arr_0 [i_1])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_11 = (max(var_11, (((var_5 ? (arr_7 [i_0] [i_0]) : (((-(arr_9 [i_0] [i_1] [i_2])))))))));
                    var_12 ^= (((arr_8 [i_0] [i_1] [i_2 - 1]) ? (arr_8 [i_0] [13] [i_2 + 2]) : 178));
                    var_13 = (((((arr_2 [i_0]) ^ (arr_8 [i_0] [i_1] [i_2])))) ? (arr_1 [i_0] [i_2 - 2]) : (((13 ? (arr_9 [i_0] [2] [i_1]) : 65523))));
                    arr_10 [i_1] = (arr_4 [i_1]);
                    arr_11 [i_0] [i_2 + 1] [i_1] [9] = ((154 ^ ((~(arr_8 [i_0] [i_1] [i_2])))));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_1] = (((((var_7 ? (!1408480173) : (arr_13 [i_0])))) ? (~164) : var_3));
                    arr_17 [6] [i_1] [0] = ((-(max((max((arr_7 [i_0] [12]), var_1)), 12288))));
                }
                for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_1] = max(((min(11886316196451778474, 0))), (((30654 != (arr_12 [i_4 - 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] = (((((((arr_15 [i_1] [i_5 - 1] [i_6 + 2]) >= (arr_14 [i_0] [0] [i_4] [i_5])))) != (((arr_24 [i_0] [i_1] [i_4] [12] [i_6 - 1]) ? 101 : 36315)))));
                                arr_29 [i_0] [i_1] [i_5 + 1] [i_4] &= (min((!-5615), (arr_14 [i_5 + 1] [i_5] [i_5 - 2] [i_6])));
                                var_14 = (((((((arr_26 [i_0] [i_1] [i_4] [i_5] [3]) ^ var_2))) || ((min(73, 131))))));
                                arr_30 [16] [i_1] [i_4] [i_1] [i_0] = (i_1 % 2 == 0) ? ((((((arr_13 [i_0]) << (((arr_27 [i_0] [i_0] [i_0] [14] [i_1]) - 210))))))) : ((((((arr_13 [i_0]) << (((((arr_27 [i_0] [i_0] [i_0] [14] [i_1]) - 210)) + 173)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_37 [i_8] [10] [i_1] [13] [i_0] = (((((((((arr_35 [i_1] [i_1] [i_1]) ? var_7 : (arr_9 [i_0] [i_0] [i_1])))) ? (((max((arr_25 [12] [i_1] [i_4 + 1] [i_1] [i_8 + 3]), 491)))) : (min(10, var_6))))) ? ((-(arr_26 [i_0] [i_1] [i_1] [i_7] [i_8]))) : (((((min(11881, (arr_26 [17] [i_8 + 1] [11] [11] [4])))) && ((min((arr_24 [17] [i_7] [i_4] [i_1] [i_0]), (arr_26 [i_8 + 3] [5] [i_4] [6] [i_0])))))))));
                                arr_38 [i_1] [i_8 + 1] [i_8] [i_8 + 2] [16] = ((~(1948676405 != 11)));
                            }
                        }
                    }
                    var_15 = (min((min((max(var_6, (arr_32 [i_0] [17] [i_0] [i_0] [i_4] [i_4]))), (((76 ? 174 : (arr_22 [i_4])))))), (arr_24 [i_4] [i_1] [1] [i_0] [i_0])));
                }
                var_16 = 2391806812;
                var_17 -= (max(0, var_9));
            }
        }
    }
    var_18 = 110;
    var_19 = (((((((max(var_5, 2391806829))) & (min(11886316196451778455, -8803))))) ? ((62440 ? (28 - 244) : (((var_9 ? var_1 : 120))))) : ((((min(var_7, -3607))) ? ((max(var_4, 181))) : (max(var_2, 11886316196451778478))))));
    #pragma endscop
}
