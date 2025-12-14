/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((var_0 >= var_8), (var_9 - var_9)));
    var_21 |= (min(var_4, var_19));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_22 = var_10;
        arr_3 [i_0] = arr_2 [15];
        var_23 *= (((-11159 + 2147483647) << (((480 == (arr_1 [i_0 + 2]))))));
        var_24 = (((((arr_1 [i_0]) ? ((min(26214, 63400))) : ((((arr_0 [13]) >= 39322))))) * (!9)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = ((var_7 ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_7 [i_1] = 62278;
        arr_8 [i_1] = ((2776980323342952305 ? (arr_0 [i_1]) : (arr_4 [i_1])));
        var_25 |= (arr_1 [21]);
        var_26 = (arr_0 [i_1]);
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_27 = (arr_10 [4] [i_2]);
        var_28 = (min(var_28, (var_7 / var_16)));
        arr_13 [i_2] = 39317;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_17 [i_2] [6] [i_3] &= ((var_7 || (arr_4 [i_2 + 2])));
            arr_18 [i_2] = ((((((14734535736337634280 == (arr_5 [i_2]))))) < -1));
            var_29 = (arr_16 [i_2 + 2]);
        }
        arr_19 [i_2] = (((~var_9) | (((((arr_2 [1]) ? 18446744073709551608 : (arr_12 [3]))) & (((-120 | (arr_1 [i_2]))))))));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] [i_4] = var_6;
        arr_23 [i_4] = (min((((var_4 < (arr_0 [i_4 + 2])))), (max(2, (arr_14 [i_4 - 1] [i_4] [i_4])))));
        arr_24 [i_4] = var_7;
        arr_25 [i_4] = (max((((var_11 & var_10) ^ ((var_10 ? 482 : 1178756810)))), ((((arr_10 [i_4 - 1] [i_4]) >= (arr_10 [i_4 - 1] [i_4]))))));
    }
    var_30 = var_18;
    #pragma endscop
}
