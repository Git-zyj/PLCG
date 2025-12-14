/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 ^= (((max(0, (arr_0 [i_0])))));
        var_20 ^= 127;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            var_21 = ((((((arr_1 [i_1] [i_2]) & var_17))) ? (((arr_4 [15]) ? (arr_3 [i_1]) : (arr_5 [i_2]))) : (arr_1 [i_2] [i_1])));
            arr_7 [i_1] [12] &= (arr_5 [i_1]);
        }
        arr_8 [i_1] = (((((min(var_4, var_0)))) ? (((255 ? (arr_5 [i_1]) : 13))) : (((arr_4 [i_1]) + (arr_5 [i_1])))));
        var_22 = (max(var_22, var_16));
        arr_9 [i_1] [i_1] = ((((!(arr_4 [i_1])))));
        var_23 += (max((((((arr_5 [1]) ? var_6 : 42614)) / ((((arr_5 [i_1]) ? 47285 : 37))))), ((min((arr_1 [i_1] [i_1]), ((var_2 ? (arr_5 [i_1]) : var_8)))))));
    }
    var_24 &= (((!((min(-96, var_1))))) ? ((max(var_2, ((65280 >> (9223372036854775801 - 9223372036854775794)))))) : 2937649936);

    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (((((arr_3 [i_3]) <= var_3)) ? var_18 : (arr_10 [i_3])));
        var_25 = (min((min((arr_13 [i_3]), (arr_13 [i_3]))), ((((arr_2 [i_3]) <= ((((!(arr_4 [i_3]))))))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((((var_6 || (((var_5 ? (arr_12 [2]) : var_11))))) ? var_5 : -251));
        var_26 = var_3;
    }
    var_27 = var_1;
    #pragma endscop
}
