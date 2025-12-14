/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_10 = (var_2 ? var_5 : (arr_0 [i_0] [i_0 + 1]));
        arr_4 [i_0] = ((((arr_2 [i_0] [i_0 - 1]) > (arr_3 [i_0]))) ? (max((arr_2 [i_0] [i_0 - 2]), var_0)) : ((max((arr_3 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((!((((arr_6 [i_1 - 1] [i_1]) ? (arr_6 [i_1 + 4] [i_1 + 4]) : (arr_6 [i_1 - 1] [i_1]))))));
        var_11 = ((((~(arr_5 [i_1 + 1] [22]))) * ((-1237497274 ? (arr_5 [i_1 + 4] [i_1 + 4]) : (arr_5 [i_1 - 1] [i_1 - 2])))));
        arr_8 [i_1] [8] = -4612;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                {
                    var_12 += var_7;
                    var_13 *= ((~((min((arr_11 [i_3] [i_1 + 4] [i_3]), (arr_13 [i_1]))))));
                    var_14 &= (arr_13 [i_3]);
                }
            }
        }
        arr_15 [i_1] [i_1] = ((((((arr_11 [i_1] [i_1 - 1] [i_1 - 2]) && (arr_11 [i_1] [i_1 - 1] [i_1 - 1])))) | (((arr_11 [i_1] [i_1 - 2] [i_1 + 1]) ? (arr_11 [i_1] [i_1 - 1] [i_1 - 2]) : (arr_11 [i_1] [i_1 + 2] [i_1 + 3])))));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_15 = ((-((((var_3 ? var_8 : (arr_10 [i_4] [i_4]))) >> ((((var_5 ? (arr_13 [i_4]) : var_5)) - 56))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_27 [i_4 - 1] [i_4 - 1] [i_6] [i_7] = var_6;

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_16 ^= (max(((~((-41 ? var_3 : (arr_13 [i_8]))))), (max((((arr_10 [i_8] [i_7]) / var_3)), (((arr_28 [i_4] [i_4] [i_4 + 1] [i_4]) ^ var_2))))));
                            arr_30 [i_4] [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_7 + 1] = arr_14 [i_4] [i_4] [i_4];
                            arr_31 [i_8] [i_7] [i_7 - 1] [i_6] [i_5] [i_4] = var_6;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_36 [i_9] = (arr_18 [i_4] [i_6] [i_9]);
                            var_17 = ((var_9 / (((arr_11 [i_9] [i_5] [i_6]) ? -1 : var_9))));
                        }
                        var_18 -= (((!0) && (arr_22 [i_4] [i_4] [i_4] [6])));
                    }
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = (-var_5 && ((min(var_5, ((var_0 ? 13445198872055596679 : -69))))));
    var_21 = ((min(var_8, ((min(var_1, 2055155537))))));
    #pragma endscop
}
