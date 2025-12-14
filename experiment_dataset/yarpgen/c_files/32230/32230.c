/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((var_16 || (var_15 && var_14)))), (min(var_11, var_2))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_18 ^= ((41700 ? 3920427145 : 1073741824));
            var_19 = ((((((arr_3 [i_0] [i_0] [i_0]) <= (arr_3 [i_0] [i_0] [i_0])))) << ((((((var_6 ? var_0 : (arr_2 [i_0])))) || ((min((arr_3 [i_0] [i_0 - 1] [i_0]), var_9))))))));
            arr_4 [i_0] [18] [i_0] = 0;
            arr_5 [i_0] [i_0] [i_1] = (max(((-var_12 ? (min(var_2, (arr_3 [i_0] [i_0] [i_0]))) : ((((!(arr_1 [9] [2]))))))), (((var_12 && var_14) ? (arr_1 [5] [i_0]) : (((arr_2 [i_0]) ? (arr_3 [i_0 + 2] [i_1 - 1] [i_0]) : var_11))))));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = (((((-((max(var_2, var_11)))))) ? ((min((arr_0 [i_0]), (min(var_1, var_16))))) : (max(var_0, 23860))));
            var_20 = ((var_8 ? ((var_1 / (arr_7 [i_0]))) : ((var_11 ? (arr_6 [i_0] [i_2] [14]) : (arr_6 [i_0] [i_2 + 1] [20])))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [14] [i_0] = (i_0 % 2 == zero) ? (((max((((arr_6 [i_0] [11] [i_0]) | var_2)), (((-787171806 + 2147483647) >> (((arr_7 [i_0]) + 922186248)))))))) : (((max((((arr_6 [i_0] [11] [i_0]) | var_2)), (((-787171806 + 2147483647) >> (((((arr_7 [i_0]) + 922186248)) + 557843567))))))));
            arr_14 [i_0] [i_0] = (~var_16);
        }
        arr_15 [i_0] = (min((min((((var_14 ? (arr_2 [i_0]) : (arr_9 [i_0])))), var_3)), (((~(min(var_13, (arr_8 [i_0]))))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_21 = (min(117440512, 3968213849487892772));
        var_22 -= ((((((-(arr_12 [16] [i_4]))) > 3221225471)) ? (((((41667 ? 973062425 : 9822882284969403971))) ? ((((!(arr_7 [4]))))) : var_0)) : ((min(var_1, ((-(arr_2 [6]))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_22 [i_5] = (!16726933725664719614);
        arr_23 [i_5] = var_8;
        var_23 = (((~var_2) ? ((((arr_19 [i_5]) ? (arr_19 [6]) : var_9))) : (((arr_20 [16]) ? var_15 : var_3))));
    }
    var_24 = (min((max(var_15, (var_13 <= var_16))), (((!(((var_11 ? var_13 : var_10))))))));
    #pragma endscop
}
