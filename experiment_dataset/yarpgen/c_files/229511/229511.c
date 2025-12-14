/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_3) == var_7));
    var_17 = (min(var_17, 1));
    var_18 = (22071 ? -19 : (min(43472, 11901581639851596933)));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = ((((((((arr_5 [i_0 + 3] [i_0] [i_1] [1]) ? (arr_3 [i_0] [i_1 + 1] [i_0]) : (arr_1 [i_1]))) << (43464 - 43463)))) ? ((max((min(20920, 15)), 1))) : (arr_6 [i_2 + 2] [i_1 + 1] [7])));
                    var_21 = (((var_8 < var_15) ? -32766 : (max((((arr_3 [i_0] [i_0] [i_2 + 3]) & (arr_0 [i_0]))), ((((arr_3 [i_0] [6] [8]) != var_15)))))));
                    arr_8 [i_0] [7] [i_0] = 144;
                    var_22 = (((max(1, (arr_4 [i_0 + 3]))) ? (max(16838265310331267185, 33)) : 117));
                }
            }
        }
        var_23 |= (min((((var_4 > (arr_2 [i_0] [5])))), (arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_24 |= min(-123, 18148);
                        var_25 = 252;
                        arr_20 [2] [i_0] [i_4] [1] [i_0] [3] = 45458;
                    }
                }
            }
        }
        arr_21 [i_0] = (max(((((arr_11 [i_0]) || ((((arr_5 [7] [i_0] [7] [i_0]) / 2891432687412529137)))))), (min(((min((arr_2 [i_0 + 2] [4]), (arr_11 [i_0])))), (~var_3)))));
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_26 = (((((((!(arr_22 [i_6] [i_6])))))) ? ((((1 << (-35 + 53))) | ((-21 ? (arr_25 [i_6]) : (arr_23 [i_6 + 1]))))) : (arr_22 [i_6] [i_6])));
        var_27 -= (max((((arr_22 [12] [i_6 + 1]) ? (arr_22 [12] [i_6 - 1]) : (arr_22 [10] [i_6 + 1]))), (arr_22 [1] [i_6 - 1])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_28 |= arr_25 [20];
                                var_29 *= (min(-101, 2021214433));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_30 ^= ((min(((var_13 << (-113 + 117)), -var_11))));
                                arr_43 [i_6 + 1] [i_7] [10] [i_7] &= (arr_31 [i_6] [16] [i_6] [22]);
                            }
                        }
                    }
                }
            }
        }
        var_31 = (max((((!(arr_30 [i_6] [i_6] [i_6] [i_6 + 1])))), (arr_22 [i_6] [21])));
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        arr_47 [i_13] = (((arr_31 [1] [i_13 + 1] [i_13] [6]) ? ((min((arr_31 [i_13 + 2] [i_13 + 3] [i_13 - 2] [16]), (arr_31 [i_13 + 2] [i_13 + 1] [i_13 + 1] [8])))) : ((min((arr_31 [14] [i_13 - 1] [i_13 - 2] [2]), (arr_31 [i_13] [i_13 - 1] [i_13 - 1] [18]))))));
        var_32 = (max(var_32, ((max(((min(((1 % (arr_9 [i_13] [6] [2]))), ((49515 << (1608478763378284432 - 1608478763378284432)))))), 17194578616050351255)))));
        var_33 ^= (arr_10 [i_13 - 1] [i_13] [i_13 + 1]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_34 = (((arr_35 [i_14] [i_14] [i_14] [i_14] [14] [i_14] [i_14]) != 1));
        var_35 *= (((arr_27 [i_14]) ? var_6 : ((-(arr_31 [i_14] [0] [i_14] [i_14])))));
        var_36 = (((arr_48 [i_14] [i_14]) <= (arr_48 [i_14] [i_14])));
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_37 = (min(var_37, (arr_35 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
        arr_52 [i_15] [i_15] = (~var_10);
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_38 ^= (((((arr_42 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) & (arr_24 [i_16]))) > (((min(43466, 60))))));
        arr_56 [i_16] = arr_42 [i_16] [i_16] [21] [i_16] [i_16] [i_16] [i_16];
    }
    #pragma endscop
}
