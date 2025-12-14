/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [3]);
        arr_5 [7] = arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_2 ? -var_11 : var_4));
        arr_9 [i_1] [i_1] = ((((-3275 * (((min(var_3, var_2)))))) << (((((!-673359890) ? (0 | 46) : var_11)) + 1520873167))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [2] = (--288230376151580672);
        arr_13 [i_2] = var_7;

        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_2] [i_2] = (min(var_10, (arr_11 [i_2] [i_2])));
            arr_17 [19] [i_2] = ((-15 ? 1 : (((arr_10 [i_3 + 2] [i_3 - 2]) ? (arr_10 [i_3 + 1] [i_3 - 2]) : var_8))));
            arr_18 [i_2] [i_3] [i_3 + 3] = min(var_0, (min((max(var_5, var_12)), ((var_8 ? (arr_11 [i_3] [i_3]) : var_11)))));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_22 [i_2] [i_2] = 1;
            arr_23 [i_4] [i_4] = (((max((arr_14 [i_4 - 2]), (arr_14 [i_2]))) ? (arr_21 [i_4]) : (((-(arr_14 [i_2]))))));
            arr_24 [i_4] = (((arr_20 [i_4] [i_4]) ? 1 : (((-(arr_15 [i_2]))))));
            arr_25 [i_2] [i_4 + 3] [1] = ((!(((~((var_7 ? -3261 : -673359895)))))));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_30 [i_2] [i_2] [i_2] = (min((!3120806611), ((!((max((-9223372036854775807 - 1), (arr_15 [i_5]))))))));
            arr_31 [18] [3] [i_2] = (((((min(var_1, var_6)))) ^ (((arr_20 [i_2] [i_5 - 1]) | 82))));
        }
    }
    var_14 = ((((((var_0 ? var_6 : var_4)) > (~var_12))) ? var_7 : -var_12));
    var_15 = ((((((669492742188912991 == var_12) ? var_3 : (((var_11 + 2147483647) >> (var_12 - 623488966)))))) ? 32755 : var_0));
    var_16 = ((var_4 << (var_12 - 623488974)));
    #pragma endscop
}
