/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (var_15 < var_14);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_17 = 2390126445612651873;
            var_18 = (max((((arr_0 [i_0]) + ((var_2 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_6 [3]))))), (((-2390126445612651873 ? 1 : 243)))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_19 = (max((((((arr_10 [i_0 - 1] [i_0] [i_2]) % (arr_4 [i_2]))) % (arr_10 [i_0 - 2] [i_0 + 1] [1]))), 1));
            arr_11 [i_0 - 3] = (((((min(-7638, 12553390353408067095))) ? (-29005 | 10768445321611756791) : (arr_0 [i_0 - 2]))) >> (1424650395 - 1424650332));
            arr_12 [i_0] [i_0] [i_2] = ((-(arr_5 [i_2] [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_3] = (((((101 ? (max(42, 18446744073709551610)) : 2390126445612651873))) ? ((-((-7636 ? 2870316911 : (arr_10 [i_0] [i_0] [i_3]))))) : (!-1424650414)));
            arr_16 [i_0] = (arr_9 [i_0] [i_0]);
            var_20 += -2870316901;
            arr_17 [i_0] [i_0 + 1] [7] = var_3;
            arr_18 [i_0 - 1] = ((((-(!17955221657661084625))) & (131 || 151)));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_21 *= ((~((max((((!(arr_19 [i_0 - 2])))), (arr_0 [1]))))));
            arr_21 [i_0 + 1] = var_9;
            arr_22 [i_4] = (arr_7 [i_4]);
        }
        var_22 = (min(var_22, (((var_2 != (((arr_19 [i_0 - 1]) | (arr_19 [i_0 - 1]))))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_25 [i_5] = (arr_3 [i_5]);
        var_23 *= arr_13 [i_5];
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_28 [i_6] = ((!(arr_26 [i_6])));
        arr_29 [i_6] [i_6] = ((-(arr_26 [i_6])));
        var_24 += var_7;
    }
    #pragma endscop
}
