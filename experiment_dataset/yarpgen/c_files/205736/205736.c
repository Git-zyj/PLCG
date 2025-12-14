/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (((((1073741823 ? 2147483647 : (arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 3] [i_2 - 3] [i_2 - 4])))) ? (~-1073741798) : (((!(arr_8 [i_2 + 4] [i_2 - 3] [i_2 + 3] [i_2 - 3]))))));
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = ((~(max(var_11, (((arr_5 [0]) ? var_10 : (arr_3 [i_0])))))));
                        var_17 = ((~(((arr_10 [i_0] [i_1] [i_2 + 4]) ? 12906 : (1073741798 - var_11)))));
                    }
                }
            }
        }
        var_18 &= ((((((arr_10 [i_0] [i_0] [i_0]) & var_0))) ? (~1073741790) : ((~(arr_10 [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_19 = ((var_4 ? ((~(arr_13 [i_4]))) : ((((arr_23 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7]) ? 2048 : var_13)))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_20 = (((arr_5 [i_4]) ? -922917208 : -var_0));
                            arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = 164;
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_19 [i_4] [i_5] [i_5]) && (arr_19 [i_4] [i_6] [i_9]))))));
                        var_22 = ((var_13 + ((((!(arr_10 [i_4] [i_6] [i_9])))))));
                        var_23 = (99 != 57);
                        var_24 = (arr_13 [i_9]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_25 = ((var_7 + (((!(((-519974528 ? -869175915 : (arr_29 [i_4])))))))));
                                var_26 += (((((-(arr_25 [i_4] [i_4] [i_4] [i_10] [i_10 + 2] [i_6] [i_11 + 2])))) && (((((((arr_4 [i_5] [i_10]) << (-1 + 25)))) ? var_7 : -771539153)))));
                            }
                        }
                    }
                    var_27 = ((((((!(arr_14 [i_4]))) % ((~(arr_29 [6])))))));

                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        var_28 ^= (!((((arr_9 [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_5]) - var_5))));
                        var_29 = ((~(-var_7 - var_0)));
                    }
                }
            }
        }
        var_30 += (((((((~(arr_3 [i_4])))) && var_6)) ? ((var_0 * (((1 ? 2126799391 : (arr_28 [i_4] [i_4] [i_4] [i_4])))))) : ((min(63, 15826612181637792901)))));
    }
    #pragma endscop
}
