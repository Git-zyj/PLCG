/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_14));
    var_17 = var_4;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = (!1);
        var_19 *= min((((((70368744177664 == (arr_2 [2])))))), (((8402227359992223394 + 93) % (arr_1 [i_0 + 2]))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_20 = ((((arr_7 [i_1 - 1] [i_2 + 1]) ? (arr_3 [14] [9]) : (-13981 + 120))));

            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                arr_10 [i_1] = (min((((arr_3 [i_1] [i_1]) ? (((-(arr_7 [i_3] [i_2])))) : (arr_4 [i_1]))), -45));
                arr_11 [i_1] [i_1] [i_3] = ((!(((-111 ? 0 : 82)))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_4] [i_1] [i_2] [6] = ((~((max((arr_6 [i_1] [i_1 + 1] [21]), (!15397631855543595260))))));
                            arr_18 [2] [i_1] [i_3] [16] [i_3 + 1] = (max((arr_8 [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_1 + 1]), (arr_8 [i_2 - 1] [i_3 + 1] [i_4 + 1] [i_1 - 1])));
                            var_21 = (min((((arr_4 [i_1 - 1]) >> (((arr_4 [i_1 - 1]) - 3237203257412716065)))), 18446744073709551615));
                            var_22 += ((1365346028 ? 4294967295 : -472683995));
                            var_23 = (max(var_23, ((max(-var_10, (((arr_3 [i_4 + 2] [i_1 + 1]) ? (arr_3 [i_5] [i_2 + 1]) : (arr_3 [i_1 + 1] [1]))))))));
                        }
                    }
                }
                var_24 = ((((!((!(arr_3 [i_1] [i_1]))))) || 1073741568));
                arr_19 [i_1] [i_1] [i_1] = (min(((111 ? -1073741569 : 9060160094558501731)), 255));
            }
            var_25 = (max(var_25, ((((arr_14 [12]) ? ((((var_10 ? (arr_15 [i_1] [i_2] [i_2 + 1]) : (arr_6 [2] [i_1 + 1] [2]))))) : (((arr_9 [18]) ? ((0 ? 43 : (arr_16 [i_2] [i_2] [1] [i_1] [1] [i_1] [i_1 + 1]))) : (arr_5 [0] [i_1 - 1] [0]))))))));
        }
        arr_20 [i_1] [i_1] = (arr_14 [i_1]);
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        var_26 |= ((((!(arr_12 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])))));
        var_27 = (arr_0 [i_6 - 3]);
        var_28 += ((284300335 ? ((var_3 ? (arr_12 [i_6] [i_6 - 1] [i_6] [i_6]) : 0)) : ((var_11 / (arr_5 [10] [i_6 - 2] [i_6])))));
        var_29 = (arr_2 [i_6 - 3]);
    }
    #pragma endscop
}
