/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_3, var_14))) ? var_13 : (max(var_2, var_6)))));
    var_18 ^= (min((((((max(1, -2005070899))) ? ((var_16 ? var_9 : var_13)) : var_4))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((~((~((-2005070906 ? -19867 : 2005070899))))));
                var_20 = (arr_3 [i_0 - 1] [i_1]);
                var_21 = (arr_6 [i_0] [i_0 - 2] [i_0]);

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    arr_12 [i_0 + 1] [i_0 + 1] [i_2] = (max(((max((arr_8 [i_0] [i_0 - 1] [i_2 - 1] [i_2]), var_3))), (arr_11 [i_0 - 1] [i_1] [i_2] [i_2 - 2])));
                    arr_13 [i_2] [16] [i_0 - 2] = (max((((((min((arr_5 [i_2 - 1]), (arr_0 [i_2])))) == (arr_3 [i_0 - 3] [i_2 - 2])))), (min((((arr_9 [i_2] [i_1] [14]) ? (arr_6 [i_0 + 1] [i_1] [15]) : (arr_8 [i_0 + 1] [i_0] [i_2] [i_2 - 2]))), ((min((arr_10 [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_0 - 2] [i_0] [i_0]))))))));
                    var_22 = var_15;
                    var_23 = ((((((((var_6 ? (arr_7 [i_1] [i_2 + 1]) : (arr_11 [i_1] [i_2] [i_2] [i_0 - 3])))) ? var_7 : (arr_6 [i_2 + 1] [0] [0])))) ? (min(10496709913148427622, 0)) : ((((arr_4 [i_0] [i_2 - 2]) ? (((var_2 ? (arr_7 [12] [i_0]) : var_8))) : ((-2005070905 ? -6830139467570537291 : 2005070898)))))));
                    arr_14 [i_2 + 1] [7] [i_1] [i_0] = (!var_6);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        arr_20 [i_4] [i_4] [15] [8] [i_1] [10] = (arr_17 [i_4 + 2] [i_0 + 2] [i_0 - 3]);
                        var_24 = ((+(((arr_8 [i_0] [i_0] [i_3] [i_4]) / (arr_11 [i_0] [i_0] [1] [i_0 - 1])))));
                    }
                    var_25 = (arr_1 [i_0 + 1]);
                    var_26 = ((~(arr_7 [i_0 + 1] [i_0 - 3])));
                    arr_21 [5] [i_3] [i_1] [i_0 + 1] = 229;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_27 -= (((((((((arr_22 [i_1] [i_0]) ? var_9 : (arr_5 [i_1])))) ? (arr_18 [i_0] [i_1] [1] [4]) : var_2))) ? ((((min(var_15, (arr_0 [4])))) ? 9980 : ((var_3 << (((var_11 + 5968811626221322646) - 3)))))) : (arr_0 [i_0 - 2])));
                    arr_25 [i_0] [i_5] [i_5] = (max(((-(arr_9 [i_0] [i_1] [i_0 + 1]))), ((0 ? 1787814030 : 0))));
                    var_28 = (max(2147483630, 2147483630));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                var_29 ^= (max((((~(((arr_22 [20] [i_6]) ? (arr_8 [i_7] [i_7] [i_7] [i_6]) : var_4))))), (min(var_8, ((var_13 ? (arr_5 [1]) : (arr_24 [i_7] [i_6] [i_7])))))));
                arr_33 [i_6] [i_7] = (min(var_4, ((((arr_30 [i_6] [i_7] [i_6]) > (arr_30 [i_6] [i_7] [i_7]))))));
                var_30 = arr_8 [i_7] [i_7] [i_7] [i_6];
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_31 = ((((((max(0, 2005070875))) || ((max((arr_9 [i_7] [18] [17]), var_9))))) ? ((max((arr_39 [i_9 + 1] [i_8] [i_8] [i_6]), (((arr_9 [i_6] [13] [24]) ? (arr_2 [8]) : (arr_8 [i_6] [i_7] [i_7] [i_9])))))) : ((((max((arr_0 [12]), (arr_18 [i_6] [i_6] [i_7] [i_6])))) ^ (min(var_15, (arr_22 [i_7] [i_9])))))));
                                var_32 = (((max((arr_19 [14] [i_9 + 1] [i_9 - 1] [i_6] [i_6]), var_16)) < (((arr_32 [i_8] [2]) ? (arr_6 [i_6] [13] [i_9 - 1]) : (arr_6 [i_10] [i_7] [i_10])))));
                                arr_43 [i_6] [i_6] [i_8] [i_8] [i_10] = (max(((var_4 ? (((arr_28 [i_8]) | (arr_28 [1]))) : (arr_28 [i_8]))), ((((((arr_7 [i_10] [i_6]) ? var_12 : var_9)) == var_9)))));
                            }
                        }
                    }
                }
                arr_44 [i_6] [1] [i_6] = (max(((((((arr_36 [i_7] [i_7] [i_7] [i_7]) ? var_15 : (arr_27 [i_7])))) ? var_14 : (max(-9223372036854775802, -8429)))), ((min(var_7, var_4)))));
            }
        }
    }
    var_33 = (min(var_33, ((((!var_5) && ((min(var_5, ((var_13 ? var_7 : var_3))))))))));
    #pragma endscop
}
