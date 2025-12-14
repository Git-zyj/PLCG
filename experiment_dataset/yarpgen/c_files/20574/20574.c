/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (~4294967279);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (35118 - var_12) : ((-(arr_1 [i_2] [i_3])))))) ? ((((~(-9223372036854775807 - 1))))) : (min(((-3976064421965254130 ? (arr_0 [i_0] [i_2]) : var_6)), (min((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_3] [i_2])))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_22 = (min((((var_4 ? var_16 : 8))), (!45)));
                                var_23 = ((~(min((arr_0 [i_0] [i_4]), var_18))));
                            }
                            arr_10 [i_0] [i_1] [i_0] [i_0] = ((((((arr_7 [i_0] [i_1]) | (((-(arr_2 [i_0] [i_1] [i_1]))))))) ? (min((arr_0 [16] [16]), (((102 ? 2027590433 : -6698))))) : (65535 > -4269637091067178493)));
                            var_24 -= var_0;
                        }
                    }
                }
                var_25 ^= (min(((((!var_0) ? var_2 : (1595254126 > -75319508)))), (3243 - 18446744073709551603)));
                arr_11 [i_0] [i_0] = ((var_7 | (((arr_7 [i_0] [i_1]) ^ (min(var_9, (arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_26 *= ((!(((((min(var_16, (arr_13 [i_5] [i_6])))) ? var_10 : var_19)))));
                arr_18 [i_5] = (((~(min(30418, 786432)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_24 [i_5] [i_5] = (min((((var_16 ? var_5 : var_9))), (~var_13)));

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                arr_27 [i_5] [i_6] [i_7] [i_8] [i_8] [i_9] [i_6] |= var_3;
                                var_27 &= ((min(var_5, (arr_14 [i_9] [i_9] [i_7]))));
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                var_28 |= min((2109 * var_7), var_15);
                                var_29 = (min((min((max(68719476735, (arr_13 [i_5] [4]))), -16)), ((1 ? 14496399072287982611 : 209))));
                                var_30 |= (max(((~(min(11652851954204255328, var_17)))), ((((~var_9) > 1202282659)))));
                            }
                            for (int i_11 = 0; i_11 < 16;i_11 += 1)
                            {
                                var_31 = (max(var_31, ((1 ? 6673204687907977712 : -5067144409345147786))));
                                var_32 = ((((-(min((arr_12 [i_5] [i_6 - 1]), var_6)))) != ((((((max(var_6, 0)))) / 5849119483252082742)))));
                            }
                        }
                    }
                }
                var_33 = (max(((var_3 ? var_6 : (arr_5 [i_6] [i_6] [i_5]))), (arr_5 [i_5] [i_6 + 1] [i_5])));
            }
        }
    }
    #pragma endscop
}
