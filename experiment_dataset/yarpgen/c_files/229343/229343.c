/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = -1;

        /* vectorizable */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_14 = ((var_12 || (arr_7 [i_1] [17] [i_0])));
            var_15 -= (32759 ? 6607 : 4294967295);
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_16 = (((((-((min(6607, -36)))))) ? (arr_0 [i_2]) : 58908));
            var_17 |= (max(((1814875478 ? ((28173 ? 1 : 8512908527902354557)) : 32767)), 58908));
        }
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            var_18 = (max(-var_4, (arr_10 [i_3])));
            var_19 = (min(var_19, (((((-(arr_6 [i_3] [i_3 + 2])))) ? (arr_6 [1] [i_3 + 2]) : ((max((arr_12 [i_3] [i_3 + 2] [i_3 + 2]), (arr_3 [i_3] [i_3]))))))));
        }
        var_20 = ((~(((((1 ? 2147483647 : 221))) ? var_12 : (arr_11 [i_0 - 1] [i_0 - 3] [i_0 - 3])))));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((-(min(((var_4 ? var_3 : (arr_16 [1]))), (((32 ? 32665 : 244)))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 = var_4;
            var_22 = (var_5 - var_4);
            var_23 = (min((((6538787530515244523 != (arr_14 [5] [1])))), (max(((((arr_10 [i_4]) ? var_4 : var_6))), (((arr_13 [i_4] [i_5]) ? var_10 : var_7))))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_23 [i_4] = (((((-((var_0 ? (arr_1 [i_4] [i_4]) : var_1))))) == ((((min(var_7, var_11))) ? (arr_20 [i_6] [i_4] [i_4]) : ((4991084169914418618 ? 250 : 2184917752))))));
            var_24 = (((!(((var_8 ? 2147483647 : 1269051477))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_26 [21] [5] = (arr_25 [i_7] [i_7]);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    {
                        var_25 = (((arr_30 [i_9] [i_8] [i_9 + 1] [i_8]) ? (((arr_28 [23] [23]) + (arr_32 [i_8] [i_9]))) : var_0));
                        var_26 = ((-(~var_1)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_27 -= (min(((-var_1 ? ((-126485400 ? -36 : 255)) : ((var_0 ? 6943 : var_6)))), (((max((arr_19 [i_11] [i_11] [i_13]), (arr_8 [7] [7] [i_11])))))));
                    var_28 = ((((((max(var_2, var_8))) && (var_9 & var_7))) ? ((((min(-65, 1042969041))) ? ((-6 ? 3246136866534565530 : 3508654746)) : var_5)) : ((((var_2 && 18446744073709551613) ? var_11 : (arr_38 [1] [0]))))));
                    arr_40 [i_12] = ((!(((max(var_4, var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
