/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 += (((((((var_0 ? 11956317605223477607 : 85)) > var_6))) >= var_7));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (-((((((arr_2 [i_1] [i_1]) ? (arr_1 [i_1]) : 18446744073709551615))) ? ((var_12 | (arr_1 [i_1]))) : var_0)));
            arr_5 [i_0] [i_0] = var_1;
        }
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            var_15 = ((((((arr_2 [i_2 - 4] [i_0]) & ((var_6 ? 90 : var_10))))) ? ((max(110, 110))) : ((((arr_7 [i_0 - 1]) == var_7)))));
            arr_9 [i_0] [i_2] = (arr_0 [i_0]);

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 |= (((arr_3 [i_0 + 1] [i_2]) % (((arr_7 [i_0 - 1]) ? var_2 : (arr_7 [i_0 + 1])))));
                    arr_14 [i_0] [i_2] [i_3] [i_0] = (arr_8 [i_0]);
                }
                arr_15 [i_0] [i_0] [i_3] [i_3] = ((~(((arr_13 [i_2] [i_2 - 4] [i_3] [i_0] [i_2] [i_2]) ? var_0 : (arr_11 [i_0])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_12));
                            arr_22 [i_0] = (max((((!(((var_0 ? 117 : var_3)))))), var_2));
                            var_18 = (((((arr_7 [i_0]) < var_5)) ? (min(var_10, ((var_5 / (arr_10 [i_2] [i_5] [i_6]))))) : var_5));
                            arr_23 [i_0] [i_2] [i_3] [i_5] [i_6] [i_0] = 13933375918883255151;
                            var_19 *= (arr_13 [i_0] [i_2] [i_3] [i_6] [i_6] [i_6]);
                        }
                    }
                }
                var_20 = ((((min((max(var_7, (arr_17 [i_0] [i_2] [i_2] [i_2] [i_3]))), ((((arr_11 [i_0]) >= var_8)))))) ? var_1 : (arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_2 + 1] [i_2])));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_26 [i_2] &= ((~((min((arr_7 [i_0 - 1]), (arr_7 [i_0]))))));
                arr_27 [i_7] [i_0] [i_0] [i_0] = (min((arr_11 [i_0]), (((-((min(var_3, (arr_24 [i_0] [i_2] [i_2] [i_7])))))))));
                arr_28 [i_0] = (arr_0 [i_0]);
            }
            var_21 = ((((((arr_24 [i_0 + 1] [i_2] [i_2] [i_2 - 3]) ^ var_2))) ? (((((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]) < var_1)))) : (((((arr_10 [i_0] [i_0] [i_2]) != var_2)) ? (arr_3 [i_0 + 1] [i_0]) : (var_10 * var_1)))));
            var_22 = (((max((var_9 * 7), ((18446744073709551615 ? 65535 : -115)))) * (arr_25 [i_0] [i_0 - 1] [i_2])));
        }
        var_23 = max((arr_24 [i_0] [i_0] [i_0] [i_0]), (min((arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))));
        var_24 = (min((arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((-(arr_24 [i_0] [i_0] [i_0] [i_0])))));
        var_25 += var_11;
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_26 -= (min((min(var_3, ((var_0 ? 127 : 4513368154826296484)))), ((((var_9 ? var_1 : (arr_10 [i_8] [i_8] [i_8])))))));
        arr_31 [i_8] = (((arr_18 [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8]) >= ((((max((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8])))) ? (arr_12 [i_8] [i_8] [i_8] [i_8]) : (arr_18 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1])))));
        arr_32 [i_8] [i_8] = ((((((((arr_24 [i_8] [i_8] [i_8] [i_8]) ? var_10 : 94))) || (arr_3 [i_8] [i_8]))) ? (((~((min(var_4, var_0)))))) : (arr_11 [i_8])));
        var_27 = var_12;
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((((min(((max(var_9, var_8))), (min((arr_20 [i_9] [i_9] [6] [i_9] [i_9] [i_9] [i_9]), 13933375918883255165))))) ? 13933375918883255151 : var_1)))));
        var_29 = ((((((arr_10 [i_9 + 1] [i_9] [i_9]) * var_6))) >= (min(var_4, (arr_34 [i_9])))));
    }
    var_30 = (var_0 & var_11);
    #pragma endscop
}
