/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [20] [i_0]) ? var_13 : (arr_0 [i_0])))) ? var_12 : ((((arr_0 [i_0]) ^ var_16)))));
        var_19 = (min((((arr_0 [i_0]) ? (min(255, 14431527212994876676)) : (~4015216860714674939))), var_1));
        var_20 = (((((((-2097171706837573487 ? (arr_1 [i_0] [i_0]) : 767)) + var_1))) ? (((var_2 > (((580294938 ? (arr_1 [2] [4]) : 93)))))) : (((14431527212994876676 < 32749) ? (~0) : var_13))));
        var_21 = (min((arr_0 [i_0]), (((arr_1 [i_0] [i_0]) ? -var_0 : ((((arr_1 [i_0] [i_0]) ? 1 : (arr_0 [i_0]))))))));
        var_22 = (max(var_22, -1205186549161443438));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = -12246;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_23 = (((arr_3 [i_1] [i_2]) > (arr_0 [i_1])));
            var_24 -= -1;
            var_25 = ((var_8 ? (arr_0 [i_2]) : var_7));
            var_26 += (arr_1 [i_2] [i_1]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] = var_6;
            var_27 &= (max((arr_10 [i_1] [1] [i_3]), (!var_17)));
            var_28 = ((-(((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_3])))));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_29 = (min(var_29, ((!((max(-7, (arr_0 [i_3]))))))));
                var_30 = (arr_13 [1] [1]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_31 += (((arr_6 [i_3]) ? (arr_15 [3] [4]) : (arr_14 [7] [i_3] [17] [i_1])));

                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_32 *= (arr_0 [5]);
                    var_33 = (max(var_33, (arr_16 [i_1] [i_6 + 1] [18] [i_6])));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_27 [i_1] [i_8] [i_1] [i_3] [i_1] = (((arr_23 [i_1] [i_1] [i_3] [14] [17] [i_8 - 3]) ? var_6 : (arr_10 [i_8 - 3] [i_8 - 3] [i_8 - 3])));
                        var_34 = (((arr_10 [i_3] [i_7] [i_8]) & (((((arr_21 [i_1]) <= (arr_14 [1] [i_5] [1] [21])))))));
                    }
                    var_35 *= ((2 ? (arr_9 [i_1] [9] [3]) : (arr_15 [i_7] [i_7])));
                    arr_28 [i_3] [7] = ((17342181466903092833 ? 4294967295 : 2));
                    var_36 = var_1;
                }
                var_37 = (((arr_9 [i_5] [i_3] [i_1]) ? 12245 : var_5));
                arr_29 [i_3] = ((0 & (arr_24 [i_1] [i_1] [i_3] [i_3] [21])));
                var_38 = 8260979048608038806;
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_33 [i_1] [i_3] [i_3] = (((((2241200731788482596 ? -10 : 4015216860714674939))) ? (((arr_19 [i_1] [i_9]) ? (arr_17 [5] [i_3] [i_3] [i_9]) : (arr_19 [i_9] [i_3]))) : (min((arr_17 [i_1] [i_3] [i_3] [i_3]), (arr_19 [i_3] [i_9])))));
                var_39 = (((max(-var_15, var_16))) ? (arr_1 [i_1] [13]) : (((39 & var_3) ? (arr_25 [i_9]) : (max(var_12, 255)))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_40 = arr_10 [i_1] [i_1] [i_10];

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_39 [1] [i_3] [i_3] [9] [22] [i_3] [i_3] = (((arr_1 [i_3] [i_9]) ? (arr_1 [i_10] [i_3]) : (arr_1 [18] [i_10])));
                        arr_40 [i_3] = var_5;
                        var_41 &= ((-(arr_34 [i_1] [i_1] [i_1] [i_11])));
                    }
                    arr_41 [i_3] = ((arr_9 [i_1] [i_9] [i_10]) ? ((34790 & (arr_38 [i_10] [i_3] [i_3]))) : var_6);
                    var_42 = 20722;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_43 += (max((((!var_4) ? (arr_22 [i_1] [i_3] [i_9] [i_1]) : var_2)), (((-(140737488355327 | 60))))));
                    var_44 = (min((min((arr_24 [i_1] [i_3] [i_9] [i_3] [i_12]), (arr_4 [i_1]))), (((-(arr_13 [22] [18]))))));
                    var_45 = (max((((255 ? 3595533664 : 1))), ((11203 ? 2523459649 : (((arr_5 [i_1] [22]) ? var_2 : (arr_19 [i_3] [i_12])))))));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    var_46 = (min(var_46, var_7));
                    var_47 = (arr_8 [i_1] [i_13]);
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_48 += (min((min((arr_26 [1] [i_3] [11] [i_14] [20]), (arr_26 [i_1] [i_1] [i_1] [10] [i_1]))), (min((arr_26 [i_1] [i_3] [i_3] [i_1] [i_15]), (arr_26 [i_1] [i_1] [i_1] [i_14] [i_1])))));
                        var_49 = (6576434509317496333 >= var_1);
                        var_50 = var_5;
                        arr_54 [i_3] [i_1] [13] [1] = (max((min((arr_35 [i_3] [11] [11] [i_15]), (arr_5 [i_14] [i_3]))), (((-270441861 ? 60 : (arr_35 [i_3] [i_3] [i_14] [i_15]))))));
                    }
                }
            }
        }
        arr_55 [i_1] = ((((((arr_51 [i_1] [i_1] [i_1] [i_1]) / 3959227035))) ? (min(var_15, (arr_51 [i_1] [i_1] [i_1] [i_1]))) : (max(var_15, var_2))));
    }
    var_51 = ((var_16 ? var_14 : (((((var_12 ? var_1 : var_7)))))));
    #pragma endscop
}
