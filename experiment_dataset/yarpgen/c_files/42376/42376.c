/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((var_2 > 1) ? ((max(-32, 3))) : ((max(34, var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_21 = max((((((max((arr_2 [i_0]), var_12))) / var_17))), (((min(1804166240944302426, (arr_4 [i_0] [i_0]))) ^ ((min(38, -667968310))))));
                    arr_6 [i_0] = ((min(var_19, (arr_1 [i_1 + 4] [i_1 + 2]))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_22 += (arr_0 [0] [0]);
                        var_23 = ((var_5 * (var_14 >= var_17)));
                        var_24 = (max(var_24, ((((arr_8 [i_0] [12] [6] [i_3]) || (((-(arr_5 [i_0] [i_0])))))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 3] = ((~((+(((arr_4 [i_1 + 1] [i_1 + 1]) - 32))))));
                        arr_15 [6] [i_1] [i_1 - 1] [6] [4] &= (~var_16);
                    }
                    var_25 = (min(var_25, (28339066 == 43)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_26 = (((((~(max(var_14, var_10))))) ? (arr_0 [i_1] [i_0]) : var_17));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_27 = (max(var_27, ((max(((((~-13443) | ((min(var_15, var_3)))))), ((~(((arr_4 [i_0] [1]) - 192)))))))));
                        arr_21 [i_0] [i_1 + 1] [i_0] [i_5] [i_0] [i_0] = (((((~(arr_10 [i_1 + 2] [i_0] [i_1 - 1] [i_1 + 2])))) ? 43 : (max((29704 ^ var_16), ((7262756650406733438 ? 4353329946409631332 : 57964))))));
                    }
                    var_28 = (max(1, (min(((min(var_13, var_19))), (var_10 * var_0)))));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_29 = (max((arr_9 [i_7]), var_10));
                    var_30 = (min(var_30, 34));
                    var_31 = var_7;
                }
                var_32 = (max(var_32, (max((((arr_0 [i_1 + 4] [4]) ? ((var_4 ? var_10 : (arr_7 [2] [i_1] [i_1]))) : (((max(63906, (arr_3 [6] [6]))))))), ((min((!57), (((arr_17 [i_0] [i_1]) ? 63906 : var_13)))))))));
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_8] [i_9 - 1] [i_10] = max(var_16, var_12);
                                arr_34 [i_0] [i_0] [i_8 + 1] [i_9] [i_10] = (((~1615) == (((((arr_19 [4] [i_9 - 1] [13] [i_0] [i_0]) ? var_19 : (arr_8 [i_0] [i_0] [i_9] [1])))))));
                                arr_35 [i_0] [i_0] [i_1] [i_8] [10] [i_9] [i_10] &= ((-((max((arr_26 [i_0] [i_10] [i_8] [i_0] [i_1 + 3]), (arr_26 [i_0] [i_1] [i_1] [i_9 - 1] [i_1 + 3]))))));
                            }
                        }
                    }
                }
                arr_36 [i_0] = (((((48 % ((var_2 + (arr_0 [i_0] [i_0])))))) ? var_1 : (max((((~(arr_29 [i_1 + 1] [i_1] [i_0] [i_0] [i_0])))), (arr_32 [i_1 - 1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
