/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 *= (((arr_0 [i_0 - 4]) ? (arr_0 [i_0 - 1]) : ((((arr_5 [i_1 + 2] [i_0 - 3] [i_0 - 3]) > var_4)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_0 - 3] [8] = ((55260 ^ (arr_7 [i_1 + 1] [i_0 - 4] [i_2 + 1])));
                    var_22 = (((arr_3 [i_2 + 2] [i_1] [i_1]) ? (~var_2) : 255));
                    var_23 = (((arr_1 [i_1 + 1] [6]) % (arr_1 [i_0 + 2] [i_0 + 2])));
                    arr_9 [8] [4] = ((!(((-(arr_6 [i_2 + 2] [i_1 + 2] [i_0]))))));
                    var_24 = -2106655278;
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_25 = (max((((arr_3 [i_3] [i_1 - 1] [i_0]) > (arr_7 [i_0] [6] [i_3 + 2]))), (((arr_3 [i_3 - 1] [i_1] [i_0]) && (arr_11 [i_3 - 1] [i_1 - 1] [i_0])))));
                    var_26 = (arr_0 [i_1 + 2]);
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_4] = (arr_1 [i_0 - 3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_27 ^= ((!(((var_9 ? (arr_13 [i_0 - 2] [i_0 + 1]) : (arr_13 [i_0] [i_0 - 2]))))));
                                arr_20 [13] = (-(((((40582 ^ (arr_11 [i_6] [i_1 - 1] [i_0 - 1])))) ? ((max((arr_10 [i_0 - 4] [i_1] [i_4] [11]), 40565))) : (arr_17 [9] [4] [i_1 - 1] [i_0 - 4]))));
                                var_28 = (arr_17 [i_0] [i_1] [i_5] [i_1]);
                                arr_21 [i_5] [i_6 - 3] = 4215354443;
                                var_29 = (max(var_29, ((((((-(arr_11 [i_0 - 1] [i_0] [i_0 - 3])))) ? 2820321238 : (((-(arr_19 [i_0 - 4] [i_1 + 1] [12] [i_5] [i_6] [10])))))))));
                            }
                        }
                    }
                    var_30 &= 28404;
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_27 [12] [12] [i_7 + 4] [i_7] [i_7] [17] = (min((((((arr_1 [i_0 - 4] [i_1]) ? (arr_4 [14]) : (arr_10 [i_1] [i_1] [8] [i_1]))) - (arr_22 [i_0 - 4] [i_0 + 2] [i_1 - 1]))), var_15));
                            arr_28 [i_0] [i_1 - 1] [i_7] [17] [i_0] = (arr_6 [15] [i_1 + 2] [15]);
                        }
                    }
                }
                var_31 ^= (max((arr_26 [i_0] [i_0] [i_0] [i_1]), 2998416137));

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_31 [i_0] [i_1] [4] = ((+(min((arr_6 [i_0 - 1] [i_0 - 2] [i_1 - 1]), (arr_6 [i_0 + 2] [i_0 - 2] [i_1 + 1])))));
                    var_32 = (min(var_32, (((40558 % ((max(1036027786, 511))))))));
                    var_33 ^= (max((arr_6 [i_9] [i_1 - 1] [i_9]), (((max(1143393729, 24971)) ^ (arr_0 [i_0])))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_29 [i_9] [i_9] [i_1 + 1] [10])))) ? (8 * 1307) : (((((var_0 / (arr_25 [i_1] [i_1] [10] [i_1 + 1]))) >= -var_4)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {
                var_34 = (!var_18);
                var_35 = (((((((arr_36 [13] [13]) == var_18)))) ? (((min(9, (arr_33 [i_11]))))) : (max((!142157549), 8191))));
                var_36 = (((((!(arr_34 [i_11])))) << (((arr_34 [13]) - (arr_34 [i_10])))));
                arr_37 [i_10] = (min((min((arr_36 [i_10] [i_11]), (arr_34 [i_10]))), (max(var_15, (arr_36 [i_10] [i_10])))));
                var_37 &= (max((((((((4224082912 != (arr_34 [i_10]))))) != (((arr_33 [i_10]) ? (arr_35 [i_10]) : 45780))))), ((~(arr_35 [i_10])))));
            }
        }
    }
    #pragma endscop
}
