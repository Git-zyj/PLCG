/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-var_7 < var_6);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_4 [6] [6] |= ((((((((-(arr_0 [i_0])))) ? ((var_6 ? 40838 : 9023765206208169175)) : var_5))) ? (((~(~26179)))) : ((-94 ? (((var_2 ? (arr_3 [i_0]) : (arr_0 [i_0 - 1])))) : 8191))));
            arr_5 [i_0] [i_1] = ((((min((max((arr_3 [i_0]), 94)), (((arr_3 [i_1 - 1]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_0])))))) ? var_1 : (((arr_2 [i_1 - 1] [i_1] [i_1]) & (arr_3 [i_0])))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_11 |= var_5;
            var_12 = (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_13 -= ((-(arr_0 [i_5])));
                            arr_17 [9] [i_3] [i_3] [i_3] [i_3] = ((~(arr_1 [i_3])));
                        }
                    }
                }
            }
            var_14 = var_8;
            var_15 ^= (((!0) ? 94 : (arr_7 [i_0])));
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_30 [i_10] [i_9] [i_7] [i_7 + 1] [i_0] = 0;
                                arr_31 [10] [i_8] [i_9] [i_9] [i_10] [i_10] [i_8] &= (min(((min((arr_28 [i_0] [i_8] [i_0 - 1] [i_0] [i_8] [i_0]), var_8))), ((-(min((arr_21 [i_0] [i_7] [i_8] [i_0]), -3465176528494967195))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_36 [i_0] [i_7] [i_7 - 1] [3] [i_11] [i_11] [i_7] = ((-(arr_23 [i_0] [i_0] [i_0])));
                                arr_37 [i_7] = 0;
                                var_16 |= -7502;
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_17 = ((~(arr_19 [i_7] [i_7 + 1] [i_7])));
                        var_18 = 3576743578;
                        arr_41 [i_7] [i_7] [i_7] [i_13] = -94;
                    }
                    for (int i_14 = 3; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_19 = var_2;
                        var_20 = (i_7 % 2 == zero) ? (((((-(arr_43 [i_7] [i_7 - 1]))) + 4181989522285892827))) : (((((-(arr_43 [i_7] [i_7 - 1]))) - 4181989522285892827)));
                    }
                    for (int i_15 = 3; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_21 -= -1;
                        var_22 = var_9;
                    }
                    arr_49 [i_7] [i_7 + 1] [i_7] = (min((arr_39 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7]), (((var_1 ? -7502 : (arr_2 [i_7 - 1] [i_7] [i_7]))))));
                }
            }
        }
    }
    var_23 = (min(var_23, (((1608920612 != ((((min(var_1, var_2))) ? var_9 : (1 & 94))))))));
    #pragma endscop
}
