/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_7 [6] [i_1] = (((max(((max((arr_6 [i_1]), (arr_6 [i_0])))), 99)) < ((88 ? 65024 : 17))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 += (min(17514, ((((((arr_9 [12]) ? var_13 : (arr_10 [17] [i_2] [i_0] [i_0]))) == var_14)))));
                        var_21 -= ((~(arr_11 [i_1 + 1] [i_1])));
                        var_22 = (min(var_22, -79));
                    }
                }
            }

            for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_23 = (min((max((arr_15 [i_1 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]), (max(var_7, (arr_9 [i_1]))))), ((min(var_8, ((~(arr_13 [i_4] [i_1] [i_4] [18] [i_4] [i_4]))))))));

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_24 = ((arr_3 [i_1] [i_1] [i_0]) ? (((((arr_6 [i_5 - 2]) < 16466884645173961113)))) : var_7);
                    var_25 -= (max(((min((!6050802794189360414), (~var_14)))), (min((arr_17 [i_5 - 2] [i_1 + 2]), 65024))));
                    var_26 ^= ((15130265335135581187 - ((((!(arr_0 [i_1 + 2])))))));
                    arr_20 [2] [9] [9] = (((min((arr_15 [i_5] [i_5] [i_5 - 2] [i_4 + 3]), (arr_15 [i_5] [i_5] [i_5 + 1] [i_4 + 3]))) < (((arr_15 [i_5] [i_5 + 1] [i_5 + 1] [i_4 + 2]) ? (arr_15 [i_5] [i_5] [i_5 - 1] [i_4 + 3]) : 511))));
                }
                var_27 = (max(var_27, (max(194, ((min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 2]))))))));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
            {
                var_28 = var_7;
                arr_23 [i_1] [i_0] = ((((((min(227, (arr_11 [i_1] [i_0])))) ? (arr_11 [12] [12]) : (min(9032990252356951795, 15130265335135581203)))) & (((arr_13 [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_1 + 2]) ? 1 : (arr_15 [18] [i_6 - 1] [i_6 + 1] [i_1 + 2])))));
            }
            arr_24 [i_1] = (((((((~(arr_12 [i_0] [i_1 - 2] [i_0] [i_1 + 2]))) | ((max(84, 249)))))) ? (min(var_9, (arr_1 [i_0]))) : (arr_4 [i_1] [1] [i_0])));
            arr_25 [3] = ((~(~63517)));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_29 = ((((!((!(arr_17 [i_0] [i_7])))))) | ((~(arr_26 [i_0]))));
            var_30 ^= var_8;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                {
                    arr_35 [i_9] = var_5;
                    var_31 = (min((((max(var_11, 172347228)) / (arr_8 [i_9]))), 37));
                    arr_36 [i_9] [i_8] [i_9 + 3] = ((((((1990967055 <= (arr_9 [i_9 + 2]))))) >> (arr_6 [i_0])));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_32 ^= ((+(((arr_38 [i_10] [i_10]) ? (arr_13 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : ((((arr_19 [i_10] [i_10] [i_10] [i_10]) < (arr_6 [i_10]))))))));
        arr_40 [i_10] = (!7356452578011527618);

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_33 = ((!((min(11841, (min(var_4, var_9)))))));
            arr_44 [i_11] [i_10] &= (((((-(arr_19 [i_10] [i_10] [i_10] [i_10])))) ? (((var_13 ? 108 : var_11))) : (((min(var_1, (var_14 == var_1)))))));
            var_34 = var_15;
        }
    }
    var_35 = 58000;
    var_36 = (min(var_36, var_11));
    #pragma endscop
}
