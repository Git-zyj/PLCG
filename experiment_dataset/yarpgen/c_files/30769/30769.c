/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = -1796113084;
        arr_5 [i_0] [i_0] = arr_1 [i_0];
        arr_6 [i_0] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_5)), (!8132929851930532527)));
    }

    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_11 [i_1] [i_1] = ((-(((arr_7 [i_1 + 2]) << (125 - 124)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_20 [i_3] [i_2] = -var_12;
                        arr_21 [i_3] [i_3] [i_4] [i_4 - 3] [i_4 + 3] [i_4 + 3] = (((arr_7 [i_3]) - 125));
                    }
                }
            }
            arr_22 [5] [i_2] = (((((6647748466160749209 / (arr_2 [i_2])))) ? (arr_7 [i_1 - 2]) : ((((var_10 != (arr_3 [19] [19])))))));
            arr_23 [i_2] [9] = (var_7 + 6647748466160749209);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_5] [i_1] [i_5] = ((15854905620524005612 & (arr_14 [i_1])));
                        arr_35 [i_1] [i_5] [i_1] [i_5] = (((arr_7 [i_1 - 1]) >= (arr_7 [i_1 - 4])));
                        arr_36 [i_1] = var_9;
                        arr_37 [i_7] [i_7] [i_5] [i_5] = 21;
                    }
                }
            }
            arr_38 [i_1] [i_1] [i_5] = var_6;
            arr_39 [12] [12] [i_5] = ((arr_25 [i_1]) ? (arr_7 [i_1]) : var_6);
            arr_40 [i_1] [i_5] = (((arr_15 [i_1 + 2] [i_1 - 2] [i_1 + 2]) < (arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 3])));
        }
        arr_41 [3] = (min(var_5, (arr_8 [i_1])));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_44 [i_8] = (arr_7 [i_8]);
        arr_45 [i_8] [i_8] = ((-(arr_25 [6])));

        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                arr_53 [i_8] [i_8] [i_8] [2] = (min((arr_10 [i_10 - 1]), 2591838453185546004));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_59 [i_8] [i_8] [i_8] = ((67 ? ((min(((((arr_9 [i_10] [i_10]) == var_8))), (arr_56 [i_10 - 1] [i_10 + 1] [i_8])))) : var_13));
                            arr_60 [i_9 + 1] [i_8] [i_8] = 6647748466160749209;
                            arr_61 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = 125;
                            arr_62 [i_8] [1] [6] [6] = max(2822728928, (arr_24 [i_8] [i_8] [i_10]));
                            arr_63 [i_8] [i_8] [i_8] [i_10] [5] [i_8] [4] = (((arr_32 [i_11] [i_10 + 2] [i_11 - 2] [i_9 - 1]) ? var_8 : var_0));
                        }
                    }
                }
                arr_64 [i_8] [i_8] [i_8] [i_8] = (max((min(((min(var_1, var_6))), 1156447791067274323)), 61));

                /* vectorizable */
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    arr_68 [i_13] [i_8] [i_8] [i_8] = 1;
                    arr_69 [i_8] [i_9] [i_8] [i_8] = ((-(arr_32 [i_8] [i_9 + 2] [i_10 + 2] [i_13 - 2])));
                    arr_70 [i_8] = var_6;
                    arr_71 [i_8] [i_9] [i_9] [i_8] = ((-28 & (arr_16 [i_8] [i_8])));
                }
                arr_72 [i_8] [i_8] = (((arr_46 [i_8] [i_8]) ? ((((arr_47 [i_8] [i_8]) ? 675974441 : -27))) : ((((var_5 ? (arr_26 [i_8] [i_8]) : var_13)) / 219))));
            }
            arr_73 [i_8] [i_8] = -28;
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            arr_76 [6] = -402083941;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            arr_85 [i_8] [i_16] [i_15] [i_14] [i_8] = (arr_15 [i_15] [i_14] [i_15]);
                            arr_86 [i_15] [i_15] [i_8] = ((-1889588041 / (arr_83 [i_8] [i_8] [i_17])));
                        }
                    }
                }
            }
            arr_87 [i_8] = (arr_77 [i_8]);
        }
        arr_88 [i_8] = max(((min((min((arr_25 [i_8]), 6647748466160749209)), var_3))), var_12);
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        arr_91 [i_18] = ((-((-(min(var_4, (arr_17 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 18;i_20 += 1)
            {
                {
                    arr_99 [i_18] [i_18] [i_18] = (((arr_15 [i_18] [i_18] [i_18]) ? (min(((max(3617808614, var_0))), var_12)) : (arr_14 [i_18])));

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        arr_104 [i_21] = (-1156447791067274323 <= 127);
                        arr_105 [i_18] = (arr_26 [i_20 - 1] [i_20]);
                    }
                }
            }
        }
    }
    var_14 = 5755299105378808841;
    var_15 = (((((1596183804 ? ((min(-3, -26))) : 1596183804))) % -1156447791067274323));
    #pragma endscop
}
