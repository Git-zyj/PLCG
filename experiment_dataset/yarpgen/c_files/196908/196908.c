/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((62300 << (3242 - 3231))) ^ var_9)), ((11 + (15 || var_1)))));
    var_16 = ((((((4445 / var_13) ? -4446 : ((4445 ? var_13 : var_5))))) ? (((var_11 >> (((~var_13) - 1330105949))))) : (var_0 * var_13)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((var_10 & (arr_0 [i_0]))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_18 = (max(var_1, var_12));
            var_19 = var_3;
        }
        var_20 = (min(var_20, var_14));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 + 2] [1] |= ((!(arr_6 [i_2] [i_2 - 1])));
        arr_8 [i_2] [i_2] = var_8;
        var_21 = (~-924);
        var_22 = ((((((3866486591 - var_6) & (arr_5 [i_2 + 1] [i_2 + 1])))) ? ((59529 ? (arr_5 [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 - 1] [i_2 - 1]))) : (arr_5 [i_2] [i_2 - 1])));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_23 = (arr_6 [i_3] [i_3]);
        var_24 -= (~((((arr_5 [i_3 + 1] [i_3 - 1]) < (arr_5 [i_3 + 1] [i_3 + 2])))));
        var_25 -= (min(((62300 >> (((arr_11 [8]) + 521313557)))), (((arr_11 [22]) % (arr_11 [1])))));
        var_26 = ((var_10 & ((((arr_9 [i_3]) | (arr_9 [i_3]))))));
        arr_12 [i_3] = var_7;
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 - 1] = (min(var_6, (min(((((arr_14 [i_4]) ? 76 : 91))), (min(134217727, var_1))))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_27 = (min(var_27, ((max((((!(arr_14 [i_5])))), var_13)))));
            var_28 = (max((~1), (arr_11 [i_5])));
            var_29 = (max(var_29, (((-((((arr_17 [i_5] [i_5] [i_5]) && (arr_17 [i_4 + 2] [i_5] [i_5])))))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                {
                    arr_28 [i_4] |= ((+(max((max((arr_11 [i_7]), (arr_15 [i_4]))), (var_3 || var_11)))));
                    arr_29 [i_4 - 1] = ((((((arr_18 [i_4 + 2]) ? (arr_18 [i_4 - 1]) : 0))) ? (min((arr_10 [i_7]), (arr_18 [i_4 + 2]))) : (arr_21 [i_4 - 1] [i_4 + 1] [i_7 + 2])));
                    var_30 = (min((((var_9 >> (((arr_9 [i_7]) - 80))))), 428480726));
                    var_31 = (min(var_31, ((((arr_17 [i_7 - 2] [i_7 + 2] [i_4 + 2]) ? 428480708 : (max(var_7, ((var_2 ? (arr_10 [i_7]) : var_0)))))))));
                }
            }
        }
        var_32 = ((((((arr_20 [i_4 + 2]) ? (arr_20 [i_4 + 2]) : (arr_20 [i_4 + 2])))) ? (max((arr_20 [i_4 + 2]), var_2)) : (arr_20 [i_4 + 2])));
    }
    var_33 = var_9;
    #pragma endscop
}
