/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = 13615375;
        var_14 = ((((max((((var_3 ? 5 : var_10))), (max(18446744073709551609, 0))))) ? var_12 : (((10200182058574525053 && 2568397910) ? (~var_3) : ((24365624 ? (arr_1 [i_0 + 3] [i_0]) : (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, ((max((((arr_1 [i_0 + 1] [6]) >> (((arr_1 [i_0 + 4] [2]) - 86)))), ((min((arr_1 [i_0 + 1] [8]), (arr_1 [i_0 + 2] [12])))))))));
            arr_5 [i_0 + 3] [i_0] = ((((~(var_11 ^ var_12)))) ? var_9 : (min(var_10, (arr_3 [i_0]))));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_0] = ((~(arr_7 [i_0] [i_0] [i_0])));
                var_16 |= 223;
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_17 = (((((-(arr_13 [i_0 + 1] [i_0])))) ? var_11 : (((arr_11 [i_0 - 1]) << (var_11 - 3659250965)))));
            arr_14 [i_0] [i_0] = ((+(max((-127 - 1), var_10))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 = (arr_15 [i_4]);

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_19 = ((65531 ? 264628297993279196 : 1));
            var_20 = (((((var_12 ? (arr_17 [i_5]) : (arr_16 [i_4])))) >= (arr_15 [i_4])));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 = (((arr_1 [i_6] [i_6]) ? (arr_1 [i_6] [i_6]) : 2108921582));
        var_22 = (max(var_22, ((524287 << (((-2276756971281445687 % 2668166330) + 1245121663))))));
    }
    var_23 = var_0;
    var_24 = (min(var_24, var_2));
    var_25 = (-var_5 ? ((((min(var_12, var_11))) ? (~-3922977258960778830) : var_8)) : ((max(((min(-116, var_8))), (min(1328960363, 146))))));
    var_26 = ((((min((((1 ? 0 : var_4))), ((var_6 ? 6 : 64208))))) ? ((var_12 ? ((var_4 ? 1886348876762646412 : -2773076964070602754)) : (((84 ? 18 : var_9))))) : var_6));
    #pragma endscop
}
