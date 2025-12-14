/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(((var_15 ? var_3 : 1920)), ((((-32767 - 1) && 1)))))) ? (((!var_12) ? var_11 : (var_12 >= 1))) : (((!((min(var_5, 1)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_0]);
        var_19 *= ((var_2 ? ((-((127 ? var_3 : (arr_0 [i_0] [i_0]))))) : (arr_1 [16])));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((arr_6 [i_4 - 2] [i_1 + 3] [i_0]) ? 32763 : (arr_9 [i_4] [i_4 - 2] [i_1 - 4] [i_1])))))));
                                arr_13 [2] [i_1 + 1] [i_3] [i_3] [i_1] = (max((arr_8 [i_3]), ((!(((-1214876781 ? var_14 : var_16)))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (((((max((arr_10 [i_1 - 1] [i_1 + 3]), (max(2010862630, 35345))))) & (max((arr_9 [i_1 + 2] [i_1 - 4] [i_1 + 1] [i_1 + 1]), (arr_9 [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1 - 2]))))))));
                    arr_14 [i_0] [i_1] [12] [i_1] = ((((((min(var_6, (-2147483647 - 1)))) ^ (arr_6 [i_0] [i_1] [i_2]))) & (~604303556)));
                    arr_15 [i_0] [i_1] [i_0] = (max(((((((arr_11 [i_0]) ? -121 : 1))) * (((arr_3 [i_1] [i_2]) ? (arr_4 [i_0] [i_0] [i_0]) : 8664036229592951910)))), ((((arr_11 [i_0]) % (arr_11 [i_0]))))));
                }
            }
        }
        arr_16 [i_0] = ((((max((arr_9 [i_0] [i_0] [i_0] [i_0]), ((-(arr_4 [i_0] [i_0] [i_0])))))) ? (max((arr_4 [i_0] [i_0] [17]), ((var_5 << (((arr_12 [i_0] [i_0] [i_0] [i_0] [1] [1] [i_0]) + 130)))))) : ((((~var_9) != ((-8664036229592951918 ? 35319 : 35319)))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((-(arr_8 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_31 [9] [i_5] [i_6] [i_7] [i_8] [i_9] [i_6] = (arr_29 [i_5] [i_9]);
                            var_22 = ((13620029719550389095 ? 62100 : -885907012));
                            arr_32 [i_5] [i_6] [i_7] [i_8] [i_5] = (arr_9 [6] [7] [i_8] [4]);
                            var_23 = arr_23 [i_5] [2];
                            var_24 = var_13;
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_35 [i_5] [7] [i_5] = (((arr_34 [i_5] [i_8 - 1] [i_8] [i_5] [i_8] [i_10]) ? (arr_34 [i_5] [i_8 - 1] [8] [9] [1] [i_8]) : (arr_34 [i_5] [i_8 - 1] [1] [i_10] [i_10] [i_10])));
                            arr_36 [i_6] [i_5] [11] [i_6] [0] [i_6] [i_6] = (arr_34 [i_5] [i_6] [i_7 - 2] [1] [i_10] [i_10]);
                        }
                        arr_37 [i_5] [i_5] = (((((-(~-160487174728644858)))) ? (arr_11 [i_5]) : (arr_22 [i_5] [i_8])));
                        arr_38 [i_6] &= ((-(((min(var_7, (arr_25 [i_5] [i_6] [i_7] [i_8 - 1]))) - (arr_29 [i_6] [i_6])))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_43 [i_5] [i_5] [i_7] = (arr_27 [i_5] [i_5]);
                        var_25 ^= (((!var_9) >= (((arr_24 [i_7] [i_7] [i_7 + 1] [i_7 + 1]) ? (((arr_42 [i_5] [i_6] [i_11]) ? (arr_19 [i_11]) : (arr_24 [i_5] [i_6] [i_7] [i_11]))) : 5879))));
                        var_26 = var_14;
                        var_27 ^= ((((((((arr_10 [7] [i_6]) ^ -1214876793))) ? (arr_30 [i_5] [14] [i_5] [i_5] [i_5]) : (max((arr_28 [i_11]), 4826714354159162521)))) > (arr_8 [i_6])));
                    }
                    arr_44 [i_5] = (arr_5 [i_5]);
                }
            }
        }
        var_28 += ((+(max((((arr_17 [i_5]) ? var_6 : (arr_26 [i_5] [i_5] [2] [i_5]))), (arr_26 [i_5] [i_5] [6] [i_5])))));
    }
    var_29 = var_4;
    var_30 = -var_11;
    var_31 = (((var_4 ? var_5 : var_3)));
    #pragma endscop
}
