/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_10 = min((((var_9 || (!var_1)))), (min((min(34855, 15647)), -5138)));
                    var_11 = (max(var_11, (((var_2 ? (max((arr_7 [i_1 + 2] [i_1 + 3] [i_1 + 2]), var_8)) : ((~((min((arr_5 [5] [i_2]), 30))))))))));
                    arr_9 [i_2] [i_1] [i_1] = var_8;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_12 = ((var_0 / ((~(arr_0 [i_3])))));
                        arr_14 [i_1] [i_1 + 2] [i_3] [i_4] = (max((!var_4), (((((min((arr_4 [i_1] [i_1]), var_7)))) == (arr_1 [i_1 + 1] [i_1])))));
                    }
                    var_13 = var_2;

                    for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_14 = var_5;
                        var_15 = (min(var_15, var_9));
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (((~((~((((arr_4 [i_0] [i_0]) || var_1))))))))));
                        var_17 += (max((arr_17 [i_0] [i_0] [i_3] [i_0] [i_6 - 2]), ((((((((arr_12 [i_0] [i_6] [i_0]) + 2147483647)) << (var_7 - 1268)))) ? var_9 : (arr_13 [i_0])))));
                        var_18 = (((((arr_10 [i_1 + 3] [i_6 - 3] [i_1 + 3] [i_1]) == (arr_10 [i_1 + 3] [i_6 - 1] [i_6 - 3] [i_1]))) ? (max((arr_11 [i_6 + 1] [i_1 + 3] [i_1 + 2]), (arr_10 [i_1 + 2] [i_6 - 1] [i_6 - 3] [i_1]))) : ((((!(arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1])))))));
                        var_19 = (((((!(((65536 % (arr_0 [i_1]))))))) <= (((((arr_3 [i_1] [i_1 + 1] [i_3]) - var_9))))));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_20 = 252;

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_21 = (max((((!((max((arr_17 [i_8] [i_1] [i_3] [i_1] [i_0]), var_0)))))), ((-var_5 ? var_2 : var_5))));
                            var_22 ^= ((~((max((arr_2 [i_1 - 1]), var_2)))));
                        }
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            var_23 |= (max(((min((arr_17 [i_7 + 1] [i_9 + 1] [i_3] [i_0] [i_9]), (arr_17 [i_7 + 1] [i_9 - 3] [i_3] [i_0] [i_1])))), (((arr_17 [i_7 - 1] [i_9 + 1] [i_3] [i_3] [i_1]) ? var_8 : (arr_17 [i_7 + 1] [i_9 - 2] [i_3] [i_0] [i_9])))));
                            var_24 = ((((((arr_6 [i_1] [i_1 + 1] [i_7 - 1] [i_1]) ? (arr_6 [i_1 - 1] [i_1 + 2] [i_7 - 1] [i_1]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_7 - 2] [i_1])))) || (((arr_6 [i_1 + 3] [i_1 - 1] [i_7 - 1] [i_1]) && (arr_6 [i_1] [i_1 + 2] [i_7 - 2] [i_1])))));
                            arr_25 [i_1] [i_1] [i_7] [i_7 - 2] = ((!((var_9 && (var_0 || 2718689522)))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_25 = (max(var_25, -var_8));
                            var_26 = ((((2779443315 ? (arr_11 [i_0] [i_1 - 1] [i_7]) : (var_3 - var_6)))) || (((246 | var_2) >= (var_9 || var_8))));
                            var_27 = ((+((+((((arr_4 [i_1] [i_1]) < (arr_15 [i_0] [i_1] [i_3] [i_7 + 1] [i_3] [i_10]))))))));
                            var_28 = (4 && 4294901747);
                        }
                        var_29 = (max(var_8, (((var_4 & var_0) ? (max(18446744073709551610, (arr_15 [i_0] [i_0] [i_1 + 3] [i_3] [i_7 - 1] [i_7]))) : (~2722252843707448478)))));
                        var_30 = ((-((var_5 / (arr_17 [i_7 - 1] [i_1 + 1] [i_1] [i_1] [i_3])))));
                    }
                    for (int i_11 = 4; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_31 = (max(var_31, (arr_13 [i_11])));
                            var_32 = -var_3;
                        }

                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_33 &= (max(var_8, ((-(arr_35 [i_0] [i_0] [i_11 - 1] [i_1 + 3])))));
                            var_34 &= ((arr_0 [i_1 - 1]) == (arr_1 [i_0] [i_0]));
                            var_35 = (max(var_6, (arr_18 [i_1] [i_3] [i_1] [i_13])));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                        {
                            var_36 &= (((((max(var_4, 4100105967846068512)) != var_0)) ? (((min(2, var_1)))) : (min((max(1, 1515523981)), -2068435068))));
                            var_37 = (max(-var_1, (158 <= 7508885186299385049)));
                            var_38 = (min((arr_35 [i_11 - 1] [i_1] [i_11 + 1] [i_1 + 1]), (arr_35 [i_11 - 2] [i_1] [i_3] [i_1 - 1])));
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                        {
                            var_39 = (((!-96) ? ((max((var_0 ^ var_5), var_9))) : (max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 3994143083))));
                            var_40 = (max(((((((var_2 + (arr_35 [i_0] [i_1] [i_3] [i_11])))) ? (arr_22 [i_0] [i_11 + 1] [9] [i_11] [4] [i_3] [i_3]) : ((max(24372, var_2)))))), (min(((~(arr_24 [i_0] [i_0] [i_3] [i_0] [i_0] [i_3] [i_3]))), (arr_17 [i_0] [i_1 + 2] [i_3] [i_1] [i_15])))));
                        }
                        var_41 = (max((((((var_6 ? var_0 : var_5)) >= (arr_22 [i_0] [i_1] [i_1] [i_11] [12] [i_11] [i_0])))), ((+((var_8 ? (arr_12 [i_0] [i_1] [11]) : var_5))))));
                    }
                }
                var_42 = var_4;
                arr_42 [i_1] = (max((((~(~var_2)))), (arr_8 [i_1 + 1] [i_1] [i_1 + 3])));
                var_43 = ((!(arr_2 [i_1 + 3])));
                var_44 = max((((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 3]))), (arr_0 [i_1 - 1]));
            }
        }
    }
    var_45 = ((-(~var_1)));
    var_46 = ((!(!var_7)));
    var_47 = (((-((var_9 ? var_5 : var_0)))));
    #pragma endscop
}
