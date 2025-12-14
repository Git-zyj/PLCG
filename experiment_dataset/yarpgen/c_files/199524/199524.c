/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((-2515019005695944039 == 1079154142) << ((((max(var_1, var_7))) - 111)))));
    var_12 |= var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, (((((((arr_2 [i_0]) ? (((arr_1 [i_0]) / (arr_2 [i_0]))) : (((arr_2 [i_0]) ? var_9 : (arr_2 [i_0])))))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : 28817)))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_1] [i_1] = -2515019005695944027;

                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [6] = (max((((!((max(var_6, var_4)))))), (arr_6 [i_3] [i_1] [i_1] [i_0])));
                    arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [8] = (((((-(max(var_3, (arr_10 [i_1])))))) ? (((max(var_10, (arr_4 [i_0] [i_0] [i_2]))) - (((var_3 - (arr_3 [i_0])))))) : ((((((var_1 ? 17 : var_0))) ? ((var_7 ? var_5 : 920)) : (arr_7 [i_0] [i_1]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_14 = ((-((907 ? var_4 : 2515019005695944027))));
                    arr_15 [i_1] = ((-(((arr_13 [i_4] [i_1] [i_1] [i_0]) ? (arr_0 [i_0]) : var_1))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_15 = ((((min(1582985771164445260, 6))) ? (arr_4 [i_5] [i_2] [i_1]) : (((arr_9 [i_1] [1] [i_2] [i_1] [i_0] [i_0]) ? (arr_9 [i_1] [i_1] [i_2] [i_1] [i_5] [i_1]) : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_5] [i_1])))));
                    var_16 = (arr_5 [i_2]);
                }
                var_17 &= 152;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_18 = ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [18] [i_0]) ? ((-1295 ? -2515019005695944042 : (arr_13 [i_0] [i_1] [3] [i_6]))) : (((51 ? var_4 : (arr_18 [i_6] [i_1] [i_0])))))) + 9223372036854775807)) << (((var_10 + 2161961082587272284) - 1)));
                var_19 *= ((-(((var_5 >= var_0) | (arr_16 [i_1] [i_0] [i_6] [i_1])))));
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_20 = (min(var_20, var_2));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_21 = (arr_1 [i_1]);
                            var_22 = ((-(arr_9 [i_9] [i_8] [i_1] [i_1] [i_1] [i_0])));
                        }
                    }
                }
                var_23 = ((-(-127 - 1)));
                arr_29 [i_0] [i_0] [i_1] [14] = -var_4;

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_24 |= (((arr_17 [i_0] [i_10]) ? var_6 : var_8));
                    var_25 = (((arr_4 [i_0] [i_7] [i_0]) ? var_7 : -var_0));
                    var_26 = (arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_10]);
                    var_27 = (max(var_27, ((((var_5 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1286238403))))));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_28 &= (arr_27 [i_0] [i_0] [i_0]);
                        var_29 = (max(var_29, (((!(((-(arr_2 [i_0])))))))));
                        var_30 = ((2515019005695944009 % ((((arr_35 [i_12] [i_1] [i_1] [i_1] [i_0]) ? -1744924025 : 37218)))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_31 = (((arr_22 [i_1]) ? (arr_30 [i_1] [i_7] [i_7]) : (arr_22 [i_0])));
                        var_32 *= (((!var_5) ? ((var_3 ? (arr_24 [i_11] [18] [i_11] [i_7] [i_1] [i_11]) : var_2)) : (arr_21 [i_7] [i_7] [i_7] [i_1])));
                        var_33 = (min(var_33, (((!((((arr_6 [i_0] [14] [i_11] [i_13]) ^ (arr_16 [i_0] [i_0] [6] [i_13])))))))));
                    }
                    var_34 = 2515019005695944027;
                }
            }
            var_35 ^= (((((((!(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ -3211852774506389387))));
            arr_39 [i_1] [i_0] [i_1] = (var_0 - var_3);
        }
    }
    #pragma endscop
}
