/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((-1 ? (((var_9 ? 61451 : (((61446 <= (arr_4 [i_1] [i_0] [i_0]))))))) : (((((arr_2 [i_0] [18]) ? var_6 : var_5)) * 25))));
                var_12 = ((3901227127 ? 61446 : (((((160 ? 57201 : 61446))) ? (((max(255, 25921)))) : var_5))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_13 = ((61444 ? 65513 : 32838));
                var_14 *= 393740169;
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_15 = ((-((((max((arr_11 [i_4]), var_1))) ? (arr_11 [i_4]) : var_5))));
        arr_12 [i_4] = arr_10 [i_4] [7];
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_16 = var_9;
                        arr_21 [i_4] [i_5 - 1] [i_6] [i_7] = -2069251654;
                        var_17 = ((-(((213 / var_1) ? (~36912) : 4294967270))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_18 *= (((((arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [16]) / var_8))) ? 4294967275 : var_2);
                        var_19 *= ((((((arr_13 [i_8]) ? 34084860461056 : var_5))) ? ((0 ? 4093 : var_6)) : var_8));
                    }
                    var_20 = (min(var_20, 34084860461056));
                    arr_24 [i_4] [i_4] = ((2069251643 ? (((arr_11 [3]) ? 13 : var_1)) : (((var_9 ? 252 : var_10)))));
                }
            }
        }
        var_21 = (min(var_21, -var_3));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_22 *= ((59 == ((-6300394255073445509 ? (arr_27 [i_9] [i_9]) : 149))));
        var_23 = (((min((arr_10 [i_9] [i_9]), 34084860461056)) >> (((((arr_10 [i_9] [i_9]) ? (272845817044059908 | 4294967283) : (arr_10 [i_9] [i_9]))) - 272845820477308893))));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_24 = -1563052446;
        arr_32 [9] = 102;
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        arr_36 [i_11] [i_11 - 1] = (((arr_34 [18]) ? var_5 : 65533));
        var_25 *= -var_6;
        var_26 = -var_8;
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            {
                var_27 = (min((arr_7 [i_13 - 1] [i_13 - 1]), (((((46 ? -6300394255073445509 : var_7))) ? (((var_3 ? var_8 : 89))) : ((6300394255073445497 ? 393740168 : 4))))));
                var_28 = (((((-(((var_7 != (arr_7 [i_13 + 1] [i_12]))))))) ? (-16 == 7162309641295681476) : ((((min(var_8, 4294967283))) ? 127 : (!129061204)))));
                var_29 = (((max(((32838 | (arr_9 [i_12] [i_12]))), var_8)) < (~0)));
            }
        }
    }
    #pragma endscop
}
