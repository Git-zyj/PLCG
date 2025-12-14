/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((min((min(var_18, 18074292860778610910)), (((var_9 ? var_6 : 87))))) >= ((((29128 <= var_4) ? var_1 : var_3))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (-88 ? (((!(arr_0 [i_0] [i_0])))) : (((-93 <= ((-111 ? 98 : 9223372036854775807))))));
        var_21 = (((arr_1 [i_0] [i_0]) >= (((arr_0 [i_0] [2]) ^ -101))));
        arr_3 [i_0] [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (((var_2 || (arr_6 [i_0] [i_0]))));
                    var_23 = (min(var_23, (arr_6 [i_0] [i_1])));
                    arr_9 [i_0] [i_1] [i_2] = (!9223372036854775807);
                }
            }
        }
        var_24 = var_16;
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_3] [i_4] [i_4] = ((!(arr_10 [i_3 - 1])));
            arr_17 [i_3] [i_3] = (!(arr_14 [i_3]));
        }
        var_25 |= (((arr_14 [1]) == ((-(min((arr_13 [i_3]), var_15))))));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_26 = 110;
                        var_27 = (!var_11);
                        var_28 += var_4;
                        arr_29 [i_5] [i_5] = (!0);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_29 = ((!(93 / var_7)));
                                arr_35 [i_5] [3] [i_5] [i_9] [i_5] [i_5] = (((arr_31 [i_5] [i_5 + 1] [i_5] [i_5]) ? (-101 != 0) : (arr_31 [i_6] [i_6] [i_6] [i_6])));
                                var_30 = (((((((arr_26 [i_5] [i_6] [i_9] [i_10]) / var_14)) * var_12))) && ((var_6 <= (arr_20 [i_5] [i_5]))));
                                var_31 ^= (arr_21 [i_5] [i_7]);
                            }
                        }
                    }
                }
            }
        }
        var_32 += (((arr_26 [i_5] [20] [i_5 + 1] [i_5]) <= (min((arr_15 [i_5 + 1] [i_5] [i_5 + 1]), (arr_15 [i_5 + 1] [9] [i_5 + 1])))));
        arr_36 [i_5] = ((~(arr_24 [i_5 - 1] [i_5 + 1] [i_5])));
        var_33 *= (arr_33 [16] [12] [i_5] [1] [i_5]);
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        var_34 = (min(var_34, (((4165734599 ? 2203255796 : (arr_24 [i_11] [i_11] [i_11]))))));
        var_35 = (max(var_35, ((min((((8522854117476343377 >= (!-244315150)))), (1582665746 * 12879191448368713083))))));
    }
    var_36 = ((var_5 ? (((max(var_7, 1)))) : var_15));
    #pragma endscop
}
