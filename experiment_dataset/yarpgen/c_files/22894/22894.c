/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? var_1 : ((0 ? 65529 : 4194303))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 += var_3;
                    var_15 = (min(var_15, (((-(min((((arr_2 [i_1]) >> 8)), (arr_0 [9] [9]))))))));
                    var_16 = ((arr_3 [1]) <= (((1 && var_6) & ((max(var_7, (arr_0 [i_0] [i_2])))))));
                }
            }
        }
    }
    var_17 = (65529 * var_10);

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_15 [i_3] = -12651;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = (((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (((!5) ? (((min(0, 65535)))) : 6850339821817883018)) : -9223372036854775798));
                                var_19 = (max(var_19, ((((((var_0 & 9223372036854775789) - (((var_5 << (var_10 - 16193174585542789903)))))) >> (((arr_7 [i_3]) - 38063)))))));
                            }
                        }
                    }
                    var_20 = var_4;
                    arr_20 [i_3] [i_4] [i_5] = ((~(((!(arr_3 [i_3]))))));
                }
            }
        }
        var_21 = var_3;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_22 = ((((((((arr_16 [5] [i_9] [i_10]) ? var_9 : var_0))) ? var_10 : var_12)) > 7955));
                    arr_28 [i_9] [i_9] = ((((((arr_8 [i_9]) ? (arr_8 [i_10]) : (arr_8 [i_8])))) <= var_6));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        arr_32 [i_8] [i_8] [i_8] [i_9] = 1849292098;
                        var_23 = (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9]);
                        var_24 -= ((!(((-(((arr_14 [8] [i_8] [8]) * 32)))))));
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_25 = -11174;
                        var_26 = (!65530);
                        arr_36 [i_8] [i_8] [i_8] [i_9] [i_8] = -27694;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_27 |= ((!(((((min(1, 30130))) >> (arr_0 [4] [4]))))));
                    var_28 = ((-9223372036854775803 ? ((-(0 > 2445675218))) : 0));
                }
            }
        }
    }
    #pragma endscop
}
