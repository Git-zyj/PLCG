/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((!(((~(-1781024258 % -1781024250)))))))));
    var_11 = (((((~var_0) ? (var_0 | var_4) : (max(var_2, 13)))) + (((1 ? ((var_6 ? 0 : var_1)) : (max(-1573549123, var_0)))))));
    var_12 = 3638221969;
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) / (max(((-2601255381066427149 ? 1781024249 : 7324316586598330858)), ((min((-32767 - 1), var_7)))))));
        var_15 = (min(var_15, (((11021516786609601810 ? 1781024257 : 11021516786609601814)))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [0] = min((((arr_3 [i_1]) ? (arr_1 [i_0]) : (arr_2 [5]))), (min((~9313), (arr_2 [i_0]))));
            var_16 = (min(-1597811916, -120));
            arr_7 [i_0] = ((1781024249 ? ((7425227287099949806 ? 0 : 0)) : 6998816073962708436));
            arr_8 [1] [8] [i_0] = ((var_0 || (!var_2)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = -1123234786;
            arr_12 [i_0] = (max(((((((min(var_6, 83))) + 2147483647)) << (((((((-9223372036854775807 - 1) - (arr_4 [i_0] [i_2]))) + 9223372036854746972)) - 1)))), ((max((((var_6 && (arr_9 [i_0])))), 234)))));
            var_17 = ((((((~9223372036854775807) * 0))) ? 0 : 0));
        }
        var_18 = (~((var_0 ? var_0 : ((-(arr_5 [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        var_19 = ((-32757 <= (var_0 != 830137086)));
        var_20 = (((arr_5 [10]) || (arr_5 [0])));
        var_21 = (arr_15 [i_3 + 2]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = ((-32746 ? (-2147483647 - 1) : (9223372036854775807 + -1643119362)));
        var_22 = (((((((arr_17 [i_4]) * (arr_19 [i_4] [i_4])))) ? ((var_3 ? (-2147483647 - 1) : 403714888)) : -251)));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_23 = ((!(32758 + var_1)));
        var_24 = ((~(((arr_2 [i_5]) + (arr_2 [i_5])))));
        var_25 = ((!((((((~(arr_14 [i_5] [i_5])))) ? (max((arr_23 [i_5]), var_6)) : ((((var_8 != (arr_16 [i_5]))))))))));
        arr_24 [i_5] = (((-2147483647 - 1) ? ((((arr_3 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5])))) : (((arr_3 [1]) ? (arr_3 [i_5]) : (arr_3 [5])))));
        var_26 -= (((54247 ? ((var_3 ? -8089 : (arr_21 [8])) : (33230 + var_3)))));
    }
    #pragma endscop
}
