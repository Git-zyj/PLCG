/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 248;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (max((~47), ((5 * ((max(var_13, 1)))))));
        arr_4 [i_0] [i_0] = min((((67 | (arr_1 [11])))), var_5);

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_7 [9] [i_1 + 1] [9] = (min(var_1, (((!(((0 ? (arr_3 [i_0 + 3]) : (arr_0 [i_0 - 1])))))))));
            arr_8 [i_0 + 2] [i_0 + 2] = max((((!(var_14 < var_0)))), ((~((max(1, -32742))))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2 - 1] [i_0] [i_0] = var_12;
            arr_12 [i_0] = ((((((arr_3 [i_2 - 1]) % 39))) ? (((((max(var_8, (arr_3 [i_0 + 4])))) ? (var_3 || 17474) : (min(7670138241965744505, var_13))))) : ((((max((arr_3 [12]), 1))) ? var_13 : var_1))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_15 [0] [i_0] = (!var_5);
            var_17 = (min(var_17, ((((arr_13 [12]) ^ ((1 ? (arr_5 [i_0] [i_3]) : 1)))))));
            arr_16 [i_3] [i_0] = ((var_0 ? (arr_0 [i_3 + 1]) : var_1));
            arr_17 [i_0 + 1] [1] [1] |= ((0 != (var_12 * 2669134241413986375)));
        }
        arr_18 [i_0] = 102;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_18 = ((((arr_19 [i_4]) ? var_7 : ((min((arr_19 [i_4]), 1))))));
        var_19 = (min(var_19, (((18446744073709551595 & (((((((var_10 ? (arr_19 [i_4]) : var_7))) || (!1596553610))))))))));
    }
    #pragma endscop
}
