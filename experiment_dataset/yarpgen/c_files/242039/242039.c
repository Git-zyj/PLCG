/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((-(!var_5))), -var_9));
    var_14 += ((((max(((var_8 ? var_12 : 26724)), (var_7 == var_6)))) ? ((((max(var_8, var_4))) ^ (max(var_5, var_3)))) : (max(((max(var_8, var_12))), (~var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_15 = (max((arr_5 [11] [i_1]), -1428987427));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_12 [4] [i_1] [i_2] [i_1] [5] = (max((((-23330 & 23328) ? -23330 : 23333)), 18701));
                        arr_13 [i_1] [9] [3] [i_1] = (max((((arr_4 [1] [1] [i_1]) / ((var_10 ? var_12 : (arr_1 [i_0]))))), ((max((arr_11 [i_0] [i_1 - 3] [3] [1]), (arr_11 [i_2] [i_1 - 1] [i_2] [15]))))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_17 [1] [12] [4] [i_4] [i_1] [14] = arr_7 [i_0];
                        var_16 = ((~(((max(var_6, 4277))))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_17 = (((((23329 ? -1 : (arr_2 [15])))) ? ((~(arr_20 [11] [i_1] [2]))) : ((((!(arr_5 [12] [11])))))));
                    var_18 = (((((-23330 ? 23329 : (arr_8 [9] [7] [1])))) ? (((arr_14 [i_1] [i_1] [12] [i_1]) | var_0)) : var_2));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 16;i_6 += 1)
                {
                    arr_23 [i_0] [0] [i_1] = ((~((3441 % (arr_7 [9])))));
                    arr_24 [12] [7] [14] [i_1] = ((((arr_20 [i_0] [i_0] [i_0]) + (arr_3 [i_1]))));
                    arr_25 [1] [i_1] [i_1] [i_6] = ((8527 / -105) * (!-3437));
                    var_19 += (arr_20 [i_1 + 2] [i_6 - 3] [i_6 - 2]);
                }
                var_20 = ((+(((arr_10 [10] [i_1 - 2] [i_1 - 2] [2] [8] [i_1 - 2]) + (arr_10 [2] [i_1 - 3] [i_1 + 2] [16] [13] [i_1 + 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_38 [i_7] [i_9] [0] [6] = (max((max((arr_34 [i_7 - 1]), (arr_5 [5] [13]))), ((((((-(arr_26 [9] [8])))) || ((max((arr_36 [4] [i_7] [i_9] [i_10]), -5000))))))));
                            var_21 = ((-1047191887 ? ((max(15580, (arr_0 [6] [i_8])))) : (max((max((arr_15 [11] [12]), (arr_26 [i_9] [i_10]))), ((max((arr_8 [4] [12] [i_10]), (arr_20 [i_10] [5] [4]))))))));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_22 = (((((max((arr_6 [i_12] [2]), (arr_21 [11]))))) ? (((((arr_9 [i_12] [16]) == (arr_5 [12] [2]))) ? ((var_6 ? (arr_43 [i_7] [7] [i_7] [7] [0]) : 2380849990)) : var_10)) : (((((max((arr_5 [15] [10]), var_4))) ? (((arr_29 [8]) ? 1 : var_1)) : (3444 & -5000))))));
                                var_23 = ((~(max((((arr_32 [3] [i_8]) ? -3445 : (arr_35 [i_13]))), (5008 & 37174)))));
                                var_24 = (max(var_24, ((((((-3405321084462885397 & var_9) | (arr_4 [i_8] [i_8] [i_8]))) == ((max((arr_20 [15] [3] [5]), ((max((arr_10 [i_7] [i_8] [3] [7] [8] [14]), (arr_15 [1] [13]))))))))))));
                                var_25 = (-(((!(((3405321084462885421 ? (arr_20 [0] [2] [6]) : 1)))))));
                            }
                        }
                    }
                    var_26 ^= ((!((max(((((arr_30 [2] [i_8]) % var_6))), (((arr_43 [6] [i_8] [6] [1] [6]) ? var_10 : 682026069)))))));
                }
                var_27 ^= (arr_20 [0] [13] [4]);
                var_28 = ((+((((max((arr_8 [i_7] [13] [i_7]), 63302))) & (arr_44 [6] [i_8] [1] [i_7] [2])))));
            }
        }
    }
    #pragma endscop
}
