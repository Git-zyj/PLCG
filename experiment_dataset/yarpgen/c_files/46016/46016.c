/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 ^= (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [7] = (max(((var_4 ? (max((arr_4 [i_1]), 695199893278966922)) : ((((((arr_5 [7]) + 2147483647)) << (var_15 - 1757097929404765596)))))), (((-(arr_0 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 *= (max(((((((arr_2 [i_1]) ? (arr_10 [7] [i_3]) : (arr_0 [i_1] [i_1]))) >= (arr_8 [i_2] [i_2] [i_4])))), (min((((arr_7 [i_1] [i_1] [i_1]) ? var_5 : (arr_12 [i_1] [i_1] [i_1] [i_2] [4] [i_4 + 1]))), ((max(var_4, (arr_4 [i_1]))))))));
                        var_19 = ((arr_0 [i_1] [i_2 + 1]) ? ((9021989237306432995 ? -9021989237306432995 : 1)) : (arr_0 [1] [i_2 - 1]));
                        var_20 = ((!((!(arr_12 [i_1] [i_2] [6] [i_3] [i_4] [i_4 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 = -228000398;
                    var_22 = (arr_16 [i_6] [i_1]);
                    var_23 = ((!(!-268435456)));

                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {
                        arr_22 [i_1] [i_6] [i_1] [i_1] [7] = ((!(arr_14 [i_7 - 4])));
                        var_24 = (arr_17 [i_1]);
                        var_25 = ((~((~(arr_10 [i_7] [i_5 + 1])))));

                        for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_26 *= ((((((min(var_16, 211896902))) ? -228000398 : (arr_4 [i_6])))) ? (((arr_4 [i_5 - 1]) ? -536346624 : (!var_2))) : var_7);
                            var_27 = var_16;
                            var_28 = (max(((((arr_10 [i_7 + 1] [i_7 + 2]) != (arr_10 [i_1] [i_1])))), (((arr_23 [i_6] [i_5 - 3]) ? (arr_23 [i_6] [i_5 - 3]) : (arr_23 [i_6] [i_5 - 3])))));
                        }
                        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_29 = var_3;
                            arr_27 [5] [i_5] [i_6] [i_5] [i_5] [i_5] = (max((arr_20 [i_6] [i_7] [i_9]), ((+((min((arr_9 [i_1]), (arr_12 [6] [0] [6] [i_7 - 1] [i_9] [i_6]))))))));
                            arr_28 [i_6] [8] [i_5] [i_5] [i_6] [i_7] [i_9 - 1] = var_3;
                            var_30 = (((arr_17 [i_5]) & ((((arr_24 [11] [10] [i_6] [i_7 + 1] [i_7 - 1] [i_9] [i_9 - 2]) ? (arr_24 [i_9 - 2] [i_5] [i_5] [7] [i_7 + 1] [i_7] [i_5 - 1]) : (arr_18 [i_1] [i_5] [i_7 - 1] [i_6]))))));
                            var_31 = (min(var_31, (((-(max((((arr_5 [i_6]) ? (arr_4 [i_1]) : var_8)), (!var_12))))))));
                        }
                        for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_10] [i_7] [i_6] [i_6] [i_5] [i_1] = ((((((var_15 ? var_5 : (arr_21 [i_1] [i_5] [i_6] [i_7] [11])))) / (min((arr_11 [i_1] [i_1]), (arr_7 [i_10] [i_7] [i_6]))))) * ((((arr_30 [i_1] [i_7 - 4] [i_10 - 2]) & (arr_26 [i_1] [i_7 - 2] [i_10 - 2] [i_1] [i_5 - 2] [i_6])))));
                            var_32 += (((max(-20261, -9021989237306433007)) > (((((arr_19 [i_5] [i_7 - 3] [i_10] [i_10]) < var_15))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        arr_35 [i_11 + 1] &= ((-((((arr_2 [i_11 + 1]) == (arr_2 [i_11 + 1]))))));
        var_33 &= ((((min((~var_3), (arr_34 [i_11 + 1])))) ? -9021989237306433004 : ((((max(-1627577220414909545, 1))) ? (~1023) : var_9))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 11;i_13 += 1)
            {
                {
                    var_34 = var_9;
                    arr_41 [i_12] [i_12] [i_12] |= (max((!var_13), (((arr_40 [i_11] [i_12] [i_13]) >= (((var_13 >> (var_11 + 6986))))))));
                    var_35 -= ((-(min(49966, 9021989237306433020))));
                }
            }
        }
    }
    var_36 = (min(var_36, (((!((max((var_1 || var_8), (max(var_16, var_7))))))))));
    #pragma endscop
}
