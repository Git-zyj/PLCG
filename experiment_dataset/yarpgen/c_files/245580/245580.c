/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 21212;
    var_14 = (min(var_9, ((((-21196 != var_0) && (!var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [11] [1] = (!var_9);
                        var_15 *= ((((!((min(25, var_0))))) ? 129 : ((((min(113, 21212))) ? ((28639 ? -2776828413807670672 : 15230204574618175915)) : var_6))));
                    }
                    var_16 -= ((((min(4294967267, 975122483))) ? (((min(12, 253)))) : (((-15765 + -25891) ? (min(var_1, -25891)) : (max(0, -2776828413807670682))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [3] [i_2] [i_4] [i_5] = (min(var_6, (max(((4236887216 ? var_8 : 11937395304401750749)), (min(32761, var_8))))));
                                arr_19 [i_0] [i_2] [i_2] = 4236887217;
                                arr_20 [i_0] [i_1] [i_1] [2] [1] = (max((min(29, (-9223372036854775807 - 1))), ((var_1 << (var_9 - 3557712295)))));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_6] = ((((-(~0))) != (1 + 45)));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [2] = ((+(min((15 & var_10), var_6))));
                            var_17 = (min(var_17, ((((!9608) ? ((min((var_2 + var_0), (4236887211 % -32)))) : (((max(-1569708248471842401, var_5)) - var_10)))))));
                            var_18 = var_7;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_19 = var_5;
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_1] = (((37623 ? 240 : 58080085)));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, 0));
                            var_21 += var_9;
                            var_22 = (!(var_10 <= var_6));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_23 = ((6509348769307800867 >> (var_3 ^ var_4)));

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_40 [i_11] [i_11] [i_10] [6] [i_1] [6] [i_0] = ((var_8 ? -4897 : var_7));
                            arr_41 [i_0] [i_0] [i_0] [5] [i_11] = var_8;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_24 = (!15);
                            var_25 = var_7;
                        }
                        arr_46 [i_1] [i_2] [i_1] [i_0] = (!1);
                        var_26 = var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_51 [i_0] [i_14] [i_0] [i_13] [i_14] [i_13] [7] = ((var_5 ? (min(var_9, var_0)) : 2288265066));
                                var_27 = (min(((((250 ? var_4 : -16)))), ((6553618910882479412 % ((max(var_6, var_0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
