/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((arr_0 [i_0] [i_0]) ? (1 <= 15169592660607803648) : (((arr_2 [i_0]) ? var_0 : var_14)))) == (max(((var_9 ? (arr_0 [i_0] [i_0]) : var_14)), 168))));
        arr_4 [14] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((arr_2 [i_1]) * 50));
        arr_8 [i_1] [1] = var_10;
        var_15 += ((((((arr_5 [i_1] [i_1]) - 1))) ? (24894 * 52) : 1));
        var_16 &= ((3316226876 ? (arr_1 [i_1] [i_1]) : (!1)));
    }
    var_17 = ((((~((var_10 ? 6856186236543054665 : var_13)))) <= (((4 ? (max(978740419, 24900)) : (((min(var_13, var_13)))))))));
    var_18 |= (min(((var_14 | ((var_1 ? var_14 : 1)))), (~var_4)));
    var_19 = var_8;
    #pragma endscop
}
