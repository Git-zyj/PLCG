/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(((((min(var_7, var_8))) ? var_10 : (((var_4 ? var_9 : var_13))))), (((var_5 ? var_6 : (((max(-71, 1)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((((((arr_5 [i_0] [i_0]) ? (arr_2 [i_1] [7]) : (arr_0 [0])))) ? (arr_4 [7]) : (((!(arr_4 [i_0]))))));
            arr_7 [i_1] = ((((!(arr_1 [i_0]))) ? var_9 : var_9));
            arr_8 [i_1] = ((3040912494 ? 3231277892480950400 : 1));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_16 = (min(var_16, -71));
            var_17 = (max(var_17, (((((((arr_2 [8] [i_2]) ? (arr_5 [i_2] [i_0]) : (arr_9 [i_2] [i_0] [i_0])))) ? var_11 : (arr_4 [i_0]))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_0] = (((arr_3 [i_3] [i_3] [i_3]) >= (((arr_12 [i_3] [i_3] [i_4]) ? (arr_13 [i_0]) : (arr_2 [6] [6])))));
                arr_16 [i_4] [i_3] = (((var_6 + (arr_5 [i_0] [i_4]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, (!var_10)));
                            var_19 = (min(var_19, var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_20 = ((+((var_13 ? (arr_22 [i_0] [i_0] [i_3] [i_0]) : (arr_20 [i_4] [i_8])))));
                            var_21 -= (((arr_10 [i_3]) ? (arr_27 [i_0] [i_3] [i_4] [i_4] [i_4] [i_4] [i_8]) : ((((arr_1 [i_3]) == var_0)))));
                            var_22 = var_7;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_23 &= ((~((2297165554 ? 1 : 216))));
                var_24 = (max(var_24, ((((arr_23 [i_0] [i_3] [i_3] [i_0]) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (arr_23 [i_0] [i_3] [1] [i_9]))))));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_25 -= (arr_12 [i_0] [i_0] [i_0]);
                    var_26 = (min(var_26, (arr_23 [i_9] [i_9] [i_9] [i_10])));
                    arr_33 [i_0] [4] [4] [8] [i_0] [4] |= (arr_21 [i_0] [i_3] [i_10]);
                }
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
            {
                var_27 -= (((((!(arr_37 [i_0] [i_3] [i_11])))) != (((arr_37 [i_0] [i_3] [i_0]) ? var_9 : (arr_18 [i_0] [i_0] [i_3] [i_0] [i_0])))));
                var_28 &= (arr_31 [i_0] [i_0] [i_3] [i_11] [i_11] [i_0]);
                var_29 -= (arr_29 [i_0] [i_3] [3] [i_3]);
            }
            arr_38 [i_0] &= ((var_6 - (arr_11 [i_0])));
            var_30 = (max(var_30, (((((((arr_0 [i_0]) ? var_1 : (arr_17 [i_0] [3] [1] [i_0])))) <= (arr_5 [i_0] [i_0]))))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    arr_44 [6] &= (((arr_23 [9] [3] [i_0] [i_0]) ? (((arr_0 [4]) ? var_6 : (arr_29 [i_13] [i_13 + 2] [i_12] [i_0]))) : (((-(arr_0 [i_13]))))));
                    var_31 = (((arr_43 [i_12] [9] [i_13 + 2] [i_12]) ? ((-(arr_19 [i_0] [i_0] [i_0] [1] [i_0]))) : var_8));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 7;i_15 += 1)
                        {
                            {
                                var_32 = -3599204341;
                                var_33 = (min(var_33, (((((((arr_5 [i_13 - 1] [i_13 - 1]) ? (arr_26 [i_0] [i_14] [i_14] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_18 [i_0] [1] [i_13] [i_14] [i_15]) ? (arr_36 [i_12] [i_13 - 1] [i_12] [i_12]) : var_4)) : ((3231277892480950385 ? 2892282716 : -1)))))));
                                var_34 = var_4;
                                var_35 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
    {
        arr_54 [8] [8] &= (((((((max((arr_27 [1] [1] [i_16] [i_16] [1] [1] [i_16]), (arr_34 [4] [4])))) ? var_14 : ((((arr_48 [i_16] [0] [0] [6]) >= (arr_2 [0] [4]))))))) ? (~5063002558407691630) : (max((arr_43 [i_16] [i_16] [6] [1]), (arr_12 [i_16] [i_16] [i_16])))));
        var_36 = (arr_45 [i_16] [i_16] [i_16] [i_16]);
    }
    #pragma endscop
}
