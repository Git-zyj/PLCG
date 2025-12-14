/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (((((0 ? var_5 : -29989))) ? (7 ^ var_2) : var_1)) : ((7 ? ((7 ? -767 : var_0)) : 771))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [i_0] [i_2]) ? 10 : (arr_1 [i_0] [i_1]))) << (((((arr_2 [i_0]) ? -1 : (arr_4 [i_0]))) + 36))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (-18134 * -5);
                    arr_10 [i_0] [i_0] [i_0] = (((arr_4 [i_1]) ? ((13374 >> (((arr_4 [16]) - 216)))) : 767));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_11 -= (arr_6 [i_3 + 1] [i_3 + 1] [i_3]);
                    var_12 = (max(var_12, (((-2510532276175408624 ? (arr_7 [0] [6] [i_3 - 1]) : var_9)))));
                    arr_13 [i_0] = (((((arr_4 [3]) ? (arr_0 [i_0]) : var_8))) ? (((arr_7 [i_0] [i_0] [i_3 - 1]) ? (arr_1 [i_0] [i_1]) : var_7)) : (-18609 % 2047));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_13 &= 39286;
                    var_14 -= (((((((max((arr_7 [i_1] [4] [i_4]), 10518465226022459788))) ? (min((arr_12 [i_4] [i_1] [2] [2]), (arr_11 [i_0] [15]))) : (arr_5 [i_0] [i_4])))) ? ((max(55, -24948))) : (((((arr_6 [i_0] [i_1] [i_1]) + 2147483647)) >> (-32757 + 32778)))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 = (max(((max((arr_2 [0]), 785))), ((-(arr_15 [i_1] [i_0] [i_4] [i_4 + 1])))));
                        var_16 = 85;
                        arr_19 [i_0] [11] [i_4] [i_0] = ((10553211464604428100 ? (max(((min((arr_3 [i_0]), (arr_3 [i_0])))), (arr_15 [i_0] [i_0] [i_0] [i_1]))) : (((-(((arr_15 [i_0] [i_0] [i_4] [10]) ? -64 : var_3)))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_17 = 511;
                        arr_22 [12] [9] [12] [i_0] [i_6] [1] = (max(55, 767));
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_18 &= 13;
                        var_19 = (max(var_19, ((max((min((((var_4 ? 53872 : -27065))), (min((arr_21 [i_0] [i_4] [i_7]), (arr_11 [i_1] [i_1]))))), (((max(10949496802307857689, 45612)) | (arr_25 [8] [i_1] [i_4] [8] [i_7]))))))));
                    }
                    arr_26 [i_0] = (min((max((((arr_21 [i_1] [i_1] [i_1]) ? 7497247271401693921 : (arr_4 [18]))), ((((arr_5 [i_0] [1]) ? var_2 : (arr_16 [i_0] [i_0] [4] [i_1] [i_4] [i_0])))))), (((~(arr_0 [i_0]))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [i_9] [i_8] [i_9] [2] &= var_6;
                                arr_35 [12] [i_10] [i_8] [i_8] [i_8] &= 3233516469;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_20 &= ((arr_17 [i_12] [i_12] [i_12] [i_12]) | (arr_15 [i_0] [i_12] [i_0] [i_0]));
                                arr_41 [i_0] [i_1] [i_8 + 1] [i_0] [13] = var_0;
                            }
                        }
                    }
                    var_21 = (!(1 > 3233516464));
                }
                var_22 = (max(var_22, (((((min((arr_11 [i_1] [i_0]), (arr_11 [4] [i_0])))) ? (max((arr_37 [i_0] [20]), ((4983509910247193677 | (arr_39 [i_0] [20] [i_0] [i_1] [i_1]))))) : (max((arr_29 [10] [i_1]), (arr_29 [10] [i_1]))))))));
            }
        }
    }
    var_23 = var_7;
    var_24 = (((((-(max(797723405, var_4))))) ? ((var_7 ? ((var_4 ? var_1 : 200041717)) : ((max(6, var_9))))) : var_1));
    var_25 = ((-7 ? 17179867136 : (min(((min(var_0, var_2))), (min(-18611, var_6))))));
    #pragma endscop
}
