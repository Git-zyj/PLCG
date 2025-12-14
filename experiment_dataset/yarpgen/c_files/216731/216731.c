/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 -= var_13;
                        var_20 = ((var_12 ? (arr_8 [i_0] [i_1] [10]) : (((-2147483647 - 1) / var_1))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_0] = (((arr_4 [i_2 - 2]) >> (2514583136 - 2514583113)));
                            var_21 += ((((var_3 ^ (arr_2 [16]))) - var_16));
                            var_22 = (min(var_22, (arr_2 [i_2 + 2])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((arr_12 [1] [i_3] [i_3] [i_0] [i_1] [i_0]) ? (arr_6 [i_0] [i_3] [i_0]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]));
                            var_24 = (((((var_8 ? var_0 : var_5))) ? 1 : 30786325577728));
                        }
                    }
                }
            }
            var_25 = ((var_2 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : (-9223372036854775807 - 1)));
        }

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_26 = (min(var_26, (arr_5 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_27 ^= var_12;
                        var_28 = (((((-((var_6 << (((arr_3 [i_7]) - 3365))))))) - (min((-32 > var_14), ((217239763 ? (arr_2 [i_6]) : (arr_23 [i_0])))))));
                    }
                }
            }
            var_29 = (max(9223372036854775807, (~-272920799)));
            var_30 = ((-(min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6]), (arr_17 [i_0])))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_31 = (min((arr_24 [i_0] [i_9]), (arr_21 [i_9])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    {
                        var_32 = (-9223372036854775786 != 0);
                        var_33 = ((-(((((((arr_6 [i_0] [i_9] [i_9]) - (arr_0 [i_0])))) || var_16)))));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_34 -= (2164663517184 & 374803734);
                            var_35 = ((!((-15751 == (arr_22 [i_0] [i_11 + 3] [i_0] [i_0])))));
                            var_36 = ((((max(8616381153989210802, (~268435440)))) ? (((((272920799 >= (arr_10 [i_0] [i_0] [i_0] [13] [i_11] [i_12]))) ? 1474036525 : (min((arr_31 [i_0] [i_9] [i_10] [1] [i_0] [i_11 + 4]), var_13))))) : ((((var_4 - (arr_23 [i_0]))) & (arr_12 [i_0] [i_0] [i_10] [i_10] [i_11] [i_12])))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                        {
                            var_37 = (max((-9223372036854775807 - 1), (max(0, ((1 ? 9246289936675548355 : (arr_2 [9])))))));
                            var_38 = var_12;
                            var_39 = ((!(((arr_4 [i_13]) >= (arr_7 [1] [i_9] [i_11] [1])))));
                        }
                    }
                }
            }
        }
        var_40 = (min(var_40, ((min(var_9, var_10)))));
        var_41 = (((arr_20 [i_0] [i_0] [16]) ? (arr_4 [i_0]) : ((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
    {
        var_42 = var_3;
        var_43 = (min(var_43, 9246289936675548369));
    }
    #pragma endscop
}
