/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (65535 % -1);
    var_18 = (min(var_18, (((var_2 != ((var_14 & (max(-7848604040564617130, 4536324227466544414)))))))));
    var_19 = (min(var_19, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((min(((((arr_8 [i_0] [1] [i_2]) / (((arr_1 [i_0] [i_1]) ? var_9 : (arr_1 [i_0] [i_0])))))), (min(0, (arr_6 [2] [11]))))))));
                    var_21 = ((!((min((arr_7 [i_1] [i_1]), 1)))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((1 ? (arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]) : var_14));
                        var_23 |= (arr_0 [i_3 + 1]);
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_24 = (min(((min((1023 && 7848604040564617130), (min(var_3, (arr_1 [i_0] [i_0])))))), (min(((((arr_9 [i_0] [i_0] [i_0]) && (arr_7 [i_0] [3])))), (((arr_6 [i_1] [i_2]) ? (arr_8 [i_1] [1] [i_1]) : var_5))))));
                        arr_14 [i_1] = ((!var_7) ? ((((min(var_12, (arr_0 [i_0]))) == (min(var_15, (arr_0 [13])))))) : (!var_5));
                        var_25 &= -1;

                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_26 = (min(((((1213125977282961912 != var_7) << (var_13 & 0)))), (arr_12 [2] [2])));
                            var_27 = (arr_15 [i_1]);
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_28 = (((arr_5 [13] [11] [i_1] [13]) || ((max((arr_3 [i_1] [i_1] [i_1]), (min(6876987506236514324, var_8)))))));
                            var_29 += (arr_7 [i_1] [i_1]);
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_30 &= ((((((var_8 ? 1 : (arr_3 [i_0] [i_0] [i_2]))) << (((max(var_1, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [2]))) - 1994665870702922293)))) < 1));
                            arr_24 [1] [1] [6] [i_1] [i_1] = (min((((arr_15 [i_1]) ? (arr_15 [i_1]) : 7848604040564617129)), var_5));
                        }

                        for (int i_8 = 4; i_8 < 12;i_8 += 1)
                        {
                            var_31 -= ((((((((arr_21 [i_4] [i_4] [i_4] [i_4] [12]) ? 1 : (arr_1 [i_4 + 3] [i_8])))) ? ((((arr_11 [6] [i_4 + 2] [i_0] [i_0]) ? (arr_27 [i_0] [i_0] [i_2] [i_0] [i_8 - 3] [i_8 + 2]) : -7848604040564617130))) : (arr_22 [i_4 + 3] [i_4 + 3] [i_8 + 3]))) >= (((((var_14 + (arr_15 [i_0]))))))));
                            var_32 = ((!((max(var_7, var_9)))));
                        }
                    }
                    for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_33 = (((+(((arr_21 [i_0] [9] [i_0] [1] [1]) ? (arr_2 [i_2] [i_10]) : 524287)))));
                            var_34 &= ((((((max(220, (arr_23 [4] [i_1] [6] [i_2])))) | ((var_7 ? var_10 : -7848604040564617130)))) | ((min(63, (arr_30 [i_9 + 1] [i_9 + 1] [i_2] [i_2]))))));
                            var_35 = (((max((arr_27 [i_0] [i_0] [i_2] [i_9 + 3] [i_0] [i_10]), (arr_27 [i_10] [i_9 + 2] [6] [i_1] [i_1] [i_0]))) ? ((((arr_27 [i_0] [i_1] [i_1] [i_2] [14] [7]) == (arr_27 [i_0] [0] [i_2] [0] [i_10] [11])))) : (((arr_27 [0] [i_1] [i_1] [9] [i_1] [i_1]) & (arr_27 [i_0] [i_1] [i_2] [i_2] [7] [0])))));
                        }
                        var_36 = (arr_2 [4] [1]);
                        var_37 = (((((((arr_31 [i_1] [i_1] [i_2] [i_1] [1]) + (arr_0 [i_0])))) / ((-1 % (arr_21 [10] [1] [1] [i_0] [1]))))));
                        var_38 = ((((max((arr_33 [i_1] [1] [6] [6] [i_0] [i_1] [i_1]), (arr_19 [1] [6] [3] [i_1] [i_1] [8])))) ? (((((arr_8 [14] [14] [i_1]) ? 1 : (arr_12 [1] [8]))) + 7848604040564617129)) : (arr_23 [i_0] [1] [i_2] [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
