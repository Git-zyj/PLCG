/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_5;
                arr_6 [i_0] = (min(((((max(2099267796964813604, -3903467133641140518))) ? (((((arr_3 [i_0] [i_0] [i_0]) < 7546)))) : (max((arr_0 [i_0] [i_1]), (arr_1 [i_0]))))), ((min(((var_4 ? 4294967283 : var_6)), -var_3)))));
                arr_7 [i_0] = var_1;
            }
        }
    }

    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_17 -= ((var_9 ? (arr_10 [i_2 - 4] [i_2 - 4]) : var_11));

            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_16 [i_2] [i_3] [i_4 + 2] &= ((var_13 ? ((-104 & (arr_3 [3] [i_2] [i_2]))) : (((var_13 && (arr_0 [i_4] [2]))))));
                arr_17 [17] [i_3 + 2] [i_4 + 1] [i_4] = (var_6 ? (arr_13 [i_2 - 2] [i_2 - 2] [i_4] [i_3]) : 2305843009213693951);
                arr_18 [i_2] [5] [i_2] = var_6;
                arr_19 [i_2] [i_3 + 3] [i_4 - 1] = ((!(arr_3 [i_2 + 2] [i_3 - 1] [i_2 + 2])));
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_18 = ((var_8 ? (((arr_8 [i_2]) ^ (arr_10 [4] [i_5]))) : (((62264 ? 7540 : (arr_0 [i_2] [i_2]))))));
                arr_22 [i_2] [i_3] [i_5] = ((var_8 ? (~var_14) : (((var_16 ? 209 : 225160954)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_29 [i_2] [i_2] = var_0;
                            arr_30 [i_2] [i_3] [i_5] [i_6] = (-(arr_23 [15] [15] [0] [i_6] [i_6]));
                            arr_31 [0] [i_3] [2] &= (((arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_14 [i_5] [i_5 - 1] [i_5 - 1]) : var_9));
                        }
                    }
                }
            }
        }
        arr_32 [i_2] [i_2] = (max(7559, (arr_4 [i_2 + 2] [i_2] [i_2 + 2])));
        arr_33 [i_2] [13] = var_0;
    }
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [1] = -1;

                            for (int i_12 = 0; i_12 < 20;i_12 += 1)
                            {
                                arr_46 [i_12] [i_11] [i_10] [i_10] [i_11] [i_8] = 323034303;
                                arr_47 [i_12] [i_11] [i_8] [i_11] [i_8] = (((((-1694020044 ? var_1 : 6479))) ? (min((var_3 | 5790), (max(var_14, var_5)))) : (var_16 || 175)));
                                arr_48 [i_8] [i_9] [i_10 - 1] [i_11] [i_11] = (((var_1 * -22) ? (((var_8 ? 9 : var_16))) : (((min(-3081795569766352452, var_9)) * 1))));
                            }
                            var_20 -= (2246074370239084387 ? ((min(1, 1))) : -225160934);
                        }
                    }
                }
                var_21 = (arr_15 [i_9] [i_9] [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
