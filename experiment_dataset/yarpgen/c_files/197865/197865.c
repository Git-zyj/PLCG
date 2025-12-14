/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_15 *= ((((((arr_6 [i_0] [i_1 + 2] [i_2 - 2]) | 0))) ? (min(((((arr_4 [i_0] [i_2]) - 114))), (var_6 - var_2))) : ((((arr_2 [i_0] [i_0]) * var_9)))));
                    var_16 ^= ((64368 ? 64368 : -27197));
                    var_17 = (min(var_17, var_14));
                }
                var_18 = (var_7 + -64393);

                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] = 64364;
                    var_19 += 1627;
                    var_20 = 1176;
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_21 = (max(var_21, (((((arr_4 [i_1 + 2] [i_4]) != (arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_0])))))));
                    var_22 -= (((arr_6 [i_1 + 2] [i_1 - 1] [i_0]) ? -var_14 : ((var_8 - (((64364 ? var_2 : 1172)))))));
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    var_23 |= -16956;
                    var_24 = var_8;
                    var_25 = var_1;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = ((((((~(arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_0])))) ? (var_0 * var_3) : (!64364))));
                    var_27 ^= (!var_9);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_28 += var_12;
                        var_29 -= var_8;

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_30 = ((65535 * ((var_14 ? var_5 : var_8))));
                            arr_23 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] = (((arr_8 [i_1 + 1] [i_1] [i_1] [i_7]) ? 64372 : (arr_8 [i_1 + 2] [i_1 + 2] [i_6] [i_7])));
                            var_31 = (arr_18 [i_0] [i_0] [i_0]);
                            var_32 = (((((1 ? var_10 : 85))) ? (arr_7 [i_0] [i_1 + 3] [i_1 + 3] [i_7]) : (var_12 != var_8)));
                            var_33 = (max(var_33, ((((64368 ? 0 : 64336))))));
                        }
                        var_34 = ((((var_11 ? var_7 : var_5)) / (((-(arr_5 [i_6] [i_6]))))));
                    }

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_35 = (max(var_35, var_7));
                        var_36 += (((((var_7 ? 97027949 : (var_4 + var_14)))) ? (((!(((var_7 * (arr_7 [i_0] [i_0] [i_0] [i_9 - 1]))))))) : ((-(var_4 - 64372)))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (((56775 <= 58020) << ((((-14111 ? 1164 : 642501147)) - 1137))));
                        var_37 = (min(var_37, (!var_13)));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = (2883666066 ^ -25556);
                        var_38 = (max(var_38, (((((((min((arr_19 [14]), 64360)) * -107))) ? ((1176 ? 1041128989 : 134217216)) : ((((arr_20 [i_10] [i_10] [i_6] [22]) & 2626322545))))))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_33 [i_0] = (max(7, 92793946));
                        var_39 = 1;
                        var_40 = ((((((-17338 + var_9) + 64336))) ? (-127 - 1) : ((((arr_5 [i_0] [i_0]) && (21 - var_14))))));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_41 = (min(((((-221852853 <= 92733167) < (!var_12)))), ((65535 ? 64372 : var_13))));
                        var_42 = (~47035);
                        var_43 = ((0 ? 92793946 : -51));
                        var_44 = (min(var_44, ((((((var_4 ? (!1168) : ((((arr_5 [i_12] [i_0]) || var_3)))))) / (var_6 - var_9))))));
                    }
                }
                arr_36 [i_0] = 86;
            }
        }
    }
    var_45 = (min(var_45, ((((((var_0 ? var_5 : var_8))) && ((max((max(var_3, var_6)), var_6))))))));
    #pragma endscop
}
