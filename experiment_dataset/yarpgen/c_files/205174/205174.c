/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 56046;
    var_21 = ((((((var_8 + var_12) ? (var_6 < var_6) : (var_2 <= var_13)))) ? (var_12 != var_19) : (((max(var_9, var_9))))));
    var_22 = -0;
    var_23 = (((((26486 ? 0 : 0))) ? (((((min(var_13, var_16))) || var_6))) : ((min((!var_7), (!var_0))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_24 ^= (((max(0, 10496))) ? (((((var_8 ? var_19 : var_18))) ? (1 & 55049) : ((((arr_1 [i_0]) || var_6))))) : ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) == (arr_1 [i_0])))));
        var_25 *= (-(((((var_6 ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? -var_16 : ((min(var_5, var_11))))));
        var_26 = (-((51501002 ? 995752502 : (max(-269880482, 660899437)))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_27 = (((((1 && ((((arr_7 [i_1]) + 24225)))))) >> var_11));
                var_28 = (((arr_5 [i_1]) ? (min(((595 ? var_5 : (arr_8 [i_0] [i_2] [i_2]))), (((arr_7 [11]) + (arr_8 [i_1] [i_1] [i_1]))))) : (~1)));
                arr_9 [i_1] [20] [i_1] [i_1] = (max((((arr_3 [i_1]) << (var_13 || var_4))), (((!(min((arr_2 [i_0]), (arr_3 [i_0]))))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_17 [i_4 - 1] [i_4] [i_4] [i_4] [i_1] [i_0] = (!1);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_29 *= ((~((((~(arr_2 [i_4 - 1]))) & (((arr_3 [i_4 - 1]) ? 0 : (arr_2 [i_4])))))));
                            arr_20 [i_4] [i_4] = ((((max(51501007, 57023)))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_30 = (max(((((((arr_8 [1] [i_1] [i_1]) ? (arr_15 [23]) : (arr_6 [i_4] [i_3] [i_0] [i_6]))) != 47989))), (max(-626722210, (var_9 ^ var_2)))));
                            var_31 = (max((max((~-223315758), ((((arr_19 [i_6] [i_4 + 3] [i_4] [i_4] [i_3] [i_1] [i_0]) != var_0))))), (min((((arr_22 [i_4] [i_4] [i_6] [i_4 + 1] [i_3] [i_0] [i_1]) ? 1 : (arr_10 [i_0] [i_1] [i_4 + 3]))), ((var_14 ? var_9 : (arr_3 [i_1])))))));
                            var_32 *= (((((arr_19 [i_0] [i_1 + 1] [i_1] [i_3] [i_4 - 1] [i_4 + 2] [i_6]) | var_3))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_25 [i_1 + 1] [i_4] [i_3] [i_1] [i_1] = ((((((arr_13 [i_7] [i_4] [i_7] [i_4]) - (arr_21 [13] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? ((var_11 - (arr_23 [i_0] [i_1] [23] [i_3] [i_4 - 1] [i_3]))) : (0 + var_11)));
                            arr_26 [13] [i_4] [i_4] [i_1] [i_0] = ((((55039 ? 609716489 : 269880489))) ? ((269880481 ? var_3 : 1)) : var_14);
                            arr_27 [i_4] = ((arr_11 [i_4 + 3] [i_3] [i_4 + 3] [i_1]) * ((-1 ? var_14 : var_12)));
                            arr_28 [22] [i_0] |= (((var_5 + var_6) ? 1 : ((-1879686927 ? 1 : var_10))));
                        }
                        var_33 = var_15;
                    }
                }
            }
            var_34 &= max(var_17, ((((min((-2147483647 - 1), 1))) ? 17537 : 1)));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = var_6;
        var_35 = ((var_0 + 2147483647) >> ((((arr_18 [2] [5] [2] [5] [i_8]) != (arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
        var_36 = 1567305687;
        var_37 = (3 + var_15);
        var_38 = (min(var_38, ((((~var_0) ? (var_11 <= 1) : (var_2 ^ 1))))));
    }
    #pragma endscop
}
