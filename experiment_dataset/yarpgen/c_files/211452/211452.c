/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 = (arr_9 [i_1] [i_1]);
                        var_19 = ((33 ? 32 : 1153959210));
                    }
                }
            }
            var_20 = (((((15213155111865908926 ? 86973558 : 223))) ? 1153959210 : 48));
            var_21 = 221;
        }
        var_22 = (((arr_7 [6] [6]) <= (arr_7 [16] [i_0])));

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_13 [8] [i_0] [i_4] |= (((-127 - 1) != (1153959198 & var_16)));
            arr_14 [i_4] = var_7;
            arr_15 [i_4] [i_4] = ((arr_11 [i_4] [i_4]) ? 9325 : 8);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_23 = ((var_10 - (arr_10 [i_0] [i_0] [i_0])));
            arr_19 [i_0] [i_5] &= var_13;
        }
    }
    var_24 |= ((var_0 ? var_12 : ((((min(var_5, 3649195126488187466))) ? var_13 : var_0))));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        arr_22 [i_6] = 240;

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_25 = -var_7;

            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    arr_30 [i_6] [i_6] [i_8 - 1] [4] [i_9] [i_9 + 1] = (((arr_8 [i_6] [2] [i_8 + 2] [i_6]) ? (((2780 >> (((arr_21 [i_6]) - 8392267380753757114))))) : var_3));
                    arr_31 [i_6] [i_7] = arr_0 [i_8 - 1];
                }
                var_26 = var_16;
                arr_32 [i_6] [i_6] = 15;
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_36 [i_10] [i_7] [i_6] = (241 != 2147483645);
                arr_37 [i_10] [i_6] [i_6 + 1] = var_1;
                var_27 = 128;
            }
            var_28 = ((var_15 ? (((arr_6 [i_7] [i_6] [17] [i_6]) ? (arr_11 [i_6] [i_7]) : (arr_8 [i_6] [i_7] [i_6] [i_6]))) : var_12));
            var_29 = 124;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    {
                        var_30 = var_16;
                        arr_43 [i_6] [11] [i_6] [i_6] = (((((~213) + 2147483647)) >> (((((arr_41 [i_12 - 1] [i_11] [i_6] [i_7] [2]) ? 15934700306429367937 : var_0)) - 15934700306429367911))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_31 |= (arr_16 [i_6] [i_6 + 3] [i_13]);
            arr_46 [i_6] = 10291357823001826346;
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_32 = var_4;
            var_33 = (arr_16 [i_14] [11] [i_6]);
        }

        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            var_34 = ((32742 >= (arr_50 [i_6 + 2])));
            arr_51 [i_15] [i_6] [i_6] = (((var_14 == 26696) ? (arr_27 [i_15] [i_6] [2]) : (arr_6 [i_6 + 1] [i_6] [i_15 + 2] [i_15 + 3])));
            arr_52 [i_6] = ((!(((125 ? var_1 : (arr_10 [i_6] [i_15] [i_15]))))));
        }
        var_35 = ((arr_21 [i_6 - 1]) ? (arr_21 [i_6 - 1]) : (arr_21 [i_6]));
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_36 = (arr_2 [i_16 - 1]);
        var_37 = ((114 ? (((((arr_9 [6] [6]) >= (arr_0 [i_16]))))) : (arr_17 [i_16 + 1])));
    }
    for (int i_17 = 2; i_17 < 15;i_17 += 1) /* same iter space */
    {
        arr_58 [i_17] = 252;

        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
        {
            var_38 = ((~(((arr_3 [i_17 - 1] [i_17 - 2] [i_17 + 1]) ? -2567395362970113205 : (arr_3 [i_17 - 2] [i_17 - 2] [i_17 - 2])))));
            arr_61 [i_17] = ((-(max((((var_4 != (arr_16 [i_17] [i_17] [i_18])))), var_13))));
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
        {
            var_39 = (min((((-127 ? 15934700306429367937 : (arr_8 [i_17 + 1] [i_19] [i_19] [i_17])))), ((((arr_59 [i_17 - 1] [i_17] [i_17]) + (arr_59 [i_17 - 2] [i_17] [i_17]))))));
            var_40 = (min(var_40, ((((((17799128605897392444 == ((var_11 ? 72055395014672384 : -32748)))))) - (~2199022731264)))));
        }

        /* vectorizable */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            var_41 = ((var_4 < (!var_15)));
            var_42 = (((arr_11 [i_17] [i_17 - 2]) / var_8));
            arr_69 [i_17] [i_20] [i_20] = ((!(arr_53 [i_17 - 2])));
            var_43 = ((!(((-2567395362970113206 & (arr_65 [i_20]))))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            var_44 = 221;
            arr_74 [i_17] = ((56 ? -3229459769691876354 : 34359721984));
            arr_75 [i_17] [i_21] [i_21] = (((123 - var_9) > ((var_6 ? -2567395362970113209 : var_9))));
        }
    }
    var_45 = 15;
    #pragma endscop
}
