/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : var_11)) % (min(var_0, (arr_2 [i_0 - 2])))));
        var_13 += var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 &= ((~(-14666 >= -var_1)));
                    var_15 = min(((max((arr_7 [i_1] [i_2 - 1]), (arr_4 [i_1] [i_1])))), 0);
                    var_16 = 0;
                    arr_11 [i_1] = ((+((min((arr_4 [i_1] [i_1]), (arr_9 [i_0 - 1] [i_1] [i_2 - 1] [i_2]))))));
                }
            }
        }
        var_17 = ((var_2 ? 67 : (min((arr_9 [12] [1] [1] [i_0 + 2]), (min(var_9, (arr_5 [i_0 - 2] [i_0 - 2] [i_0])))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_18 |= (((max(var_2, (arr_5 [i_0] [i_0 - 1] [1]))) * ((((-var_3 != (-122 * var_5)))))));
                arr_17 [i_4] = (min(((max(var_11, (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), ((-(arr_2 [i_0 + 1])))));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_19 = 2147483647;
                    var_20 = -15;
                }
                arr_21 [i_4] [i_3] [i_4] = (((((((min(1315754166553000931, (arr_19 [5] [i_4])))) ? (var_6 << var_12) : (arr_10 [i_3] [i_4] [9])))) ? (max((!-42), (var_5 + var_6))) : ((((min(var_8, var_9)) >> (((max(9223372036854775807, 0)) - 9223372036854775787)))))));
            }
            arr_22 [9] [i_3] = (max(((((((var_10 ? 4294967295 : (arr_15 [8] [i_3] [8])))) >= (min(var_0, var_6))))), (arr_18 [5] [7] [1] [i_0])));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_0] [i_0] [i_6] = (max((min(var_4, var_9)), (((6 ? var_2 : ((251 + (arr_4 [i_6] [i_6]))))))));
            arr_26 [i_6] = 1;
            var_21 = min((min((((var_7 >= (arr_18 [6] [6] [i_0] [6])))), var_0)), (--3017273452));
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((max((arr_5 [i_7] [i_7] [1]), 9)))));
        var_23 = (((arr_0 [i_7]) ? (arr_13 [i_7] [i_7] [i_7]) : ((-((min(var_1, 13586)))))));
        var_24 = (min((!127), (((arr_8 [i_7] [i_7] [i_7] [i_7]) + var_11))));
        var_25 ^= ((!(~var_1)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_32 [1] = (!var_5);
        var_26 ^= -245;
        var_27 = var_4;
    }
    var_28 ^= var_8;
    #pragma endscop
}
