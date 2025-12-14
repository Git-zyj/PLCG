/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_7 ? (max(var_2, 55712) : (((max(var_0, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [5] [i_1] = 576460751229681664;

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_11 -= ((29 & ((-(arr_10 [5] [11] [i_3 + 2] [i_3])))));
                            var_12 += ((-(arr_1 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_15 [13] [5] [i_1] [13] [5] [i_5] [5] = (arr_11 [10] [0] [10] [10] [i_1] [i_5]);
                            var_13 ^= arr_13 [i_0];
                            arr_16 [12] [12] [i_1] [12] [i_3] [5] = ((-((~((max((arr_13 [i_1]), (arr_1 [i_2]))))))));
                        }

                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_14 = (((3459213684539801795 ? 3459213684539801795 : -540477358)));
                            var_15 = (max(var_15, ((min((arr_3 [i_1 + 1]), (((!(arr_3 [i_1 - 1])))))))));
                            arr_20 [i_1] [6] [9] [11] [i_6 + 2] = ((~(((~(arr_12 [12] [i_1 - 1] [3] [i_1 - 1] [i_6 + 1]))))));
                            arr_21 [i_1] [11] [4] [9] [i_1] = (arr_3 [i_0]);
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, 259347316));
                            var_17 = (!((!(arr_17 [i_1] [i_1 + 1] [9] [13] [i_1 - 1]))));
                            var_18 = (((((~(arr_9 [i_1] [11] [i_1 + 1] [i_7 + 2] [i_1])))) ? (~-58) : (min((arr_1 [i_0]), (((arr_19 [i_0] [i_0] [14] [i_3] [2] [i_1]) ? 102 : 1))))));
                            var_19 = 91;
                            arr_24 [i_1] [i_1] [i_1] = (max((max((arr_12 [0] [0] [i_1 + 1] [i_1 + 1] [3]), (arr_2 [i_7 + 2]))), ((((arr_10 [8] [i_7 + 2] [i_3 - 1] [i_1 - 1]) ? -4194304 : (arr_17 [9] [i_1 + 1] [4] [i_7 - 1] [2]))))));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_28 [4] [i_1] [6] [7] [i_1] = (((((arr_2 [i_0]) ? ((max((arr_27 [0] [5] [12] [i_3 - 3] [12]), (arr_19 [11] [11] [i_2] [i_3] [i_3 - 2] [i_3 - 1])))) : (arr_25 [14] [i_1] [11] [i_3] [i_3] [6]))) >> (((max(-64, -538641324)) + 85))));
                            var_20 &= ((max((~-14125), (max(18446744073709551615, 743799446)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_21 *= (arr_25 [12] [12] [i_2] [i_9 - 3] [i_9 - 1] [i_10]);
                                arr_34 [i_1] = ((21886 ? 538641338 : 2000043656));
                            }
                        }
                    }
                    arr_35 [i_1] = min(((min((arr_1 [i_2]), (((!(arr_17 [i_0] [5] [11] [i_0] [i_1]))))))), (min((arr_12 [1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_12 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                }
            }
        }
    }
    var_22 = (max(var_22, (var_1 != var_2)));
    var_23 = ((~(((var_4 != (min(65, var_5)))))));
    #pragma endscop
}
