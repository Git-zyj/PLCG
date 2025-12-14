/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] |= (max(0, ((-(!var_2)))));
        var_20 = var_1;
        var_21 = var_2;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_11 [i_3] [i_3] [i_3] = ((((var_3 >> (var_15 + 5032407300386162507))) != (0 & var_12)));
                var_22 = -var_2;
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_2] [i_4] = var_4;

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_5] [14] [i_5] = var_2;
                    var_23 ^= (~var_9);
                    var_24 = (max(var_24, var_0));
                    arr_20 [i_1] [i_5] [i_4] = ((arr_17 [i_2] [i_2 + 1]) + (((arr_6 [i_1] [i_4]) ? var_16 : var_3)));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_25 = (((!var_14) != var_14));
                    arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_12 != var_0);
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_26 &= (((((var_0 ? 23278 : 1))) ? (arr_21 [i_1] [i_1] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_4]) : ((~(arr_18 [i_1] [i_1] [13] [i_1])))));
                    var_27 += var_4;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_31 [i_1] [i_1] [i_2 + 2] [i_2] [i_4] [i_8] &= var_10;
                    arr_32 [16] [16] [i_8] = (((-8 ? 7 : var_13)));
                    var_28 = ((-5857894787108587786 ? -238108437503812292 : -31233));
                }
                arr_33 [20] &= -8;
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_29 = (var_14 + -1);
                            var_30 = ((49831 ? (var_4 && 4883) : (var_18 | var_15)));
                            arr_38 [i_1] [i_2] [i_4] [i_9] [i_2] [i_10] [i_9] = ((var_18 ? var_2 : -var_7));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                var_31 = var_10;
                arr_42 [i_1] [i_2] = (-((var_6 ? var_0 : var_16)));
                var_32 = (6304130346053227310 ? -20 : var_1);
            }
            var_33 = var_12;
            var_34 += (((((var_0 ? var_1 : var_9))) ? var_15 : (arr_21 [i_1] [i_1] [11] [i_2 - 1] [i_2 + 1] [i_2])));
            var_35 = var_4;

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_36 = var_6;
                var_37 = (arr_39 [i_1] [i_1] [10]);
                arr_45 [i_1] [5] [10] [i_12] = var_11;

                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    var_38 = 1;
                    var_39 = (max(var_39, ((((var_17 > -1) ? var_10 : ((var_7 ? (arr_34 [18] [6] [18] [i_12]) : 4294967295)))))));
                }
                for (int i_14 = 2; i_14 < 22;i_14 += 1)
                {
                    var_40 = var_12;
                    var_41 = (1 ? (var_5 >= var_3) : ((var_8 ? 49833 : var_16)));
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_42 = var_15;
                    arr_58 [6] [i_2] [6] [i_15] &= (var_7 == var_3);
                    var_43 *= ((var_16 ? 8 : 5282602088421974439));
                    arr_59 [11] [i_12] [11] [11] &= (60653 ? 8878 : 1701748851259299042);
                }
                var_44 = (max(var_44, ((((((var_16 ? var_15 : var_8))) ? (~var_14) : var_12)))));
            }
        }
        var_45 = min((min(var_2, (arr_56 [i_1] [i_1] [i_1] [i_1] [9] [i_1]))), (min(var_17, 0)));
    }
    var_46 = ((-(!var_2)));
    var_47 *= var_18;
    var_48 |= (!var_13);
    #pragma endscop
}
