/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_2] [i_1] = ((((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 2]) < (arr_4 [i_0])))) & ((~(arr_1 [i_1 + 2])))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_3] [i_4] = (arr_2 [i_1]);
                                arr_13 [i_1] [i_1] = ((var_0 >> (((arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]) - 3323079857))));
                            }
                            for (int i_5 = 2; i_5 < 17;i_5 += 1)
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_1 + 1] [i_5] = (min(((min(var_14, 0))), 0));
                                var_20 = (max(var_20, 1));
                                arr_18 [i_1] = 20885;
                                var_21 += var_15;
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_1 - 1] [i_2] [i_1 - 1] [i_1] = (-6 || 7);
                                arr_23 [i_0] [i_0] [i_1] [4] [15] [i_0] [i_0] = min((((-(arr_20 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6])))), (((arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) + (arr_7 [i_1] [i_1 - 1] [i_2] [i_3] [i_6]))));
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                var_22 -= ((((((var_9 | var_0) * (!-3740)))) ? (arr_3 [i_1 + 1] [i_7] [i_7]) : (((var_17 ? (69 && 73) : 0)))));
                                arr_28 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = (min((((((arr_5 [i_2] [i_2] [i_2]) ? var_18 : var_5)))), (arr_21 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_3] [i_7] [i_7])));
                                arr_29 [i_1] [i_1] [i_1] = 1;
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_23 = (max((max(1, -1)), (-4346 & 1)));
                    var_24 = (i_1 % 2 == 0) ? ((min(((((min(280330512, 0)) << ((((min((arr_11 [i_0] [i_0] [i_1] [12] [i_8] [i_1] [i_8]), var_7))) - 29231))))), (((max((arr_8 [i_1]), var_2)) ^ (var_15 / 1711678440)))))) : ((min(((((min(280330512, 0)) << ((((((min((arr_11 [i_0] [i_0] [i_1] [12] [i_8] [i_1] [i_8]), var_7))) - 29231)) + 3412))))), (((max((arr_8 [i_1]), var_2)) ^ (var_15 / 1711678440))))));
                    arr_34 [i_1] = (!8796093022207);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, var_9));
                                var_26 = 1;
                                var_27 = (max(var_27, 4014636783));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_28 &= (2871431548 + 20885);
                                var_29 = (max(var_29, ((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]) / (arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))));
                                var_30 &= (((arr_5 [i_0] [i_0] [i_1 + 2]) ? ((0 ? 0 : 15009286982386132659)) : (20885 <= 7330278743556554101)));
                                var_31 = 16;
                            }
                        }
                    }
                    var_32 += var_4;
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_33 = (arr_1 [i_0]);
                            arr_55 [i_0] [i_1] [i_1] [i_1] [i_14] [i_1] = (((((min(var_17, -1002849616))) ? (arr_3 [i_0] [i_1] [i_0]) : (min(11116465330152997514, (arr_21 [i_0] [i_0] [i_1 + 2] [i_0] [i_14] [8] [i_15]))))));
                            var_34 = (max(var_34, var_18));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
