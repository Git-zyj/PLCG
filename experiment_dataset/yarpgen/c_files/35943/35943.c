/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = -2068181157;
        var_15 = (min(var_15, var_11));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_16 = 2068181157;
            arr_7 [i_1] = 3241220401;
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = ((-((max(255, 1)))));
        var_18 = (((((!(15 % var_13)))) >= (max((1053746895 <= var_3), 112))));
        arr_12 [i_2] = (((~238) < (((arr_9 [i_2]) ? 1053746891 : var_13))));
    }
    var_19 += ((((!(~3241220401))) || (((var_2 >> (((var_4 - 3241220401) + 6992179727259255948)))))));
    var_20 *= ((var_12 ? var_13 : var_10));

    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_21 = (~-9223372036854775805);
        var_22 ^= ((((max((arr_14 [i_3 - 1]), (arr_14 [i_3 - 1])))) ? ((1053746914 ? (arr_14 [i_3 - 1]) : var_4)) : ((((arr_14 [i_3 - 1]) - 4294967295)))));
        arr_15 [i_3] = var_5;
    }
    #pragma endscop
}
