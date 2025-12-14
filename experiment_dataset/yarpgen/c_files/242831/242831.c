/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (min(((((((arr_1 [i_1] [i_2]) / var_6))) < (3886854864 & -9213454152207778366))), (!3075751423)));
                        var_21 = (((arr_0 [i_1]) + ((var_17 + (arr_0 [i_2])))));
                    }
                }
            }
            arr_9 [i_1] [i_0] = ((-2072705500423350392 ? ((~(arr_2 [i_0]))) : 1));
            arr_10 [i_0] [i_0] = ((~(((arr_3 [i_1]) / (arr_2 [i_1])))));
            arr_11 [i_0] [9] [i_1] = (max((((arr_5 [i_0] [i_1]) ? (arr_5 [i_1] [i_1]) : var_8)), (arr_0 [i_1])));
        }
        arr_12 [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_13 [i_0] = (min((((arr_2 [i_0]) ? 9213454152207778365 : 144115188075855856)), (min(var_4, (arr_2 [i_0])))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] [17] = (max(((36992 ? var_12 : var_3)), ((min((arr_15 [i_4]), (arr_15 [i_4]))))));
        arr_17 [i_4] = ((-126 ? 3755198764 : 5332896822248121961));
        arr_18 [i_4] = (((((var_11 % (arr_14 [i_4] [i_4])))) ? var_16 : (((min((arr_14 [i_4] [i_4]), (arr_15 [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_22 = ((6715841247170143541 ? 35 : 4034503971));
                    var_23 = (((arr_23 [i_4] [i_4] [i_4]) ? (max((max(var_2, (arr_22 [i_4] [i_4]))), (55 | var_19))) : (min((6836742729372910478 & var_9), 0))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 = ((~(max((arr_20 [i_4] [i_5]), -429031884102005887))));
                                arr_28 [i_4] [i_5] [i_6] [i_5] [i_8] = (max(((((((131 ? var_17 : var_17))) || (((~(arr_27 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5]))))))), (~var_3)));
                                var_25 = (((((~(arr_26 [i_5] [i_6])))) ? (var_2 | var_14) : (((+(((arr_26 [14] [i_6]) - var_13)))))));
                                arr_29 [i_4] [i_4] [i_5] [i_4] [i_8] &= (max((((arr_22 [i_4] [i_6]) & ((var_11 ? var_2 : 164)))), (max((((var_18 << (((arr_27 [i_4] [i_5] [i_6] [i_4] [12] [i_8]) - 1329422468))))), ((var_3 ? var_16 : (arr_23 [i_4] [i_5] [i_8])))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_38 [i_10] [i_11] [i_10] [i_11] [i_10] = var_15;
                        var_26 = (min(var_26, (((var_1 ? ((max((arr_24 [i_11] [i_11]), var_19))) : (((arr_33 [15]) ? (arr_22 [i_4] [i_10]) : (max(var_17, (arr_30 [i_4] [i_4] [i_4]))))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            {
                arr_43 [i_13] = (~var_14);
                arr_44 [i_13] &= (arr_33 [i_12]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            {
                                arr_60 [i_15] [10] [i_18] = (((arr_59 [i_14] [i_14] [i_14] [i_14]) ? (arr_54 [i_15] [i_16] [i_17] [0]) : (((125 ? 10889 : 0)))));
                                arr_61 [i_14] [i_14] [i_14] = var_1;
                                arr_62 [i_18] [i_16] [i_16] [4] [i_14] = (max((((~908440426) & (min(0, 126)))), (arr_34 [i_14] [i_15])));
                            }
                        }
                    }
                }
                arr_63 [i_15] = (max(((((min(61, var_15))))), (arr_42 [i_14] [i_15])));
            }
        }
    }
    var_27 &= 18446744073709551615;
    #pragma endscop
}
