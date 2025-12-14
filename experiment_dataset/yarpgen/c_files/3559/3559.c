/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (55 > 2106599433643312714);
    var_17 = ((var_12 ^ (max(((max(var_15, var_15))), ((var_1 ? var_0 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [6] [i_0] &= (arr_3 [1] [i_0]);
                var_18 = -var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = (max((((26 ? (arr_6 [i_3 - 3]) : var_9))), ((8568905427745902364 >> (arr_16 [i_2] [i_3] [i_2] [i_5])))));
                        var_20 = (14429242554405874639 != 61712);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_22 [i_2] [i_3 - 2] [i_4] [i_4] |= ((1182469298 ? 5 : 343119554));
                        arr_23 [i_2] [i_2] [i_2] = (((arr_16 [i_2] [i_2] [i_4] [i_4]) != (((7490548825391536618 != (!26))))));
                        arr_24 [i_2] [i_3] [11] [i_6] = (max(((((((~(arr_17 [i_6] [i_4] [i_3 - 1] [i_2])))) & (arr_7 [i_3 - 3] [i_3 - 1])))), (min((!-4202), var_1))));
                    }
                    var_21 = (max(((65504 ? 1182469295 : (-2147483647 - 1))), ((((arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) | (arr_15 [i_4] [i_3 - 3] [i_3 + 1] [i_2] [i_4] [i_3 - 2]))))));
                    var_22 = (arr_7 [i_4] [i_4]);
                }

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_23 = (((((max(20605, 27)))) == var_6));
                    var_24 = ((1 * ((((arr_13 [i_2] [i_2] [i_3 + 1]) < (arr_13 [8] [i_3 - 1] [i_3 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_32 [i_9] [i_3] [i_3] [i_3] [i_3] [i_3] = (1023 / 3321216821);
                                arr_33 [i_2] [i_9] [i_7] [i_9] [i_9] = ((7168 ? 1 : 112));
                                var_25 = (max((((145 ? -28193 : 161))), ((((arr_17 [i_2] [i_3 - 2] [i_8] [i_9]) ^ var_1)))));
                                var_26 |= (((-(31 / -6037))));
                                var_27 = ((var_0 ? (((!(((133955584 ? var_10 : var_15)))))) : var_9));
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    var_28 = ((((min(30720, var_1))) ? (arr_36 [i_10] [i_10]) : (min(((var_13 | (arr_17 [i_2] [i_2] [i_2] [i_2]))), -var_15))));
                    arr_37 [i_10] [i_10] [1] = (((((min(1051003565, -133955584)))) ? (-var_4 - var_9) : (1832479132 - 47225)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_29 = (max(var_29, (((((arr_17 [i_12] [i_3] [i_10 - 1] [i_10]) ? (arr_17 [i_2] [i_3 + 1] [i_10 + 3] [i_11]) : var_1))))));
                                arr_45 [i_10] = (max(((min(var_2, 3213))), ((7464802091690462161 ? -4732261 : 194))));
                                var_30 = var_15;
                                var_31 = ((((+((var_11 ? (arr_36 [i_10] [i_10]) : var_2))))) ? ((((-1688360094 || 2) ? ((max(122, 1))) : 126))) : var_0);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    arr_48 [1] [i_3] [i_3] [i_3 - 3] = 2437;
                    var_32 = (arr_10 [i_3] [i_3] [i_2]);
                    var_33 = (((((-449446612292106625 ? 1456170248 : 3321216824))) ? (!var_9) : (-28193 || var_7)));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_34 -= var_9;
                    arr_51 [i_2] [i_14] = (((((arr_42 [i_2] [i_2] [8] [i_3] [2] [i_14]) ? var_0 : (arr_31 [i_2] [i_3] [i_3] [i_2] [i_2]))) < (((var_8 ? var_7 : -28631)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                var_35 = (!var_8);
                var_36 = var_13;
            }
        }
    }
    #pragma endscop
}
