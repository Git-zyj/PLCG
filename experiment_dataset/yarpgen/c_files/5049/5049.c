/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = var_8;
                var_15 = (min(var_15, 1));
            }
        }
    }
    var_16 = (max(var_6, (max((~-7496), ((max(-7478, var_0)))))));

    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (min(((~((243 | (arr_6 [i_2 - 1] [i_2 + 1]))))), ((~((~(arr_6 [i_2 - 2] [7])))))))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_18 = (((((-((var_10 + (arr_9 [i_2] [i_3 + 3])))))) ? (((!((min(var_5, var_10)))))) : ((((min(var_4, var_3))) ? ((min((arr_6 [i_2] [i_3]), (arr_8 [i_2] [i_3] [16])))) : ((min(var_11, (arr_6 [i_2] [i_3]))))))));
            arr_11 [i_2] [i_3] [i_3] = (((((arr_8 [i_2 - 1] [i_3] [i_3]) | (((arr_10 [i_3]) ? var_3 : (arr_8 [i_2] [i_3] [i_2 - 2]))))) != (arr_9 [i_2] [i_3])));
            var_19 = var_12;
        }
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_20 ^= (((arr_9 [i_4] [i_6 - 2]) ? (arr_7 [i_4]) : -7490));
                        arr_22 [i_6] [i_6] [i_7] [i_4 + 1] = (((((var_3 ? var_12 : (arr_21 [i_4 - 2] [i_5] [i_6 - 2] [i_7] [1])))) ? ((((arr_18 [i_4 - 1] [i_6] [i_6] [i_7]) <= (arr_9 [i_4] [i_7])))) : 239));
                    }
                }
            }
            arr_23 [i_4] [i_4] [i_5] = ((31 ? (arr_14 [i_4 + 1]) : (arr_14 [i_4 - 1])));
            arr_24 [i_5] [i_5] = (((arr_20 [i_4 + 1] [13]) > 70368744177408));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_21 += ((~(arr_7 [i_4 - 1])));
            var_22 = 464161138;
        }
        arr_27 [i_4] [i_4] |= 9;
        arr_28 [i_4 + 1] [i_4 + 1] |= (arr_16 [1] [1] [i_4]);
        arr_29 [i_4] = ((~((7490 ? (arr_26 [i_4 + 1] [i_4 - 1]) : var_0))));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_23 = (((((arr_13 [i_9]) && var_0)) ? ((~((min(var_2, 7466))))) : (arr_32 [i_9] [i_9])));
        arr_33 [i_9] [i_9] = ((((max(-var_4, ((((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9]) > (arr_25 [i_9] [i_9]))))))) ? (((7 ^ var_4) ? (1 + -481227536) : (arr_16 [i_9] [i_9] [i_9]))) : (((((~(arr_20 [i_9] [i_9])))) ? var_12 : -var_2))));
        var_24 = (((((((arr_9 [i_9] [i_9]) && -1485028919)))) / (min(1023, 7640830598545355026))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            arr_38 [i_9] [i_10] = ((arr_9 [i_9] [i_9]) * ((-(var_6 & var_4))));
            arr_39 [i_9] [i_9] [i_9] = (arr_10 [i_9]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_25 = (max(var_25, var_6));
                            arr_52 [i_14] = ((-((-(arr_17 [i_9])))));
                        }
                    }
                }
            }
            arr_53 [1] [i_11] [i_11] = (((arr_15 [i_9]) ? var_6 : (arr_25 [i_9] [i_9])));
        }
        arr_54 [i_9] = (min(((min(var_1, ((var_0 ? var_7 : (arr_44 [i_9] [i_9] [i_9])))))), var_3));
    }
    /* vectorizable */
    for (int i_15 = 4; i_15 < 15;i_15 += 1)
    {
        var_26 = (max(var_26, ((((var_2 / (arr_20 [9] [i_15 - 3])))))));
        var_27 = (min(var_27, (((var_6 ? (arr_25 [i_15] [i_15 - 1]) : ((((arr_20 [18] [i_15]) / var_3))))))));
        var_28 = (((arr_6 [i_15] [i_15 - 2]) ? (-7462 % 7940242229896787599) : 8));
        arr_59 [i_15] [i_15] = (arr_17 [i_15]);
    }
    #pragma endscop
}
