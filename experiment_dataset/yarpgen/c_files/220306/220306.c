/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= min(-var_0, (((!(((var_3 ? 12527892252913616115 : (arr_5 [i_0] [i_0] [21]))))))));
                var_15 += (min(12527892252913616115, 9223372036854775806));
                var_16 = (((((~((var_10 ? (arr_1 [i_1]) : var_1))))) || ((((arr_1 [i_1]) / (arr_1 [i_1]))))));
                var_17 = ((~(((max(var_4, var_7))))));
            }
        }
    }
    var_18 = ((var_6 ? (((var_9 / 65535) + var_8)) : ((min(var_8, var_6)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (max(var_19, ((((arr_5 [i_2] [i_2] [i_2]) ? (arr_5 [i_2] [i_2] [i_2]) : (arr_5 [5] [i_2] [i_2]))))));
        var_20 = (min(var_20, (((((var_6 ? var_6 : var_14))) <= (arr_8 [i_2])))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_2] [i_2] = var_7;
            var_21 = ((60560 >> (27109 - 27092)));
            var_22 = (52624 == 2147483647);
            arr_12 [13] = ((!(((~(arr_1 [i_2]))))));
            var_23 = ((((((arr_8 [i_2]) >> (-23 + 24)))) ? var_14 : var_11));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_2] [i_2] [i_4] = (((((!(arr_15 [i_2])))) + var_12));
            arr_17 [i_2] [1] [4] = (((arr_0 [i_4] [i_2]) / (arr_8 [i_2])));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_21 [i_4] [i_5] [i_5] = (((arr_10 [i_2]) ? var_8 : 2147483647));
                var_24 += ((~(arr_20 [i_2] [i_2] [i_2])));
                var_25 = ((arr_10 [i_2]) + var_8);
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_2] = ((((var_8 ? (arr_8 [i_6]) : (arr_4 [i_6] [11]))) << (arr_15 [i_2])));
            var_26 = (min(var_26, var_7));
            arr_25 [i_2] [i_6] &= (arr_19 [i_2] [i_6] [4]);
            arr_26 [i_6] [i_2] = (var_0 < var_6);
            var_27 = (((arr_9 [i_6]) ? (arr_9 [i_6]) : (arr_9 [i_6])));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_28 &= (var_5 == var_14);
            var_29 = 38457;
        }
    }
    var_30 = (max(7242981546307813150, (var_0 | var_14)));
    var_31 = ((var_12 || (((!1) && var_8))));
    #pragma endscop
}
