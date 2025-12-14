/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 *= (((((arr_1 [14]) ? 0 : (arr_2 [i_0 + 1]))) < (!var_11)));
            var_16 += (var_4 ^ ((((min(var_0, (arr_1 [i_0]))) >= (((arr_4 [i_0]) ? (arr_4 [12]) : (arr_3 [i_0 + 1] [i_1])))))));
            var_17 = (((!(arr_4 [8]))));
            var_18 *= ((~((63 ? 248 : (arr_1 [i_0 + 1])))));
            var_19 = ((max(var_9, (max(23728, var_7)))) << (((((!((!(arr_2 [i_1])))))) - 1)));
        }
        var_20 -= (arr_0 [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_12 [18] [i_4] [i_4] [i_4 + 1] [i_4] = (((((max((((arr_6 [i_4] [i_2]) != (arr_10 [i_0] [i_2] [i_3] [20]))), (5578860794238247208 >= -616271288))))) % (min((min(var_10, var_9)), ((((arr_5 [i_0] [i_3] [i_4 + 1]) || var_4)))))));
                        var_21 = -5578860794238247217;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_22 += (!36);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 6;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 6;i_7 += 1)
            {
                {
                    arr_22 [i_5] = (arr_13 [i_6 + 1] [i_7 + 3]);
                    var_23 = (((arr_10 [i_6] [i_6 + 2] [i_6] [i_6 + 2]) >> ((((~(((15 < (arr_19 [i_7])))))) + 6))));
                    var_24 = (arr_17 [i_5] [i_6 + 1] [i_7 - 3]);

                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        arr_26 [i_5] [i_5] [8] [i_5] = (min((min((((arr_1 [i_7]) ? 245 : (arr_4 [i_5]))), (((arr_10 [i_5] [i_6 + 4] [i_7] [i_8]) ? 45 : (arr_8 [i_5] [i_5]))))), ((((max(var_10, var_12))) ? ((-(arr_3 [i_6] [i_6]))) : (arr_13 [i_6] [9])))));
                        arr_27 [i_7] = (arr_11 [i_8 + 1] [i_7] [i_5] [i_6 + 1] [i_5]);
                    }
                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        var_25 -= (min((arr_3 [i_6 + 2] [i_9 - 4]), (((arr_3 [i_6 + 3] [i_9 - 1]) ? (-32767 - 1) : (arr_5 [i_9 + 1] [i_7 + 1] [i_6 + 3])))));
                        var_26 = (-8316118358053153338 > -1);
                    }
                    var_27 = (max(var_27, (((((((arr_15 [i_6 + 4] [i_7 + 4]) ? (arr_15 [i_6 - 1] [i_7 + 4]) : (arr_15 [i_6 + 4] [i_7 + 3])))) ? (arr_15 [i_6 + 4] [i_7 - 1]) : ((max((arr_15 [i_6 - 1] [i_7 - 1]), (arr_15 [i_6 - 1] [i_7 + 1])))))))));
                }
            }
        }
        arr_30 [i_5] = var_1;
        var_28 = (((arr_4 [i_5]) ? (max(((-(arr_17 [i_5] [i_5] [i_5]))), 86)) : (!58895)));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_29 = (min(var_29, ((((arr_23 [i_5] [i_5] [i_10] [i_10]) < (arr_23 [i_10] [i_10] [i_10] [i_10]))))));
            var_30 += (arr_21 [i_5] [i_5] [i_10]);
            arr_33 [i_5] [i_5] [i_5] = ((arr_10 [i_5] [i_5] [i_10] [i_5]) > (arr_21 [i_5] [i_10] [i_10]));
        }
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        var_31 *= ((min(-815900083, ((244 < (arr_2 [i_11]))))));

        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_32 *= ((-(((((arr_35 [10]) % (arr_2 [i_12])))))));
            var_33 = (min(var_33, (((((((-((max((arr_5 [i_12] [i_12] [i_11]), -37))))) + 2147483647)) << (((((~var_0) ? 25537 : (((arr_10 [i_11 + 2] [i_11] [i_11] [i_11 + 2]) | (arr_0 [i_11 + 2]))))) - 25537)))))));
        }
    }
    var_34 = (max(var_4, (max((-18824 % var_2), ((var_8 ? var_0 : 3149907724417267705))))));
    #pragma endscop
}
