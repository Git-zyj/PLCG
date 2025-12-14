/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!var_16) ? (((max(31, var_14)) ^ (var_6 / 26459))) : (((101 ? (min(26459, var_11)) : 26459))));
    var_18 = ((var_4 ? 479623168 : (min(27875, 42069))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = (~((var_3 >> (3815344128 - 3815344126))));
        var_20 = (min(var_20, 4307175353247157884));
        var_21 = (var_14 && 991267929);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max((((((var_3 ? -2050053395 : 479623168))) ? (((-1089597530 ? 88 : -118))) : (min(18446744073709551615, (arr_0 [i_1] [1]))))), ((((arr_5 [i_1] [7]) + 19)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_22 = (min(((144115188071661568 ? ((((arr_9 [i_1] [i_2] [i_3]) - var_4))) : (16383 / var_5))), (((-144115188071661569 <= 1068752387) ? 479623168 : -144115188071661568))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_23 = (((~191) ? ((((269929633 > 1) ? 86 : ((var_10 ? 2114910206 : 0))))) : (((((var_14 ? -7 : var_13))) ? 154 : (arr_4 [i_4 - 1])))));
                            var_24 = 168;
                            arr_17 [i_1] [i_5] = -0;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_7 - 1] = ((-144115188071661584 == (3537413521 + var_16)));
                    arr_25 [10] [i_6] [i_6] [i_1] = var_7;
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    var_25 ^= 34351;
                    var_26 ^= 92;
                    var_27 = ((~(arr_1 [i_8 + 1])));
                    var_28 = 4025037679;
                    var_29 = (arr_15 [i_8 + 1] [i_8 + 1] [1] [i_8 - 1] [i_8 - 1]);
                }
                arr_28 [i_6] = ((-(arr_8 [i_1])));
                var_30 = (max(var_30, 64149));
                var_31 = (((((var_4 ? -83 : (arr_19 [i_6] [i_2] [i_6] [i_6])))) ? (arr_0 [i_1] [i_1]) : 613086598));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_32 = ((min((arr_27 [i_9] [i_9] [i_9] [i_1]), var_4)));
                var_33 = (max((max((!83), var_16)), (max(((min(var_2, 67))), ((var_5 ? 4025037662 : var_9))))));
            }
            arr_33 [i_1] = (((117 * -101) * 269929634));
            arr_34 [i_1] [i_2] = (min(4025037662, (((max(65535, 2091434137))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_34 = (((arr_18 [i_10] [i_10] [i_10] [i_10]) ? var_9 : 416400906193247015));
        var_35 = (((var_7 | var_15) ^ 4169636798507624188));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_41 [i_11] [i_11] = (min((~var_15), ((((var_14 ? var_1 : var_1)) >> (((min(-8577740096969223820, 53360)) + 8577740096969223871))))));
        arr_42 [9] = 1;
        arr_43 [i_11] = (max((arr_31 [i_11] [i_11] [i_11]), ((((((arr_27 [2] [i_11] [i_11] [i_11]) ? 1012572967 : 3815344143))) ? (-4169636798507624188 / -1947328787084824797) : (arr_23 [i_11] [i_11] [i_11] [i_11])))));
        var_36 = ((!((((arr_21 [i_11] [12] [i_11] [10] [i_11]) ? 4169636798507624188 : 4169636798507624183)))));
    }
    #pragma endscop
}
