/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 0;
        arr_3 [13] = (max(((var_10 ? ((1 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0]))), 1214931979));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 += (var_14 / 2508683609335486298);
                        var_20 = (max(var_20, ((((arr_8 [i_0] [i_1] [i_2]) ^ (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_21 = (((((-(arr_5 [i_5] [10] [i_0])))) ? ((((arr_5 [i_0] [i_0] [i_2]) ? var_10 : (arr_5 [i_0] [i_1] [i_5])))) : 28347));
                            var_22 = (max((((((1214931979 ? 31315 : 119))) ? (arr_7 [i_5] [i_5] [i_5]) : (!1))), (((((var_7 ? var_13 : var_6))) ? (var_5 * 1) : (arr_15 [i_0] [i_0])))));
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_5] = ((2508683609335486298 != ((min(var_17, (arr_0 [i_4]))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_23 &= (((arr_15 [i_0] [i_1]) & ((var_10 << (((var_1 != (arr_4 [i_0]))))))));
                            var_24 = 8674141484319756626;
                            var_25 = (min(var_25, var_10));
                            var_26 = ((0 ? 1704927233 : 1704927233));
                            var_27 = var_13;
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_28 &= (max((arr_5 [i_2] [i_1] [i_2]), (min(-var_3, (((arr_11 [i_1] [i_2] [i_2] [i_7 + 2]) ? (arr_0 [i_0]) : 181343388))))));
                            var_29 = 463624594491100124;
                        }
                        var_30 = (((arr_15 [i_0] [i_0]) || (((-(~var_13))))));
                        var_31 = -14547;

                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_8] [i_4] [i_4] [i_2] [i_1] [i_0] = (~63);
                            var_32 = (min(var_32, ((((((69 << ((((15938060464374065318 ? var_9 : (arr_1 [7]))) + 8893338809403372654))))) ? var_8 : ((max(9223372036854775807, var_17))))))));
                            var_33 = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_34 &= (arr_4 [i_4]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_35 = (var_2 <= 1);
                            var_36 = (arr_28 [i_0] [i_0] [i_0] [i_4] [i_9] [i_2]);
                            var_37 = (((arr_23 [i_9] [i_4] [i_2] [i_0]) >> (1214931979 - 1214931953)));
                        }
                    }
                    var_38 = (((((max(0, var_13))) ? (var_6 && 25) : (arr_24 [i_0] [i_2]))));
                    arr_29 [i_0] [i_1] [i_0] [i_2] = 1;
                }
            }
        }
    }
    var_39 = var_17;

    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_40 &= ((((1 ? var_3 : 6884184818223361073)) != 2251791223750656));
        var_41 = ((!((((-9223372036854775807 - 1) * 0)))));
    }
    #pragma endscop
}
