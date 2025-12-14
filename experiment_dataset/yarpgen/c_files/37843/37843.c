/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_19 = 105;
                            var_20 = (((((~((max(23, 23)))))) ? ((max((arr_0 [i_2 + 2] [i_1 - 3]), 247))) : (((arr_1 [i_4 + 1]) & (!81)))));
                            arr_11 [i_2] [i_1 - 1] [i_1] = (max((arr_0 [i_3] [i_1 + 1]), ((var_1 ? (arr_0 [i_1 - 3] [i_1 - 3]) : (arr_0 [i_1] [i_1 - 2])))));
                            var_21 = arr_2 [i_0] [i_1] [i_2];
                        }
                    }
                }
                arr_12 [i_0] [i_1 - 4] [i_1 - 4] [i_2] &= ((var_10 ? ((-(!103))) : (((arr_2 [i_1 - 1] [i_2 + 1] [i_1 - 1]) / ((max(var_7, var_17)))))));
                var_22 = 23;
            }
            var_23 = (min(var_23, ((((((var_6 + (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 4])))) ? (((arr_9 [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 3]) ? (arr_9 [10] [i_1 - 4] [i_1 - 1] [i_1 - 2] [i_1 - 3]) : (arr_9 [10] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]))) : ((253 ? 147 : var_18)))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_24 += 106;
                                arr_22 [i_8] [i_7] [i_6] [i_5] [i_0] &= -var_0;
                                var_25 = ((var_12 ? 154 : ((123 ? (arr_10 [i_6 - 1] [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6 - 1]) : 88))));
                                var_26 = ((var_3 * ((~(arr_14 [i_6 + 3] [i_6 - 1])))));
                                var_27 = var_14;
                            }
                        }
                    }
                    var_28 &= var_2;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        var_29 = (((((arr_28 [0] [i_9] [i_0] [i_0]) <= ((230 ? var_1 : 117)))) ? (((arr_4 [3]) ? (arr_1 [i_0]) : (arr_20 [i_11 - 2] [0]))) : ((max(38, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_30 = (min(var_30, (((15 ? ((117 ? 60 : 208)) : ((155 & (69 >> 18))))))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_31 = -var_6;
        var_32 = -145;
        arr_31 [i_12] &= arr_14 [i_12] [i_12];
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    var_33 -= (~120);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_34 = ((48 ? 5 : 11));
                                arr_44 [i_13] [i_13] [i_13] = ((-(((arr_40 [i_17] [i_16] [i_13] [i_13]) ? ((min(var_12, 122))) : 149))));
                            }
                        }
                    }
                    var_35 += (max(var_2, ((~(var_10 / 147)))));
                }
            }
        }
        var_36 = (min((arr_28 [i_13] [i_13] [i_13] [i_13]), var_7));
        arr_45 [i_13] [i_13] = (max(((-(((arr_29 [i_13] [i_13]) ? 37 : 42)))), -252));
    }
    var_37 = var_15;
    var_38 = 120;
    #pragma endscop
}
