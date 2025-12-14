/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((((var_10 == (((4318607058284093939 ? var_15 : 1946554192))))))) / ((3552680233 ^ (((-8417 ? var_13 : var_3)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, (14128137015425457688 << 13)));
        var_21 = (max(var_21, var_18));
        var_22 = (min(var_22, (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_23 = (max(var_23, (arr_0 [i_0] [i_0])));
        var_24 *= arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_25 = (max(var_25, (((((((((10413 ? 3240032000600130109 : 471860336))) ? (((arr_5 [i_1]) ? var_9 : 789427808)) : (((var_5 ? 10392 : 9593)))))) ? (arr_4 [i_1]) : 0)))));
        var_26 += (max((max(((var_17 ? (arr_3 [i_1]) : var_9)), -19165)), ((min(1, var_14)))));
    }
    var_27 = var_14;

    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_28 = (max(var_28, (((((min(8192, ((0 ? 17 : (arr_7 [i_2 + 1])))))) ? ((((arr_7 [i_2 - 1]) ^ (arr_7 [i_2 + 1])))) : ((((((arr_7 [12]) / var_16))) ? var_6 : -4294967295)))))));
        var_29 *= -10393;
        var_30 += (((((arr_7 [i_2]) == var_6)) ? ((max(((~(arr_7 [i_2]))), 0))) : ((((max((arr_7 [2]), 58282))) ? var_5 : 9990052018840181990))));
        var_31 -= 9990052018840181990;
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_32 |= var_4;
        var_33 = (min(var_33, (((((min((((var_7 ? var_14 : var_15))), (var_1 - -8079187355534135695)))) ? 13 : 14487354605837386536)))));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_13 [21] |= (((!1) && ((((var_15 / var_8) ? (arr_11 [i_4] [i_4 + 1]) : var_18)))));
        var_34 = (max(var_34, ((max(4318607058284093939, (((57856 ^ -1041536636860641154) ? ((216 ? 7277453804205438546 : 245)) : 198)))))));
        var_35 |= (max((((73 ? (!-966341911) : (arr_9 [i_4 - 2])))), 18446744073709551615));
        arr_14 [i_4 - 1] [i_4] &= (148 ? 404702199510578448 : (arr_8 [i_4]));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] |= (min((min(var_14, (arr_12 [i_5] [i_5]))), ((((4294967287 / var_9) ? (arr_10 [i_5]) : (arr_9 [i_5]))))));
        var_36 = (min(var_36, ((((((3823106958 ? 61423 : -26))) ? var_5 : (arr_15 [i_5] [i_5]))))));
    }
    #pragma endscop
}
