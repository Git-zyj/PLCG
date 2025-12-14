/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((14 ? 15 : 53));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 += (((((65503 ? var_2 : -5581727987609301411))) ? (((var_11 ? (arr_0 [i_0]) : var_5))) : (((arr_0 [i_0]) & var_1))));
        var_14 = ((!((var_2 || (arr_1 [i_0])))));
    }
    var_15 &= (min(-var_7, ((((min(var_2, var_6))) * (var_10 == var_4)))));

    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (arr_2 [i_1 + 1])));
        var_17 += (((((((((arr_2 [i_1]) ? var_1 : var_0))) ? (!var_0) : (var_7 & var_7)))) > ((((min(var_8, var_3))) ? (((arr_3 [24] [24]) + var_10)) : (var_5 || var_7)))));
        arr_4 [i_1 + 1] [i_1] = (!var_6);
        arr_5 [12] &= (min(((var_3 ? ((var_6 & (arr_2 [i_1]))) : (-8309 <= -7065746884709013742))), (((!((min(var_10, var_6))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_18 = var_9;
        var_19 = (min(var_19, ((((arr_6 [i_2 + 2]) ? var_11 : (((!(arr_3 [8] [i_2 + 1])))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 ^= ((((var_8 ? var_4 : var_1)) ^ (!var_3)));
        var_21 = (max(var_21, (((((((arr_3 [6] [6]) ? var_11 : var_1))) ? var_4 : (var_6 && var_0))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (min(var_22, ((((-4136208921123440469 * 1) ? (((arr_8 [i_4] [i_4]) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4] [i_4]))) : (((((var_3 % var_2) && (((var_0 + (arr_3 [24] [24])))))))))))));
        var_23 = (((min(((min((arr_6 [i_4]), var_10))), (min(var_2, var_8)))) + var_11));
        arr_13 [i_4] = (-(((((var_1 ? var_2 : (arr_10 [i_4] [i_4])))) ? ((var_4 ? var_1 : var_9)) : (65521 || 65522))));
    }
    #pragma endscop
}
