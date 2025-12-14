/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = ((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 + 1]))));
                            arr_11 [i_0 - 3] [i_1] [i_1] [i_1] = (((((arr_3 [i_2 + 1] [i_0 - 2] [i_1 + 1]) > (arr_3 [i_2 + 2] [i_0 + 1] [i_1 - 1]))) ? (arr_3 [i_2 - 1] [i_0 - 3] [i_1 - 1]) : (min((arr_3 [i_2 + 1] [i_0 - 4] [i_1 + 1]), (arr_3 [i_2 + 2] [i_0 - 1] [i_1 + 1])))));
                            var_12 = ((min((max(var_2, 753979886), var_2))));
                            var_13 = var_2;
                            var_14 = ((arr_1 [i_0 - 2]) * (var_7 + var_10));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] &= ((~(min(4092690661, (max(var_10, var_8))))));
                            var_15 = (-4092690661 > (~1048320));
                        }
                    }
                }
                var_16 = (-1300460013985109186 > var_7);
                arr_20 [i_1] = ((((((4092690661 >> (29896 - 29872)))) ? -1300460013985109186 : -1270930307082791166)));
                var_17 = ((-((((arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_1]) ^ 0)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_34 [i_7] [i_10] = ((-(arr_12 [i_10] [i_7] [i_7] [2])));
                                var_18 = ((~2669436524456191545) ? ((((((arr_7 [i_7] [i_7]) ^ var_9)) <= ((~(arr_30 [i_10] [i_7] [i_7] [12])))))) : (((!(((29896 ? var_8 : (arr_5 [i_9] [i_10]))))))));
                                var_19 = (min(var_7, var_0));
                                arr_35 [i_7] [i_7] [i_10] [i_7] [i_10] [i_7] = (max((var_0 * 1), (min((arr_23 [i_6]), (((arr_1 [i_8]) ? var_5 : 1))))));
                                arr_36 [i_7] [i_10] = (~((((1300460013985109203 ? var_0 : 29896)))));
                            }
                        }
                    }
                    arr_37 [i_6] [i_7] [i_7] [i_6] = (!var_3);
                    arr_38 [i_6] [i_7] [i_8] = ((+((-((var_9 ? (arr_26 [i_8] [i_6] [i_6] [i_6]) : var_8))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_20 = (((((((((arr_4 [i_7] [i_8] [i_7]) * 0))) + ((var_5 ? (arr_39 [i_6] [7] [i_8] [i_6] [i_7]) : -598610850))))) ? (max(-1499019798, ((var_6 ? (arr_13 [i_6] [i_6] [i_8] [i_7]) : -5)))) : (!var_8)));
                                arr_44 [i_7] = (max((~598610849), (arr_24 [i_6] [i_7] [i_8])));
                                var_21 = ((arr_5 [i_12] [i_7]) ? ((var_4 ? (arr_5 [i_6] [i_8]) : (arr_5 [i_12] [i_7]))) : (((!(arr_5 [i_6] [i_7])))));
                            }
                        }
                    }
                    arr_45 [i_7] [i_6] [i_8] = 306936578653688963;
                }
            }
        }
    }
    var_22 = (((((!(((var_5 ? 29885 : var_2)))))) << (!var_2)));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {
            {
                var_23 = (min(var_23, (((~(max((arr_1 [i_14 - 1]), (arr_49 [i_14 + 1] [i_14 - 2]))))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_24 = (min(var_24, -1523481888));
                            var_25 = (max(var_25, (((min(3312225074042889499, -1523481888))))));
                        }
                    }
                }
                var_26 = (-306936578653688933 > 25660);
            }
        }
    }
    #pragma endscop
}
