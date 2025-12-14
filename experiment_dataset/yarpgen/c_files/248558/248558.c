/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = 50600;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_1] [2] = (arr_1 [0]);
                        arr_11 [i_0] [i_0] [6] [i_3] |= (max(((((((50598 ? var_10 : var_11))) >= 4503595332403200))), (max(var_13, (((50598 ? 14936 : var_12)))))));
                    }
                    var_17 = ((((!((max(var_7, (arr_1 [i_0])))))) ? 50598 : (arr_2 [i_2])));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = (((arr_2 [i_0]) ? (min(50598, (arr_4 [i_0]))) : (((-(arr_2 [i_2]))))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_18 &= ((var_2 ? (arr_9 [i_0] [1] [i_4 - 1] [i_0] [4]) : (arr_9 [i_0] [i_1] [i_4 + 1] [i_1] [i_1])));
                    arr_15 [i_0] [i_4] [i_4 - 1] = var_14;
                    var_19 = ((!(arr_3 [i_1] [2] [i_1])));
                    var_20 -= 8972;
                }
                var_21 ^= (-((((((arr_6 [i_1]) ? (arr_4 [i_0]) : (-9223372036854775807 - 1)))) ? (((var_4 ? 127 : (arr_14 [i_0] [i_1])))) : ((-2134038695 ? 0 : (arr_7 [i_0] [i_1] [i_1]))))));
                var_22 = (max(var_22, (((((((4299026035578416259 & var_11) ? (!3656771156) : (min(3368858686, 4092))))) ? (arr_2 [i_0]) : (arr_13 [i_0] [i_1] [i_0] [i_0]))))));
            }
        }
    }

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_23 = (min((((-127 - 1) + 192)), ((~(arr_16 [i_5 + 1])))));
        var_24 = (max((~-2134038695), ((min((arr_16 [i_5]), (arr_16 [i_5 - 2]))))));
        var_25 -= (~14989443442612807723);
        arr_18 [i_5] [i_5] = (((arr_17 [i_5 + 1]) ? (2341216000 > 255) : (min(252, ((var_7 ? (arr_17 [i_5 - 1]) : (arr_17 [i_5])))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((((min((max(-2134038697, -17506)), (arr_21 [i_6])))) || (arr_20 [i_6])));
        arr_23 [i_6] [i_6] = (((((arr_17 [9]) + 2147483647)) << ((((-79 ? (arr_16 [i_6]) : ((0 ? 3217408641775966752 : -1670)))) - 197))));
        var_26 |= (max((arr_19 [i_6]), (((4178220428 ? -19 : -1670)))));
        var_27 = (max(-14951, ((0 << (-80 + 99)))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_28 &= ((1686467172541078407 ? (-1 && 0) : (max((~0), (arr_35 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9])))));
                                arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((min(393216, 3419018386))) ? -9183849812629996452 : (((~(max(2341216000, var_1)))))));
                            }
                        }
                    }
                    var_29 &= (arr_19 [i_7]);
                }
            }
        }
        var_30 = ((-(max((!var_9), (arr_17 [i_7])))));
    }
    var_31 = (max((((!(var_2 & var_2)))), 1953751292));
    #pragma endscop
}
