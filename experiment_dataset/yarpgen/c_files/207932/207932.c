/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = var_10;
                arr_5 [i_0] = (~14424);
                arr_6 [i_1 - 1] [i_1] [i_1 - 1] = ((((min((arr_2 [i_1 + 2]), (arr_2 [i_1 - 1])))) ? (((5343658001452914977 ? -5343658001452914978 : ((var_6 ? var_5 : (arr_0 [i_0])))))) : (min(var_7, (var_11 & var_1)))));
            }
        }
    }
    var_16 += -13;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        arr_20 [i_5 - 3] [i_4] [i_4] [i_3] [i_4] [i_2] = ((((-5343658001452914983 ? 10274341605818647629 : 2711929166)) == (var_15 / var_12)));
                        var_17 = ((-((7483989597272983751 ? 3115143287073399087 : 5761744223492620201))));
                        var_18 = (var_14 * 65535);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_7] [i_4] [i_4] [i_4] [i_2] = arr_18 [i_2] [i_4] [i_4] [i_6] [i_4] [i_2];
                            var_19 *= var_11;
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_20 += ((2711929166 && (arr_25 [i_2] [i_3] [i_8 + 1])));
                            var_21 = var_12;
                            arr_29 [i_8 + 1] [i_4] [i_2] [i_4 - 1] [i_3] [i_4] [i_2] = 3115143287073399087;
                            var_22 = (min(var_22, 32762));
                            var_23 = -59335;
                        }
                        var_24 = var_5;
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_25 *= ((min((arr_16 [i_9] [i_9 + 2] [i_9 - 1]), 9614)));

                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            var_26 -= var_0;
                            var_27 = (min(var_27, (((((5652356702469134532 ? (arr_19 [i_2] [i_2] [i_4] [i_9] [i_10 + 1]) : (arr_19 [i_2] [i_2] [i_2] [i_2] [4])))) ? (((max((arr_19 [i_2] [i_2] [i_2] [i_9 + 2] [i_10 + 1]), (arr_19 [i_2] [i_3] [i_4] [i_9] [i_9]))))) : var_9))));
                            arr_34 [i_4] [i_3] = (max((((var_13 + var_4) + 32761)), (((arr_18 [i_2] [i_4] [i_4] [i_9] [i_4 - 1] [i_9]) / (((min((arr_27 [i_4] [i_10]), -16389))))))));
                        }
                        var_28 = min(((5343658001452914982 >> (var_11 - 3068))), (((-32762 ? 59335 : var_0))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_29 = (arr_13 [i_2] [i_3]);
                        var_30 ^= ((((((-(arr_36 [i_2] [i_3] [i_3] [i_4] [i_11]))))) >> 1));
                        var_31 = (min(var_31, 7847826009659596743));
                        var_32 *= ((-32762 || ((((arr_36 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (min(3509114971664330226, 3509114971664330226)) : (((var_10 ? 65535 : -13555))))))));
                    }
                    var_33 = (((arr_33 [i_2] [i_3] [i_4] [i_2] [i_2] [i_4 - 1] [i_4]) ? (((~(arr_32 [i_4] [i_4] [i_4] [i_4] [i_4 - 1])))) : (max(0, 5343658001452914977))));
                }
            }
        }
    }
    #pragma endscop
}
