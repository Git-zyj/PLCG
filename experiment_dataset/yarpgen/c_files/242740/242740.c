/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 ^= var_10;
                    var_19 = (!((var_4 >= ((max(63, var_0))))));
                }
            }
        }
        arr_11 [i_0] [i_0 - 2] &= ((((max(var_13, var_11))) ? -28 : (((((arr_0 [i_0] [i_0]) ? 31084 : var_11))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] &= (((arr_1 [i_0 - 1] [i_3]) ? var_5 : 11288));
            var_20 = 52347;
            var_21 &= 127;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((!((min(55941, -453))))))));
            arr_17 [i_0] = ((1 ? 97 : 29083));
        }
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_23 = var_6;
        var_24 = ((-30673 ^ (max((arr_7 [10] [10]), var_12))));
        var_25 ^= 104;
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_26 = var_7;
        var_27 = -var_9;
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_28 = ((var_0 >> (((arr_23 [i_7]) ? var_16 : ((max(var_7, var_3)))))));
            var_29 |= (((55299 < 1) ? var_16 : 11272));
            var_30 = (min(-30668, -104));

            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_28 [i_7] [i_7] = (min(27, 26526));
                var_31 ^= var_7;
            }
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                var_32 = ((!(((~(var_3 & -29100))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((!(29088 < -118))))));
                            var_34 = (max(var_34, var_12));
                            var_35 = ((-(arr_33 [12] [i_8 - 1] [i_11 + 2] [i_10 - 2] [i_7])));
                        }
                    }
                }
                arr_35 [2] [i_7] [i_10] = var_12;
            }
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    var_36 = ((((184009806 ? ((30113 ? 28687 : var_6)) : ((min((-127 - 1), var_6))))) * ((max(-453, var_16)))));
                    var_37 = 82;
                }
                for (int i_15 = 3; i_15 < 23;i_15 += 1)
                {
                    arr_45 [i_7] [i_8] [i_13] [i_7] = var_0;

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_38 = (min((-var_1 & var_11), (var_9 >= var_13)));
                        var_39 = (max(var_39, (((var_3 / ((max((min(var_1, var_7)), ((max(var_0, 32767)))))))))));
                        arr_48 [i_7] [i_7] [i_7] [i_13 + 2] [i_15] [i_16] = ((~((max(var_16, var_16)))));
                        var_40 &= (min(28683, 52261));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_52 [i_7] [i_7] [i_7] [i_15] [i_17] = (min(((453 + (arr_38 [i_8 + 3] [i_17]))), var_11));
                        var_41 = (arr_38 [i_7] [i_8 + 3]);
                        arr_53 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [1] = (243 - 36849);
                    }
                }
                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    var_42 = (+-6218);
                    var_43 = 156;
                    var_44 = -14;

                    for (int i_19 = 3; i_19 < 22;i_19 += 1)
                    {
                        arr_60 [i_7] [i_7] = -1;
                        var_45 = (max((var_15 || var_10), 54248));
                        arr_61 [i_7] [11] [11] [i_18 - 1] [i_7] = var_12;
                        arr_62 [i_7] [i_18] [i_13 + 2] [i_8 + 2] [i_8 + 2] [1] [i_7] = ((var_0 << (((min(((max(var_15, (arr_33 [i_7] [i_8 - 1] [i_8 - 1] [i_18 - 1] [i_19])))), (28683 | 5178))) - 29731))));
                    }
                    for (int i_20 = 1; i_20 < 23;i_20 += 1)
                    {
                        var_46 *= ((var_14 ? var_4 : 0));
                        arr_67 [i_8] [i_7] [i_13] [i_8] [i_20 - 1] [i_20] [i_8 + 2] = (~5178);
                    }
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        var_47 = ((!((max(1912373007, 45355)))));
                        arr_70 [i_21] [22] [i_21] &= (max((((36853 ? 52261 : -22981))), (max(5178, 773759969))));
                        var_48 = -30;
                        var_49 = (max(var_49, 1));
                        var_50 = ((36869 ? 1 : 3521207326));
                    }
                    var_51 = ((3939151584 << (42768 - 42742)));
                }
                arr_71 [i_7] [i_8] [i_7] = (arr_40 [i_7] [i_7] [i_8 - 1] [1]);
            }
        }
        for (int i_22 = 1; i_22 < 21;i_22 += 1) /* same iter space */
        {
            var_52 = (max(((max(36869, var_15))), (~58)));
            arr_74 [i_7] [i_7] = (min(((max(65535, var_16))), (var_0 * var_12)));
            var_53 = (min(((-((var_10 ? var_10 : var_15)))), -2275));
        }
        for (int i_23 = 1; i_23 < 21;i_23 += 1) /* same iter space */
        {
            var_54 = 3490795858;
            arr_77 [i_7] = (0 && 3521207336);

            for (int i_24 = 4; i_24 < 22;i_24 += 1)
            {
                var_55 = (((~var_4) * (max(var_10, (((arr_75 [i_7] [i_7] [3]) ? 25 : var_15))))));
                var_56 = (max(var_56, var_6));
                var_57 = (32767 / 210);
            }
        }
        var_58 = var_5;
        arr_80 [i_7] [i_7] = ((var_4 && ((var_5 > (arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] [17])))));
    }
    #pragma endscop
}
