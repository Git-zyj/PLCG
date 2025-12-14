/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((((((-116 ? 0 : var_5)))) ? (max(((max((arr_7 [i_1]), (arr_2 [i_0])))), (((arr_13 [6] [4] [6] [9] [i_4] [i_0]) ? (arr_9 [i_0] [i_3] [i_0] [i_1] [i_0] [i_0]) : -116)))) : (arr_7 [i_2])));
                                var_14 = (arr_7 [i_4]);
                            }
                        }
                    }
                    var_15 = (min(var_15, 126));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_16 = (arr_21 [5] [5] [5] [i_7 + 2]);
                            var_17 -= (arr_0 [i_6]);
                            var_18 = (min(var_10, ((4095 ? (arr_21 [i_7] [i_7] [i_7 + 1] [i_7 + 3]) : (((arr_5 [i_0] [i_0]) ? (arr_2 [i_6]) : (arr_2 [i_0])))))));
                            var_19 = ((((((arr_14 [i_5 + 1]) ? -9 : ((27 ? (arr_11 [i_5] [i_5] [i_0] [i_5] [1]) : var_10))))) ? (arr_1 [i_7 - 1]) : ((((arr_11 [i_0] [12] [i_0] [i_0] [12]) != 32765)))));
                            var_20 = var_0;
                        }
                        var_21 = (((arr_22 [i_0] [i_5] [i_6] [i_6] [i_0] [i_0] [9]) ? ((min((arr_17 [i_7 + 3] [i_7] [i_5 + 1]), (arr_21 [i_7] [i_7 + 3] [i_5] [i_5 + 1])))) : (arr_17 [i_7] [i_6] [i_6])));
                        var_22 = (min(var_22, (arr_21 [1] [1] [i_6] [1])));
                        var_23 = (var_7 % var_3);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {

                        for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_24 = -32750;
                            var_25 = (arr_26 [i_10] [i_10]);
                        }
                        for (int i_13 = 2; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            var_26 = (((~var_8) ? (max((arr_3 [i_10 - 2] [i_0] [i_10]), 8247789973613279577)) : (arr_12 [i_0] [i_0] [1] [8] [i_13 + 2] [12] [12])));
                            var_27 |= -27;
                        }
                        for (int i_14 = 2; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            var_28 = ((-47 ? ((((var_5 ? var_11 : (arr_34 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [i_0]))) | (arr_7 [i_0]))) : 14577998636577603169));
                            var_29 = arr_0 [i_0];
                        }
                        var_30 = (max((max((((var_8 ? (arr_31 [1] [1] [i_0] [i_11] [i_0] [i_9]) : (arr_12 [i_11] [i_0] [i_10 - 1] [i_9] [i_9] [i_0] [i_0])))), (arr_36 [i_0] [i_11] [i_10] [i_0]))), var_7));
                        var_31 = (((((-32765 ? 1 : var_1))) & -43));
                    }
                }
            }
        }
    }
    var_32 = (-32767 - 1);

    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_33 = 10307289322126734862;
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {
                    {
                        var_34 &= ((((min(1, 1748612704))) ? ((235266425 ? -7568 : (arr_49 [i_15] [i_15] [i_15] [i_16]))) : 60685));
                        var_35 = 1;
                    }
                }
            }
        }
    }
    for (int i_19 = 2; i_19 < 14;i_19 += 1)
    {
        var_36 += (((arr_54 [i_19 - 2]) > ((max(11, 124)))));
        var_37 ^= (max((max(var_11, ((var_10 ? (arr_54 [10]) : 2147483647)))), (max(-var_5, ((97 >> (763628361 - 763628340)))))));
        /* LoopNest 3 */
        for (int i_20 = 3; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    {
                        var_38 = (((arr_61 [i_20 + 1] [i_20 - 3] [i_19 + 2] [i_19 - 1]) ? (((arr_63 [i_20] [i_20]) ? (arr_55 [i_19 - 1]) : (arr_63 [i_20] [i_20]))) : (arr_55 [i_19 - 1])));
                        var_39 = (((((((arr_61 [i_19] [i_20] [0] [0]) != (((arr_65 [11] [i_20]) ? -2515994673564317193 : 1)))))) > (max((arr_63 [i_20] [i_20 - 2]), var_10))));
                        var_40 = ((!(((8192 ? ((68719476728 ? -23661 : 12241596492544812741)) : 1439980511881333936)))));
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        var_41 = (arr_68 [i_23] [i_23]);
        var_42 = (((arr_68 [i_23] [i_23]) ? var_2 : ((17622 ? 3977906604101288927 : -17622))));
    }
    var_43 = var_4;
    #pragma endscop
}
