/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = (((((-(arr_0 [i_0 + 1])))) <= var_10));
            arr_7 [10] [10] |= arr_5 [i_0] [i_1];
            var_17 |= min(15, -3308873889360086278);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (((max(((-12825 ? (arr_2 [i_0]) : (arr_10 [i_1]))), var_6)) / (((!1) ? 9223372036854775807 : (arr_3 [i_1])))));
                            var_19 |= ((((((arr_5 [i_3 + 1] [i_1 - 1]) ? var_13 : (arr_5 [i_3 + 1] [i_1 - 1])))) ? (((!(arr_11 [i_2] [i_2] [i_2] [i_1 - 1] [i_2])))) : ((((!((max((arr_9 [i_0] [i_0] [i_0 + 2] [i_2]), (arr_3 [i_2]))))))))));
                        }
                        arr_14 [i_1] [i_1] [i_3] = (((!var_13) ? ((+(((-3308873889360086261 + 9223372036854775807) >> (((arr_12 [i_1] [i_3] [i_3] [20] [i_3]) + 4525205389772549069)))))) : var_15));
                        var_20 = -2112915186944558568;
                        var_21 = -7066;
                        var_22 = (((((!(4532 >= -3308873889360086274)))) ^ ((9214364837600034816 ? 32640 : (1 + 1)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_18 [i_5] = var_13;
            arr_19 [1] [1] &= ((((((arr_12 [1] [i_5] [i_5] [i_5] [i_5]) != 1))) << ((((arr_5 [i_0] [i_5]) != -3308873889360086278)))));
            arr_20 [i_5] = (((arr_10 [i_0 + 2]) ? (arr_10 [i_0 + 1]) : (arr_8 [i_5] [i_0] [i_0] [i_5])));
        }
        arr_21 [i_0] = ((arr_2 [i_0]) ? ((288230376149614592 ? (arr_15 [i_0 + 1] [i_0 + 2] [1]) : (arr_15 [i_0 + 1] [1] [0]))) : ((((-8282 && (arr_13 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [6] [i_0] [i_0]))))));
    }
    var_23 = ((((!(0 & var_13)))));
    var_24 = (max(var_24, (var_8 / 1)));
    #pragma endscop
}
