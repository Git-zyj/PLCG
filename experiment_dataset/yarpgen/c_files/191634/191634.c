/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((((((max(var_3, var_5))) || (var_4 || var_0)))) ^ var_10));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 += (((((((arr_2 [6]) || (arr_0 [i_0]))) ? var_8 : (arr_2 [0]))) % (arr_1 [12])));
        arr_3 [10] |= (max((arr_2 [2]), (arr_2 [14])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_18 = (arr_4 [i_2] [i_1]);
            var_19 ^= ((((max((arr_1 [i_1]), ((((arr_0 [8]) <= (arr_1 [i_1]))))))) < ((var_5 | (~var_13)))));
        }
        arr_9 [i_1] [i_1] = (min(((max(var_4, (arr_2 [i_1])))), (arr_4 [i_1] [i_1])));
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] = (arr_0 [i_3]);
        var_20 += var_12;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 = (~21346);
        var_22 += (-(44190 && 21346));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_23 = var_7;
        arr_17 [i_5] [i_5] = arr_15 [i_5];
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] = ((+((((arr_18 [i_6] [i_6 + 1]) || (arr_19 [i_6 - 3]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    var_24 = (max(var_24, ((((((~(arr_16 [i_6] [i_7])))) && ((((arr_19 [i_6 - 3]) ? (arr_16 [i_7] [i_6]) : (arr_22 [i_7] [i_7] [i_8])))))))));
                    arr_26 [i_6] = (arr_23 [i_8] [i_7] [i_6]);
                    var_25 -= ((((arr_18 [i_6] [i_7]) ? (max(var_5, var_4)) : (arr_22 [i_7] [i_7] [i_8 + 2]))));
                    var_26 &= (arr_18 [i_6] [i_6]);
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_27 = (max((-127 - 1), 34));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        var_28 = (((arr_18 [i_9] [i_12 + 1]) != (arr_21 [i_11])));
                        var_29 = (arr_16 [i_12 + 1] [i_10]);
                        arr_37 [i_9] [i_10] [i_11] [i_11] [i_11] = (((arr_18 [i_9] [i_12]) ? ((((-127 - 1) || -53))) : ((((arr_32 [i_12] [i_10] [i_12]) && var_13)))));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_30 ^= (((max((arr_24 [i_9] [i_10] [i_13]), (arr_30 [i_10]))) + (arr_29 [i_9] [i_11])));
                        arr_40 [i_9] [i_11] [i_10] [i_13] [i_9] = (arr_19 [i_11]);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        var_31 += (((arr_24 [i_9] [i_9] [i_11]) % (arr_24 [i_10] [i_11] [i_14])));
                        arr_43 [i_9] [i_10] [i_11] [i_11] = (((arr_25 [i_9] [i_10] [i_11]) ? (arr_29 [i_11] [i_14]) : (arr_34 [i_10] [i_11])));
                        var_32 |= ((arr_35 [i_9]) + (arr_35 [i_10]));
                        var_33 = ((!(arr_21 [i_11])));
                    }
                    var_34 = (min((((arr_36 [i_10]) * (arr_36 [i_10]))), ((((arr_29 [i_9] [i_10]) | ((var_1 ? (arr_25 [i_11] [15] [i_9]) : var_13)))))));
                    var_35 = (min((arr_23 [i_9] [i_10] [i_11]), ((max((arr_30 [i_11]), var_13)))));
                    arr_44 [i_9] [i_10] [i_11] = (arr_27 [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
