/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (arr_2 [7] [i_1]);
                var_14 ^= (((arr_2 [i_1 + 1] [i_0]) % ((((arr_1 [10]) && var_11)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4 - 2] = ((!(arr_1 [i_3])));
                    var_15 &= (((((~(arr_2 [i_3] [i_4 - 2])))) + (((arr_3 [i_2] [5]) ? var_1 : (arr_9 [i_2] [14] [i_4])))));
                    var_16 = (min(var_16, 120));
                    var_17 = (arr_4 [i_2] [i_3] [i_4 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_18 = (max(((((arr_6 [i_5]) >> (((arr_17 [i_6]) + 774758448506581718))))), ((+(((arr_6 [i_6]) ? (arr_4 [i_5] [i_5] [1]) : (arr_17 [i_5])))))));

                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_5] [i_6] [i_7] = ((((!(((-56 ? -1945893643 : (arr_1 [i_7])))))) ? (max(55, (((((-127 - 1) + 2147483647)) >> (((arr_1 [i_7]) - 19)))))) : ((min((arr_14 [i_6]), (arr_5 [i_7]))))));
                    var_19 = (((arr_11 [i_7] [1] [i_5]) >= (((((arr_14 [4]) && var_11)) ? (((arr_12 [i_5] [1] [1]) ? 798993969 : (arr_12 [i_7] [i_6] [i_5]))) : ((var_9 ? (arr_14 [i_5]) : (arr_2 [i_5] [i_6])))))));
                    var_20 = (min(var_20, (((!(((!28748) || (((-1945893643 ? var_9 : 0))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_28 [i_9 - 1] [i_8] [i_7] [9] [i_5] = (arr_10 [0] [i_5] [i_5]);
                                var_21 ^= ((!(arr_5 [i_7])));
                                arr_29 [i_5] [8] [7] [2] = (((56 ? (arr_26 [i_9 + 1] [i_9 + 1] [i_9 - 2]) : ((((arr_24 [1] [1] [i_5] [i_5] [i_5]) != var_3))))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_5] [i_5] [i_10] [3] |= (((!(arr_5 [i_10]))) ? (arr_8 [i_5]) : ((-var_1 ? (arr_9 [6] [i_6] [11]) : (arr_20 [i_5] [i_10] [i_5] [14]))));
                    var_22 -= ((((~((var_8 >> (arr_14 [i_5]))))) - (!var_6)));
                    var_23 = arr_18 [i_10] [i_6] [i_5];
                }
            }
        }
    }
    var_24 = ((((((var_7 < var_5) == var_4))) != 56));
    #pragma endscop
}
