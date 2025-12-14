/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((886368978 ? 38760 : 1725579004));
                var_18 = (max(var_18, (((-1725579004 ? (1725579004 - var_7) : var_4)))));
                var_19 = (max(var_19, ((((((-(arr_5 [i_0])))) ? (max((arr_0 [i_0] [i_1]), ((10940 ? -1725579025 : (arr_6 [i_0] [i_1]))))) : 33)))));
            }
        }
    }
    var_20 += var_9;
    var_21 |= var_16;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((!(((var_16 ? 1725579014 : var_4)))));
                        var_22 = (max(var_22, (((-var_0 ? var_2 : (arr_5 [i_4 + 1]))))));
                        var_23 = (max(var_23, ((((arr_0 [i_3] [i_5]) < -var_7)))));
                    }
                    for (int i_6 = 1; i_6 < 6;i_6 += 1)
                    {
                        var_24 = (max(var_24, (((-((0 ? (min(2066553513069358272, 38735)) : (((~(-32767 - 1)))))))))));
                        var_25 = (min(var_25, ((~(arr_14 [6] [6] [6])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_26 = (~(arr_10 [i_2 - 1] [i_4 + 2] [i_7 - 1]));
                        var_27 = (min(var_27, (arr_25 [i_4 + 2] [i_3] [i_7] [i_7 - 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((((var_13 ? var_14 : var_2)) * (!1725578985)));
                        var_29 = (min(var_29, ((((arr_5 [i_2 + 2]) + var_9)))));
                    }

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 6;i_10 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, (((!((!(!45))))))));
                            var_31 = (min(var_31, ((((-1437232872 > 1520050061) ? ((-((var_10 ? (arr_1 [i_4 - 1]) : var_4)))) : ((-(arr_24 [0] [i_3] [2] [4] [i_10]))))))));
                            arr_33 [i_10] [0] [0] [6] &= ((((-(!38786))) << (((var_8 > (((-(arr_21 [i_2] [i_3] [8] [i_10])))))))));
                            var_32 ^= (!var_13);
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 6;i_11 += 1) /* same iter space */
                        {
                            var_33 = (min(var_33, ((-(arr_23 [4] [0] [i_3] [i_4 + 2] [i_11 + 1])))));
                            var_34 = (arr_20 [i_3] [i_4] [i_9] [i_11 - 2]);
                        }
                        var_35 += var_5;
                        arr_37 [i_2] [i_2] [i_4 - 1] [i_9] [i_4] [i_2] = arr_34 [i_4] [i_3] [i_2 + 2] [i_3] [i_9] [i_9] [i_4 - 1];
                        var_36 = (min(var_36, ((((arr_6 [i_3] [i_4 + 1]) + 38807)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
