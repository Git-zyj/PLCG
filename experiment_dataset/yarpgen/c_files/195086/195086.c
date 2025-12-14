/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((max((!2117420595), ((var_5 ? 0 : 3568388263497582219))))) ? ((((var_12 ? 56 : var_6)) << (var_13 - 147))) : ((var_13 ? var_16 : (!var_7))))))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 ? ((-(max(var_18, var_14)))) : ((((((var_4 ? var_1 : 67))) ? (((!(arr_1 [i_0 + 1])))) : 16128)))));
        var_21 = ((max(-57, ((-107011223 ? -68 : -31511)))) / (arr_1 [i_0 + 2]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 -= (((arr_3 [i_1]) ? (arr_0 [0] [0]) : ((-447605284214308074 ? 49408 : 1))));
        var_23 = ((!(!4294967295)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_24 = (var_2 > 1125831187365888);
            var_25 = (min(var_25, var_11));
            var_26 = var_13;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_27 = var_17;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_28 = (((arr_11 [i_4 + 2] [i_4 - 1] [i_4 + 2]) + var_18));
                            var_29 = ((!(((~(arr_11 [i_1] [i_3] [i_4]))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_30 = ((((max(-1040948873, ((max((arr_1 [i_7]), 24)))))) ? (arr_15 [i_7] [i_7] [i_7]) : ((3072 ? (arr_9 [i_7]) : (arr_9 [i_7])))));
        var_31 = (((~14169) ? (((var_3 ? 10898089751073636604 : 0))) : (arr_10 [i_7] [i_7])));
        var_32 = (min(var_32, (((var_6 ? (!var_5) : (((arr_19 [i_7]) ? 2581007052174309751 : (!-11884))))))));
        var_33 = (+((((arr_5 [i_7]) || 16376))));
        var_34 = -61900;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_35 |= ((!((max((arr_13 [i_8] [i_8] [1] [8]), (arr_13 [i_8] [i_8] [1] [i_8]))))));
        var_36 = ((~(((((max(255, (arr_20 [i_8] [i_8])))) || ((min(var_9, (arr_14 [i_8] [0] [i_8])))))))));
        var_37 ^= (((97 * -32755) != var_3));
    }
    var_38 = (min(var_38, (max((((var_6 == (var_16 && var_10)))), 574698766900027405))));
    #pragma endscop
}
