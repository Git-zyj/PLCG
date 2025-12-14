/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(((((arr_0 [i_0]) || ((!(arr_1 [i_0])))))), (arr_1 [i_0])));
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_12 = ((!((((arr_5 [i_1]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))))));
        var_13 = arr_5 [i_1];
        var_14 = -var_1;

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] = ((arr_6 [i_2]) + (((-3840 / (max((arr_3 [i_2]), var_4))))));
            var_15 = (max(var_15, (arr_0 [i_1 - 1])));
            arr_10 [i_1 - 1] [i_2] = (!var_4);
            arr_11 [i_1] = (~(arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1]));
            var_16 = 12592;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_17 = ((~((((1 ? (arr_12 [i_1]) : 6026777332051917615)) * (((1 ? (arr_7 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_3]))))))));

            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                var_18 = -11930;
                var_19 = (min(((var_6 ^ (arr_3 [i_3]))), ((((arr_1 [i_4 + 2]) ^ (arr_14 [i_1] [i_3] [i_1] [i_1]))))));
            }
            arr_18 [i_3] [i_1] [i_3] = (!(((~(arr_15 [i_3] [i_1 - 1])))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_20 = (i_5 % 2 == zero) ? ((((((((7481687659992818319 ? 6026777332051917641 : 6026777332051917615)) <= (((var_8 ? var_7 : var_1)))))) ^ ((((((~(arr_22 [i_5]))) + 2147483647)) << ((((-(arr_25 [i_7] [i_5] [i_1] [i_5]))) - 1113033482169389782))))))) : ((((((((7481687659992818319 ? 6026777332051917641 : 6026777332051917615)) <= (((var_8 ? var_7 : var_1)))))) ^ ((((((~(arr_22 [i_5]))) + 2147483647)) << ((((((-(arr_25 [i_7] [i_5] [i_1] [i_5]))) - 1113033482169389782)) - 2849958431068633677)))))));
                        arr_27 [i_5] = (max((((var_6 == (arr_19 [i_5])))), ((-(arr_13 [i_7] [i_1 + 2] [i_1])))));
                    }
                }
            }
            var_21 = (min(var_21, (arr_22 [12])));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = ((arr_19 [i_8]) + 6026777332051917649);
        var_22 = var_1;
        var_23 = (arr_8 [i_8 + 2] [i_8 + 2] [i_8]);
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_24 = ((((((arr_32 [i_9] [i_9]) || var_0))) | ((((arr_32 [i_9] [i_9]) <= (arr_32 [i_9] [i_9]))))));
        var_25 = -7481687659992818290;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                {
                    var_26 = 1;
                    arr_38 [i_9] = ((((!(arr_0 [i_11 - 1]))) ? ((max((arr_34 [0] [i_11 - 1]), (arr_1 [i_11 - 1])))) : ((((arr_37 [i_11 - 1] [i_11 - 2] [i_11 - 1]) != -1448597507)))));
                    var_27 = var_0;
                }
            }
        }
    }
    var_28 = (-9223372036854775807 - 1);
    var_29 &= ((((!7481687659992818297) || (((0 ? -116 : var_5))))) ? (((var_10 && (!var_6)))) : (max(var_0, 1)));
    #pragma endscop
}
