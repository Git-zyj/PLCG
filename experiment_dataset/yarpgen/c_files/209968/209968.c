/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((((var_1 << (var_2 + 24317)))) < ((var_12 ? var_7 : var_3))))), ((var_11 - (~var_3)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 2] = ((var_1 ? (min(1, 204278149)) : (((!(arr_6 [i_1]))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 |= (((var_4 < var_1) < (((((var_14 ? var_1 : var_6))) ? (((arr_5 [i_0] [i_1]) ? (arr_5 [i_2] [i_3]) : var_8)) : (((!(arr_11 [i_1 - 1] [i_2] [i_1 - 1] [i_0]))))))));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_18 ^= ((var_12 ? ((135 ? 1886198724 : 0)) : ((((-2036190616 && 3617724377152154319) <= (((arr_11 [i_0] [i_1] [i_2] [i_4 - 1]) ? var_2 : var_14)))))));
                            var_19 = ((-3148910276370484238 + 9223372036854775807) >> ((((((arr_14 [i_0] [i_0] [i_0] [8] [i_4] [i_0]) ? var_1 : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))) ? var_4 : (max((arr_7 [i_0] [i_1] [7] [i_3]), (arr_11 [i_0] [i_1] [i_2] [i_3]))))));
                            arr_15 [i_4] = (arr_6 [i_0]);
                            var_20 = (max(1, 73434269));
                            var_21 = (min(var_13, ((~(((arr_6 [i_0]) & (arr_0 [i_0] [i_0])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 = (((((0 ? 207 : 35262))) ? (var_14 >= var_6) : ((6516651594147823645 ? 200 : 1))));
                        var_23 = (~21);
                        arr_19 [i_0] [i_0] [i_2] [i_1] [i_2] = (var_14 && var_3);
                    }
                    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_23 [1] [i_1] = (((((((var_5 ? var_12 : var_11))) ? (((var_9 < (arr_18 [i_0] [i_0] [i_0] [i_0])))) : 73434269))) + (min(var_11, (var_8 | var_11))));
                        var_24 = ((var_10 ? ((((((var_14 ? var_0 : var_11))) ? (min((arr_18 [i_0] [i_0] [i_0] [i_0]), (arr_20 [16] [i_1 + 1] [i_1] [i_2] [i_6]))) : ((166 ? -6429408075188999550 : 0))))) : (~var_7)));
                        var_25 = 65535;
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] = var_5;
                        var_26 = var_4;
                        arr_28 [i_0] [i_0] [i_0] [12] = (max(((~((var_12 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [4] [i_0]) : var_7)))), ((((var_3 + 9223372036854775807) >> (((max(var_2, (arr_21 [i_1]))) - 660602063)))))));
                    }
                    var_27 = (min((((((var_4 ? var_1 : var_10))) ? ((((arr_21 [i_0]) & var_13))) : ((var_7 ? var_11 : var_6)))), (arr_25 [i_0] [15])));
                    var_28 = (max(var_28, var_0));
                }
            }
        }
        var_29 *= ((((max((((var_9 ? (arr_11 [16] [i_0] [14] [i_0]) : var_4))), -var_3))) ? ((((var_11 ? var_6 : (arr_14 [i_0] [i_0] [i_0] [i_0] [4] [i_0]))) * ((((arr_18 [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_10 [i_0] [i_0] [i_0] [i_0])))))) : (((1 ? -15124 : -3148910276370484239)))));
        var_30 = (arr_25 [1] [i_0]);
    }

    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        arr_32 [i_8] = (((!2625) ? (max(224, 13122851327488576387)) : (((max((arr_8 [i_8 - 1] [i_8]), var_0)) - (((var_4 ? var_14 : (arr_17 [i_8] [i_8] [20] [i_8]))))))));
        var_31 = (max(((-1 ? 1 : 1)), ((min(var_6, var_7)))));
        arr_33 [i_8] = (min(((var_12 ? (((min(var_1, (arr_11 [i_8] [i_8 + 1] [21] [i_8]))))) : ((var_5 ? (arr_12 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [5] [i_8]) : (arr_31 [i_8 + 1]))))), ((min(((min(var_8, var_1))), ((~(arr_24 [i_8] [i_8 - 1] [i_8] [i_8]))))))));
    }
    #pragma endscop
}
