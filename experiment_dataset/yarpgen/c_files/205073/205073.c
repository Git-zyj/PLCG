/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 ? var_14 : ((((max(var_12, var_0))) ? ((min(var_15, var_2))) : var_15))));
    var_17 = (((min(((var_7 ? var_15 : var_4)), (((var_13 ? var_5 : var_6))))) ^ (!var_12)));
    var_18 = ((var_15 >> ((((-(~var_9))) - 6594))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [11] [i_1] = (((arr_2 [i_0] [i_0]) ? 0 : -7666906712546494740));
            arr_5 [i_1] [i_1] = (~var_12);
            arr_6 [i_1] = ((((max((((arr_3 [i_0]) ^ var_9)), 6323182887871421417))) ? ((-4426539865919162001 ? (((arr_3 [i_0]) ? (arr_3 [i_1]) : (arr_2 [i_0] [i_1]))) : ((min((arr_3 [i_0]), -1))))) : (((((((arr_3 [i_1]) - (arr_2 [i_0] [i_0])))) ? ((((arr_2 [i_0] [i_0]) <= (arr_2 [i_0] [i_0])))) : ((59297 ? 6252 : (arr_3 [i_0]))))))));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_19 -= (arr_8 [i_0] [i_0] [i_2]);
            var_20 = (((((max((arr_1 [0]), (arr_1 [i_2 - 1]))))) ? ((((-var_14 <= (((6323182887871421416 > (arr_1 [i_0])))))))) : ((((((arr_3 [i_0]) ? -7 : 12123561185838130207))) ? (arr_2 [i_0] [i_2]) : (arr_7 [6] [6])))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 = 0;
            arr_13 [i_0] [i_0] [12] = (((arr_9 [i_0] [i_0]) / ((((arr_8 [i_0] [i_0] [i_0]) ? 6247 : (arr_0 [i_3]))))));
            arr_14 [i_3] = (((12123561185838130199 ? 127 : (arr_10 [2] [i_3] [i_3]))));

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_22 -= ((((((arr_11 [i_0] [18] [i_4]) ? (arr_12 [i_0] [i_0] [i_0]) : (arr_8 [2] [i_3] [i_3])))) ? (((arr_7 [i_4] [i_3]) ? (arr_3 [10]) : (arr_0 [i_3]))) : (arr_17 [i_3] [1] [i_4] [i_3])));
                arr_18 [i_4] = var_6;
            }
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_23 = (((~(-127 - 1))));
                            arr_27 [i_0] [i_5] [i_5 - 1] [i_6] [i_6] = ((arr_24 [i_6] [i_3]) ? (arr_12 [i_5] [i_3] [i_5 + 1]) : (arr_26 [i_7 + 2] [i_3] [i_6]));
                        }
                    }
                }
                var_24 = (((arr_9 [i_0] [i_0]) ? (arr_22 [i_0]) : (arr_25 [i_5 + 1] [i_3] [i_5] [i_0] [i_0])));
            }
        }
        var_25 -= (max((arr_16 [i_0] [i_0] [2] [i_0]), var_8));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = (max((((arr_15 [i_8] [i_8]) ? (arr_22 [16]) : (arr_15 [2] [i_8]))), 1579196249));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = (min(((((((arr_25 [i_8] [i_8] [i_8] [i_9] [i_9]) + (arr_26 [8] [4] [i_9])))) ? (!var_8) : (arr_17 [15] [i_8] [i_8] [i_9]))), ((((max((-9223372036854775807 - 1), (-32767 - 1)))) ? (arr_34 [i_8] [i_9] [i_8]) : (((!(-9223372036854775807 - 1))))))));
            var_27 -= (((((~(max((arr_23 [i_9] [i_8] [17] [17] [i_9] [3]), (arr_34 [i_8] [i_8] [i_8])))))) ? (min((arr_8 [i_8] [i_8] [i_8]), (arr_21 [i_8] [i_8] [i_8] [i_8] [i_9]))) : (((((var_0 ? (arr_16 [i_8] [4] [i_9] [i_9]) : (arr_15 [i_8] [3]))))))));
            arr_36 [i_9] = (((((max(12123561185838130207, (arr_19 [i_8])))) ? ((((arr_23 [i_8] [i_9] [7] [i_9] [1] [i_8]) <= (arr_33 [5] [i_9] [i_9])))) : (arr_1 [i_8]))));
        }
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        var_28 = (max(var_28, var_8));
        arr_41 [i_10] [i_10] = (((max(-9223372036854775778, (arr_1 [i_10 + 1]))) & ((((!(arr_0 [i_10 - 1])))))));
        var_29 = (-(arr_34 [i_10] [13] [i_10 - 2]));
    }
    #pragma endscop
}
