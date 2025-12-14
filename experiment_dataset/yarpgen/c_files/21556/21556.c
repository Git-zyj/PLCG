/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_16 = (max(var_16, (((((((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_1] [1])))) || (((((var_0 ? (arr_6 [6] [i_1] [i_1] [4]) : 23445)) | ((42096 ? 23448 : 42093))))))))));
                    var_17 |= (arr_5 [2] [i_1] [2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (~23436)));
                                arr_14 [i_0] [6] [i_2] [i_3] [1] |= (arr_12 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] |= ((((1 ? var_9 : 42120))));
                                var_19 = (((min(((-(arr_2 [i_0]))), 42082)) > 42092));
                                var_20 += ((((arr_13 [i_2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]) <= (((var_12 + 2147483647) >> (((arr_4 [i_0] [i_3]) + 283568247695043551)))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_5] [1] [i_0] = (1 / 23423);
                        var_21 = ((-23415 ? (!var_4) : (((((23442 ? (arr_5 [1] [i_2] [i_5]) : (arr_7 [i_2] [i_2] [i_1] [i_0])))) ? (arr_16 [i_1] [i_1] [i_1] [i_5]) : (((min(42097, 1))))))));
                        var_22 = (min(var_22, ((((arr_12 [i_5] [i_2] [i_2] [i_1] [i_0]) | ((42112 ? (1 - 1) : (!1))))))));
                        var_23 |= (arr_18 [i_5] [i_1]);
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_24 = (min(var_24, (arr_3 [i_1] [i_2])));
                        var_25 = ((((!(arr_9 [i_6 - 1] [i_6 + 1]))) ? (arr_1 [i_0]) : (arr_20 [i_6] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (((!var_14) + (((arr_0 [i_7]) % (arr_2 [3])))));
                        var_27 |= ((-5300958808893947173 ? (((((arr_5 [i_0] [i_1] [i_7]) == var_7)))) : (((arr_5 [i_1] [i_2] [i_7]) ? (arr_5 [i_7] [i_1] [i_0]) : 3490436593777622209))));
                        var_28 |= (((((var_0 - 23424) ? -27 : (arr_17 [i_0] [i_1] [8] [i_7]))) * (!42135)));
                        var_29 = (arr_3 [i_0] [i_7]);
                    }
                }
                var_30 += (arr_7 [i_1] [i_1] [1] [1]);
                var_31 = (max(var_31, ((((var_2 + 2147483647) >> 1)))));
            }
        }
    }
    var_32 = (min(var_32, (((((((23420 ? var_13 : var_0)) <= var_5)) ? var_7 : var_9)))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] [i_9] = (max((((arr_24 [i_8 + 1]) ? (arr_24 [i_8 + 1]) : (arr_24 [i_8 + 1]))), (((((!(arr_31 [i_8] [i_10] [i_9] [i_8]))) && 23419)))));
                    arr_36 [i_8 - 2] [i_9] [12] [15] |= var_14;
                    var_33 = (min(var_33, var_1));
                    var_34 = (min(var_34, (((((((!42095) ? (((!(arr_24 [i_10])))) : (var_0 && -5300958808893947199)))) ? ((var_8 ? (!var_8) : -5300958808893947198)) : (min((min((arr_31 [i_8] [i_9] [i_8] [i_8]), 42118)), 42118)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            {
                arr_42 [i_11] = (min(((((arr_38 [i_12 + 2]) != (arr_38 [i_12 - 1])))), (arr_38 [i_11 - 1])));
                var_35 = ((23458 << ((((23436 ? 23444 : (arr_41 [i_11 + 1] [i_12 + 1]))) - 23435))));
            }
        }
    }
    #pragma endscop
}
