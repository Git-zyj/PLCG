/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 / var_16) ? ((min(((var_9 ? 10452 : -14593)), var_14))) : ((-(min(19556, var_1)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_10) ? (arr_0 [i_0] [i_0]) : -90));
        arr_3 [i_0] = ((max(45970, (var_8 - -50))));
        var_19 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = (((15190420369151421156 < -66) < var_10));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (min(var_20, 3118967229));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_21 &= 14361071568533204786;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((352846334 ? (513163575 && var_9) : 2098093956));
                                var_22 = (max(127, 32533));
                            }
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_23 = (var_1 * 4085672505176346835);
            arr_24 [i_6] [i_6] [i_6] = (arr_8 [i_1] [i_1] [i_1]);
            var_24 = ((var_7 ? var_13 : -var_15));
        }
        var_25 = (max(var_25, (((((min(1312012366, (arr_11 [i_1] [i_1])))) ? (max((arr_11 [i_1] [i_1]), (arr_11 [i_1] [i_1]))) : 138)))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_26 = var_15;
            var_27 -= ((1811610098 ? (max(var_2, 12827569151458873100)) : 1));
            var_28 = 12651;

            /* vectorizable */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                var_29 = var_3;
                arr_33 [i_8] = (var_14 == 2052278622);
                var_30 = (var_2 ? var_8 : 10371);
                var_31 = (max(var_31, (arr_13 [i_8 - 2] [i_7])));
            }
            /* vectorizable */
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_32 = (min(var_32, (var_16 % var_3)));
                            var_33 = ((-2991 ? -6 : 0));
                            arr_42 [i_11] [i_10] [i_9] [i_7] [i_11] = (1 < 12740354664462764912);
                        }
                    }
                }
                arr_43 [i_1] = var_3;
                var_34 += 199;
                var_35 = (max(var_35, ((((((var_8 ? 444044731 : 4080))) ? var_14 : var_9)))));
            }
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                arr_47 [i_1] [21] [i_12] = (max(((var_6 ? var_3 : (arr_13 [i_12 - 1] [i_7]))), var_10));
                var_36 ^= (!9623919148695025303);
                var_37 = (max(var_37, ((min(var_14, var_3)))));
            }
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_38 *= var_2;
            arr_51 [i_13] [8] [8] = -1;
        }
    }
    var_39 = ((var_13 ? (var_12 == var_15) : var_4));
    var_40 = (~14012);
    #pragma endscop
}
