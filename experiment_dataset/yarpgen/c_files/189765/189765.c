/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += ((((arr_1 [i_0] [20]) && var_3)));
                var_14 *= (!var_2);
                var_15 += (min((min(-5686, (!1))), var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_16 = (min(var_16, (((max(var_10, (var_4 > var_8)))))));
                arr_10 [21] = (max(var_7, (arr_2 [i_2 + 1])));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_17 = 1;
                        arr_18 [i_5] = ((!(arr_6 [i_2 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = (min(var_18, (arr_1 [1] [1])));
                            var_19 &= ((((var_11 - (arr_21 [6] [6]))) >= var_0));
                            var_20 *= arr_2 [i_2 + 2];
                        }
                        var_21 ^= ((~(arr_15 [i_2 + 1] [i_3] [i_4 + 2] [i_4 + 1])));
                        var_22 &= ((arr_16 [i_2 + 3] [i_4 + 1] [i_4 + 1] [i_6]) / (arr_17 [i_2 + 1] [i_4 - 2] [i_2 + 1]));
                    }
                    arr_25 [i_2] [i_2] [1] [i_2] = (((arr_21 [i_4 - 2] [i_3]) ^ (arr_21 [i_4 + 2] [i_4 - 2])));
                    arr_26 [14] = (((arr_14 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4 + 2]) ? (arr_14 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4 + 2]) : var_7));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_29 [i_2] &= (!(arr_6 [i_2 + 3]));
                    var_23 = (max((min(var_12, var_0)), ((var_10 ? (arr_8 [19] [9]) : (arr_22 [i_2 - 2] [i_2 - 2])))));
                }
                for (int i_9 = 4; i_9 < 21;i_9 += 1)
                {
                    var_24 = min((1 >= 0), (arr_4 [i_2 - 1] [i_2 - 1] [3]));
                    arr_32 [i_2 - 1] [i_2 - 1] = var_0;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_37 [1] [0] [0] [i_10] = ((arr_12 [i_3]) && (arr_13 [i_2 + 1] [i_9 - 3]));
                        var_25 = (((((arr_34 [i_2 - 2] [i_3] [i_9 + 1] [i_2 - 2] [i_2 - 2]) ? (arr_27 [i_2] [i_2] [i_9 + 2]) : 1)) >= (((arr_15 [1] [i_9 + 1] [i_3] [13]) ? (arr_20 [i_10] [18] [i_10] [18]) : (arr_9 [15] [1] [12])))));
                        var_26 *= ((!(!var_11)));
                    }
                    for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_27 += ((((((((min((arr_2 [i_2 - 1]), var_1))) + ((max((arr_34 [1] [15] [1] [1] [i_2 - 2]), (arr_23 [i_3])))))) + 2147483647)) << ((((((min(-13838, 255))) + 13865)) - 27))));
                        var_28 |= ((((max(var_10, (arr_28 [i_9 - 1] [i_11 + 1] [i_3])))) ? (-2435 <= -463355163) : ((max((arr_23 [i_2]), (arr_28 [i_9 + 2] [i_11 + 1] [i_3]))))));
                        var_29 = var_10;

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_30 *= var_10;
                            arr_45 [i_2] [i_12] [i_12] [i_11 - 1] [i_12] [1] = ((1 ? (var_8 & -1851707135) : (max((((arr_31 [i_2] [i_3] [i_2] [i_2]) << (((arr_2 [i_12 - 1]) + 12236)))), (arr_34 [i_2 - 2] [1] [i_9 - 2] [i_2 + 1] [1])))));
                            var_31 = (max(var_31, (~-30467)));
                        }
                    }
                    for (int i_13 = 2; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_32 = (~(((arr_14 [i_13 - 1] [i_13 - 1] [i_13 + 2] [i_9 + 1]) ? (arr_34 [i_13] [i_3] [i_13 - 2] [i_13 + 3] [7]) : (arr_14 [i_13 - 1] [i_9 - 2] [i_13 - 1] [i_9 - 2]))));
                        var_33 = ((((arr_12 [i_2 + 1]) - (arr_20 [i_2] [i_2] [i_2] [i_2]))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            var_34 *= (arr_11 [i_9] [i_3] [i_2 + 2]);
                            arr_53 [i_2] [i_2] [i_2] [i_2] = ((-(!71)));
                        }
                        var_35 = ((-(arr_28 [i_3] [i_2 + 3] [i_3])));
                        var_36 = (arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 1]);
                        arr_54 [i_2] [9] [21] = (arr_8 [1] [i_9 + 1]);
                    }
                    arr_55 [i_2 - 1] [i_2 - 1] [i_9 - 3] [i_3] = (var_4 <= (arr_38 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1] [3]));
                }
                arr_56 [1] [i_3] [20] = ((max((min(-276206893, var_10)), 1)));

                for (int i_16 = 3; i_16 < 19;i_16 += 1)
                {
                    var_37 *= (arr_38 [i_2] [i_3] [i_3] [i_3] [i_2 - 2]);
                    var_38 = ((((max((arr_33 [i_2 + 2] [i_2 + 1] [19]), (arr_33 [i_2] [i_2 + 1] [1])))) ^ (((arr_33 [9] [i_2 + 1] [20]) ? (arr_33 [i_2 + 3] [i_2 + 1] [i_16 - 3]) : (arr_33 [21] [i_2 + 1] [3])))));
                    var_39 = ((!((max(var_11, var_2)))));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_40 = (((((((arr_16 [i_2 + 1] [1] [1] [1]) == (arr_34 [6] [20] [i_17] [5] [20]))) ? (arr_48 [i_2 + 2] [i_2 + 2]) : (arr_4 [1] [18] [i_2 + 1]))) ^ (arr_40 [7] [1] [i_2 + 1] [7] [i_2])));
                    var_41 -= 1;
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_42 -= (arr_35 [i_2 - 2] [18] [i_18]);
                    arr_63 [6] [5] [i_18] = arr_2 [i_3];
                }
            }
        }
    }
    var_43 &= ((((!var_6) & ((0 ? var_8 : var_4)))) | (min(var_4, ((var_11 ? var_5 : var_5)))));
    #pragma endscop
}
