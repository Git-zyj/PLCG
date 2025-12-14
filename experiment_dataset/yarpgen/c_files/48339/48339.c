/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 1;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_1));
                                var_20 -= var_0;
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = 15981407142749474842;
                            }
                        }
                    }
                    var_21 = 1;
                    arr_14 [i_0] [18] [18] [18] = 70368744177600;
                }
                arr_15 [i_1] = 18446673704965374008;
                var_22 = var_13;
            }
        }
    }
    var_23 = 8372224;

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_24 = (min(var_24, 28149));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_25 [i_8] [i_8] [i_8] [i_8] [i_6] [i_7] = var_5;
                        var_25 = 1;
                    }
                }
            }
        }
        var_26 = (max(var_26, var_13));
        arr_26 [i_5] = 37404;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_27 = var_3;

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_28 = 18446744073701179391;
                            var_29 = var_10;
                            arr_39 [i_11] [i_12] [i_11] [i_10] [i_11] = 14645144546062534332;
                        }
                    }
                }
            }
            arr_40 [i_9] [i_9] = 2761499959678259824;
        }
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_50 [i_14] [i_14] [i_15] [i_15] [i_17] [i_15] &= (arr_2 [i_16] [i_14 + 4] [i_9]);
                            arr_51 [i_9] [i_9] [i_14] [i_16] [i_14] = (arr_34 [i_17] [i_16] [i_9]);
                        }
                        var_30 = (max(var_30, -27085));
                    }
                }
            }

            for (int i_18 = 2; i_18 < 10;i_18 += 1)
            {
                arr_54 [i_18] [i_14] [i_18] [i_18] = 15685244114031291791;

                for (int i_19 = 4; i_19 < 8;i_19 += 1)
                {
                    arr_58 [i_9] [i_9] [i_9] [i_9] = 15685244114031291791;

                    for (int i_20 = 0; i_20 < 0;i_20 += 1)
                    {
                        arr_62 [i_9] [i_14] [i_14 - 1] [i_18] [i_19 - 4] [i_20 + 1] = (arr_6 [i_18] [i_18] [i_18] [i_14]);
                        arr_63 [i_9] [i_9] [i_9] [i_19] [i_20] [i_19] = (arr_21 [i_14] [i_14] [i_19] [i_14]);
                        var_31 = 2955;
                        var_32 = (arr_42 [7] [7] [7]);
                    }

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        arr_66 [i_9] [1] [i_21] [i_9] [i_21] [1] = var_11;
                        arr_67 [i_21] [i_9] [i_19] [i_9] [i_14 + 3] [i_9] [i_21] = 8372224;
                    }
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        arr_71 [i_14] [i_14 + 2] [i_14] = 0;
                        var_33 = 1732676717434899474;
                    }
                    arr_72 [i_9] [i_9] [i_9] [i_9] = var_11;
                }
                for (int i_23 = 2; i_23 < 9;i_23 += 1)
                {
                    arr_76 [1] [i_18 - 1] [1] [1] = (arr_61 [i_23] [i_23 + 1] [1] [i_9] [i_9]);
                    arr_77 [i_23] [i_23 + 2] [i_23] [i_23 - 1] [i_23 - 1] = 28771;
                }
            }
            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                arr_81 [7] [i_24] [10] [7] = 14526132487707372432;
                var_34 = 0;
            }
        }
        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {

            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 11;i_28 += 1)
                    {
                        {
                            var_35 -= (arr_31 [i_9]);
                            arr_94 [i_9] [10] [i_26] [i_26] [i_26] = 5729599666505837458;
                            var_36 = var_10;
                        }
                    }
                }
                arr_95 [i_9] [0] [i_26] = (arr_60 [i_26] [1] [i_26] [1] [i_25] [i_9]);
                var_37 = (max(var_37, 8372240));
                var_38 -= 31569;
            }
            arr_96 [i_9] [i_25] [i_25] = 15685244114031291793;
        }
    }
    for (int i_29 = 0; i_29 < 22;i_29 += 1)
    {
        arr_99 [i_29] = 1732676717434899476;
        arr_100 [i_29] = 8006146058460081467;
    }
    var_39 = 59451;
    #pragma endscop
}
