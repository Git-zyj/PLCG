/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_5, var_0));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = ((((min((((-6873903643664896134 ? (arr_3 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0] [i_0])))), 6873903643664896136))) ? -32 : var_5));
        var_18 = -29;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_3] = 65520;
                        var_19 = (((var_2 - 65528) ? (((((arr_7 [i_2] [i_2]) + 18446744073709551608)))) : (max(((-(arr_5 [i_2] [i_2]))), 0))));
                    }
                }
            }
        }
        var_20 = (!-var_5);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_8 - 3] = (max((max(17541969130787308173, ((min(var_0, (arr_13 [i_5] [i_5])))))), ((max((arr_11 [i_8 + 1] [i_7 - 1] [i_7] [i_7 - 1]), var_1)))));

                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            var_21 = -3977826297;
                            var_22 = ((-(min((!45220), 6873903643664896133))));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_23 = var_4;
                            var_24 = var_8;
                        }

                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_25 = ((!((!((min((arr_30 [i_5] [i_6] [i_7]), var_2)))))));
                            var_26 = ((-((30659 % (arr_30 [i_8] [i_7 - 1] [i_8 - 2])))));
                            var_27 = (arr_20 [i_5] [i_7 - 1]);
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_5] [i_5] [i_7] [i_12] [i_12] = var_13;
                            var_28 = (+-6873903643664896145);
                            var_29 = arr_20 [i_8] [i_6];
                            var_30 = var_0;
                        }
                    }
                }
            }
        }
        var_31 = var_0;
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_39 [i_13] = ((((((arr_1 [i_13]) ? (arr_1 [i_13]) : var_1))) ? ((~(arr_1 [i_13]))) : ((-(arr_1 [i_13])))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    {
                        var_32 = 9223372036854775807;

                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            var_33 = ((((((min((arr_47 [i_13] [i_13] [i_16] [i_17]), var_2))) && var_0)) || ((((max(1419986053, 1))) || var_5))));
                            var_34 = (max((((arr_37 [i_16]) ? (arr_37 [i_16]) : (arr_42 [i_13] [i_16] [i_14] [i_13]))), ((min(1, 30813)))));
                            var_35 = (((((var_14 ? (arr_43 [i_17 + 1] [i_17 - 2] [i_13]) : (arr_45 [i_16] [i_17 + 1])))) ? (min(var_4, (arr_49 [i_13] [i_17 - 2] [i_15] [i_15] [i_14] [i_14]))) : ((((min((arr_3 [i_14] [i_17 - 2]), (arr_47 [i_13] [i_13] [i_13] [i_16])))) ? ((((317141002 >= (arr_46 [i_13] [i_15] [i_14] [i_13]))))) : var_9))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_36 = 20328;
                            var_37 = (arr_46 [i_13] [i_13] [i_15] [i_13]);
                        }
                        var_38 = var_3;
                        var_39 = (max((arr_47 [i_16] [i_13] [i_13] [i_13]), (((-35 <= (arr_42 [i_13] [i_15] [i_13] [i_13]))))));
                    }
                }
            }
        }
        var_40 = var_5;
    }
    var_41 = var_11;
    #pragma endscop
}
