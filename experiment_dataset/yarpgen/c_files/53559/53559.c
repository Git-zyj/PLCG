/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((var_14 ? var_9 : var_11)), ((min(var_12, var_17)))))) ? (max((((253 ? var_16 : var_2))), -var_10)) : ((((!(-7998435052780115733 + var_4)))))));
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_20 = (arr_1 [i_0]);
        var_21 = min(((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))), (min(1628321341593790117, 7998435052780115741)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 = (max(var_22, (((~(arr_7 [i_1]))))));

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_23 += (arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1]);

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_1] [i_2] [i_1] [i_4] = ((-7998435052780115733 ? (!7998435052780115735) : 7998435052780115753));
                    var_24 = (max(var_24, (((arr_12 [i_1] [i_1] [1]) * ((-(arr_5 [12] [i_4])))))));
                }
            }
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                arr_16 [11] [i_1] [6] [0] = var_1;
                var_25 = (arr_8 [i_1] [11] [i_1]);
                var_26 = (arr_8 [i_1] [i_1] [i_1]);
            }
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_27 &= (((((var_13 & (arr_4 [i_1])))) ? (min((((arr_17 [i_1] [i_6] [i_1]) ^ var_11)), ((min((arr_18 [i_1] [i_1]), 30048))))) : ((~(~var_12)))));

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_23 [i_1] [i_6] [i_6] = max(var_2, ((1 ? var_13 : (max(var_2, var_1)))));
                var_28 = (arr_10 [i_1]);
                var_29 = (((((((arr_21 [i_1] [i_1] [i_1]) > var_11)))) | ((((min(var_6, (arr_22 [i_1] [i_1] [i_7]))) >= (~-7998435052780115733))))));
                var_30 = (min((arr_21 [i_1] [i_6] [i_7]), (arr_21 [i_1] [i_6] [i_7])));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                var_31 = (max(var_31, (((((!(arr_3 [12] [i_8 - 1]))))))));
                var_32 = (arr_3 [i_8] [i_1]);
                var_33 = (arr_25 [i_1] [i_1] [i_1] [i_8]);
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_34 = (max((((!(arr_10 [i_1])))), ((~(min(7998435052780115733, 1))))));
            var_35 -= (((((min((arr_10 [i_9]), (arr_5 [i_9] [i_9]))) >> (((!(arr_1 [18])))))) - (((max((arr_15 [i_1] [i_9]), (var_8 < var_8)))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_36 ^= (((arr_6 [i_1] [i_1] [i_10]) > 1090330344024485166));

            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                var_37 = -30030;
                var_38 = (((17356413729685066433 + -7998435052780115735) >> (((((arr_17 [i_1] [i_10] [i_11]) ? 17356413729685066433 : var_7)) - 85))));
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {

                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            var_39 = (max(var_39, ((-(var_3 < -9095702170709794569)))));
                            arr_43 [7] [i_10] [i_1] [i_10] [i_10] [3] = ((+((var_11 ? (arr_20 [i_1] [13] [5] [13]) : (arr_3 [i_1] [i_1])))));
                        }
                        var_40 = (min(var_40, ((((arr_11 [9] [i_10] [3] [i_13]) - (arr_11 [i_1] [i_10] [i_12] [i_13]))))));
                    }
                }
            }

            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_41 = (((arr_15 [i_1] [i_10]) << (((arr_15 [i_15] [i_10]) - 78))));
                var_42 = (((!(arr_32 [i_1] [i_10] [i_10] [13]))));
                var_43 = (((arr_37 [i_15] [i_15] [i_1] [i_15]) ? (arr_37 [i_1] [i_1] [i_1] [i_1]) : (arr_37 [i_1] [i_1] [i_1] [i_1])));
            }
            arr_48 [i_1] = (((arr_22 [1] [i_1] [i_10]) | (arr_22 [i_1] [i_1] [i_1])));
        }
        var_44 = arr_35 [13] [13] [14];
    }
    #pragma endscop
}
