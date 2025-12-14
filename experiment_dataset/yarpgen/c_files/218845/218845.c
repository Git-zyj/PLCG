/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (max((~var_3), var_14));
    var_18 += (((((max(182, -23771)))) ^ (max(((var_1 ? var_13 : var_8)), (var_11 <= var_11)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 &= (max((arr_1 [i_0 + 1]), ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (((((arr_5 [2] [i_1] [i_1]) + 2147483647)) << (var_6 - 591930880551938658)));
                            arr_13 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = ((!(arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_21 = (arr_15 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            var_22 = (((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) != (arr_5 [i_0 + 1] [i_0 + 1] [i_0])));
                        }

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_23 = ((arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2]) ? (arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [1]) : (arr_6 [i_6 + 1] [i_6 + 2] [i_0 + 1]));
                            var_24 *= (((arr_16 [8] [i_6 + 1] [i_6 + 1] [i_0] [8]) ? var_14 : (arr_16 [12] [i_6 + 1] [i_6 + 3] [i_0 + 1] [12])));
                        }
                    }
                }
            }
            arr_21 [i_0] [i_0 + 1] [i_1] = 38;
            var_25 = ((-(arr_6 [i_0 + 1] [i_1] [5])));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_26 = var_0;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_27 += 0;
                        var_28 = (min(var_2, (((~((max(23776, -57))))))));
                        var_29 |= ((!(((-23777 ? -29 : 9223372036854775807)))));
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_30 = (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                var_31 *= (((arr_0 [i_0] [i_0]) <= (arr_1 [i_0 + 1])));
            }
            var_32 = ((((!(arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? (min(((var_3 ? var_5 : var_13)), ((max(var_14, var_5))))) : (!2011326307940134001)));
            var_33 = ((!(arr_31 [i_7] [i_0 + 1] [i_0 + 1])));
        }
    }

    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_34 |= (min(((((arr_34 [i_11]) >= (((!(arr_34 [i_11]))))))), (((arr_34 [i_11]) ? ((max(var_12, var_5))) : 16435417765769417627))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_35 = ((((arr_35 [i_11] [i_12]) ? var_10 : 1)));
            var_36 += (((arr_34 [i_11]) | (arr_34 [i_12])));
        }
        var_37 = (((((arr_35 [i_11] [i_11]) && (-9223372036854775807 - 1))) ? 1 : ((((max(0, (arr_34 [i_11])))) ? ((18446744073709551615 ? 0 : 6356938392888042662)) : (max(var_0, -6356938392888042662))))));
        var_38 = (arr_36 [14] [i_11] [i_11]);
        var_39 ^= (max((min((-23771 * var_10), (arr_36 [0] [i_11] [i_11]))), ((((arr_35 [i_11] [i_11]) != var_10)))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        var_40 = var_0;
        var_41 = (((arr_37 [i_13]) ? (arr_37 [i_13]) : (arr_37 [i_13])));

        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            var_42 += (arr_35 [i_13] [i_13]);
            var_43 = (((arr_41 [i_14] [i_14] [0]) ? (arr_41 [i_13] [i_14] [i_14]) : (arr_41 [i_13] [i_14] [i_13])));
            arr_43 [i_13] [3] [i_14] = ((!(arr_38 [i_13])));
            var_44 += ((3274489200 / (arr_39 [i_13])));
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_45 = (min(var_45, ((((arr_41 [i_15 - 2] [i_15 - 2] [i_15 - 1]) | (arr_33 [i_15 - 1] [i_15 + 3]))))));
                    var_46 = (((!var_8) / ((2305825417027649536 ? -52 : 3644179160))));
                }
            }
        }
    }
    #pragma endscop
}
