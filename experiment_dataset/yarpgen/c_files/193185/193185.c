/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (max((((0 + var_2) ? ((var_8 ? (arr_0 [i_0]) : 0)) : -1929)), -117));
        var_14 = ((((max((~2147483647), ((12 ? 8742963694984518912 : 32755))))) ? 256 : 5395986524219906194));
        var_15 *= (((((~(arr_3 [i_0] [i_0])))) ? (arr_3 [i_0] [4]) : (((!(arr_3 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = ((-5395986524219906194 * (!1207113251412380512)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = ((5395986524219906200 ? 5395986524219906206 : 269));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_18 = (~((var_11 ? (arr_5 [i_1 - 1]) : (arr_6 [i_1 + 1] [i_4 + 3]))));
                                var_19 = (max((((max(5395986524219906187, -74)))), ((max((arr_5 [i_1 - 1]), -5395986524219906187)))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = var_8;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_21 = ((((((arr_12 [i_6] [i_6] [i_6] [i_6 + 1]) | var_4))) && (arr_4 [1])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_22 = (((arr_13 [i_6 + 1] [i_6 - 1] [19] [i_7]) >= (arr_13 [4] [i_6 - 1] [i_8] [i_7])));
                    arr_25 [i_8] [i_8] [i_7] [i_6 + 1] = (arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1]);
                    var_23 |= (arr_23 [i_6 + 1]);
                }
            }
        }
        var_24 = (127 < (~-4824239356932650072));
        var_25 = (max(var_25, (1 >= 13)));
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_26 = (((!(arr_21 [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
        var_27 = ((!((((arr_8 [i_9 - 1]) * (arr_8 [i_9 - 1]))))));
    }
    var_28 = (max(((((max(var_9, 0))) ? var_7 : (var_4 | 13))), ((max((~1), var_8)))));
    var_29 = ((!(((((var_7 ? 9223372036854775807 : var_0)) - var_2)))));

    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        var_30 = ((~(((max(1, 63)) / ((min(1, 5)))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_31 *= (!-271);
                    var_32 = ((max((arr_29 [i_10]), var_2)));
                    var_33 = ((-var_12 ? ((var_2 / (arr_9 [i_10] [i_11 + 1]))) : (1 <= 368)));
                }
            }
        }
        arr_36 [i_10] [i_10] = ((-32767 ? (min((arr_12 [i_10] [i_10] [i_10 + 1] [i_10 + 1]), (-58 % var_7))) : ((((arr_28 [i_10]) ^ (arr_26 [i_10] [i_10]))))));
        var_34 = var_9;
    }
    #pragma endscop
}
