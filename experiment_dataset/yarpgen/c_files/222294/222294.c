/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (max((arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2]), 55441));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] |= ((~(arr_10 [i_2] [i_2 - 3] [i_0 - 3])));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((7319394065715535431 * (arr_3 [i_0 + 1] [i_3 + 1])));
                        arr_13 [i_0 - 4] [i_1] [i_2 + 1] [i_3 + 1] = var_3;
                    }
                }
            }
        }
    }
    var_11 = (min((((var_4 && 52409) ? ((min((-2147483647 - 1), 55437))) : -var_8)), ((min(var_1, ((var_3 ? 126 : var_2)))))));

    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = (max(((-(arr_15 [i_4 + 2] [i_4 + 2]))), (((arr_15 [i_4 - 2] [i_4 - 1]) % (arr_15 [i_4 + 1] [i_4 - 1])))));
        arr_17 [i_4] = ((-(arr_15 [i_4] [i_4])));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_20 [24] = 35149;
        arr_21 [i_5] [i_5] = 106;
        arr_22 [i_5] = ((((!((max(var_1, var_3))))) ? (((-10094 >= ((8436496470070887036 ? 2305843009213693952 : (arr_15 [i_5] [i_5])))))) : var_3));
        arr_23 [i_5] [i_5] = ((11459040488294802934 << (35399 && 10094)));
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_27 [20] = (arr_26 [i_6 + 3] [i_6 - 1]);
        arr_28 [16] = -var_10;
        arr_29 [24] = -4;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            {
                arr_36 [i_7] [i_7 - 1] [i_8 - 2] = ((!((55441 >= (arr_15 [i_7] [i_8 - 2])))));
                arr_37 [6] [i_7 + 1] [6] = (min(((-var_1 ? (arr_15 [i_8 - 2] [i_8 - 2]) : 17900)), (arr_35 [i_7 - 1] [i_7 + 1] [0])));
                arr_38 [4] &= 10090;
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_47 [i_7] [i_8] [i_9 + 2] [i_10] [i_10] = (((-(arr_10 [i_7 - 1] [i_7 + 1] [i_7 - 1]))));
                                arr_48 [i_7 + 1] [i_7] [i_9] [i_10] [i_11] = (arr_44 [i_7] [i_7] [i_8] [i_10] [i_11] [i_10] [i_10]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
