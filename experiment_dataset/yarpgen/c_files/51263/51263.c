/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 ? (~var_2) : ((max(var_7, var_10))));
    var_12 = ((((min(var_1, var_0))) ? ((max(var_6, var_5))) : var_6));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_14 = ((851983873 == (((59405 ? (arr_0 [i_1 + 1] [i_1 - 1]) : 2179985289)))));
            arr_6 [i_0] = var_4;
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 = (((((var_4 ? (arr_2 [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2 + 1] [i_2 - 1])))) ? (((arr_2 [i_2 + 1] [i_2]) & var_9)) : ((var_7 / (arr_2 [i_2 + 1] [i_2])))));
            arr_11 [i_0] [i_0] = ((-(min((max(var_10, (arr_7 [i_0] [i_2]))), (arr_1 [i_0] [i_2 - 1])))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_16 ^= var_3;
                var_17 = -var_4;
                arr_15 [i_2] [i_2] = (((arr_7 [i_2 + 1] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2]) : (arr_7 [i_2 - 2] [i_2])));
                var_18 = 59405;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] = ((var_7 ? (var_2 / var_5) : (arr_2 [i_2] [i_2 - 1])));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_19 = (((((1095699798 ? 32767 : -1095699799))) ? 12 : ((-12 ? 64 : 1))));

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_20 = (1843539778 ^ -841513282);
                        var_21 = (min(var_21, (!-27559)));
                        var_22 += (((((5801837268747012180 <= (arr_4 [i_2] [7])))) << (((arr_8 [i_2] [i_2 - 1] [i_2 + 1]) + 2534))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_27 [i_4] = (~-30698);
                        var_23 = (~var_1);
                    }
                }
                var_24 *= ((var_9 >> (((var_2 < (arr_12 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_32 [i_0] [i_2] [i_2] [i_0] [1] [0] |= ((((((arr_0 [i_8 - 1] [i_2 - 1]) ? (arr_0 [i_8 - 1] [i_2 - 1]) : (arr_20 [i_2] [i_2 + 1] [i_2 + 1])))) ? var_6 : (((arr_20 [i_2] [i_2 - 1] [i_2 - 2]) ? (arr_0 [i_8 - 1] [i_2 - 1]) : (arr_20 [i_2] [i_2 + 1] [i_2 + 1])))));
                        var_25 = max((((min(var_1, 1)))), (arr_3 [i_2] [3] [i_2]));
                    }
                }
            }
        }
        arr_33 [3] = var_6;
        var_26 = ((+(((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [8] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [3])))));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_27 = (max(25, (((var_0 ? 0 : var_3)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    arr_45 [2] = (((3768163864 ? -4962 : 2147483647)));
                    arr_46 [i_10] [i_10] = ((((max(1, -927081064))) ? 1095699799 : -30270));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            {
                                arr_53 [4] [i_13] [i_12] [i_11] [i_10] = ((!((((var_6 ? var_7 : var_4))))));
                                var_28 = (-85 ? 1 : 511);
                            }
                        }
                    }
                    var_29 = (min(((-7741 ? var_2 : 12)), (~var_0)));
                    var_30 = ((arr_36 [i_10]) ? (((var_5 && (arr_36 [i_10])))) : ((var_8 ? var_0 : var_8)));
                }
            }
        }
    }
    #pragma endscop
}
