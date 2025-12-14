/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((18460 > (((arr_6 [i_0] [i_1] [i_2] [i_3]) % (arr_6 [i_0] [i_1] [i_2] [i_3])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 ^= (((((var_5 <= (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4])))) << (65477 - 65452)));
                            var_18 ^= (arr_9 [i_0]);
                            var_19 = (min(var_19, (1 - 0)));
                            arr_11 [i_1] = (arr_3 [i_1] [i_3] [i_1]);
                            arr_12 [i_0] [i_1] = ((-65477 || (~-7811621586535527506)));
                        }
                        var_20 = (i_1 % 2 == 0) ? (((((((~(44072 || 1403289710))) + 2147483647)) >> ((((min((arr_9 [i_1]), (arr_9 [i_1])))) - 199))))) : (((((((~(44072 || 1403289710))) + 2147483647)) >> ((((((min((arr_9 [i_1]), (arr_9 [i_1])))) - 199)) + 123)))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_5] [i_5] [i_1] = (arr_14 [i_0]);
                        arr_17 [i_0] [i_5] [i_2] [i_1] = (min((arr_15 [i_0] [i_0] [i_0] [i_1]), (min(44, (arr_15 [i_1] [i_2] [i_1] [i_1])))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_21 = (arr_19 [i_6] [i_1] [i_0]);
                            var_22 = ((~(arr_4 [i_0])));
                            var_23 = (arr_10 [i_6] [i_6] [i_5] [i_2] [i_1] [i_0] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_1] [i_2] [i_2] [i_5] [i_5] [i_7] = (!var_10);
                            arr_26 [i_0] [i_2] [i_1] [i_5] = (~0);
                            var_24 += (~((-(6950003496322044840 || -7467081935497885030))));
                            var_25 -= (arr_24 [i_7] [i_1] [i_2] [i_1] [i_5] [i_5] [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_1] [i_1] = var_7;
                            arr_30 [i_1] [i_5] [i_2] [i_1] [i_1] = (max(-65477, ((~(3478483866 != 0)))));
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_26 = (min(132178182921237530, (0 - 3441907231306551390)));
                            var_27 = (((-var_12 - (-3441907231306551390 + 0))));
                        }
                        arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? ((((((1 >> (((arr_23 [i_1] [i_5]) - 63993))))) <= (min(-11496740577387506773, ((min((arr_2 [i_0] [i_1]), (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) : ((((((1 >> (((((arr_23 [i_1] [i_5]) - 63993)) + 28127))))) <= (min(-11496740577387506773, ((min((arr_2 [i_0] [i_1]), (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] = ((((~(arr_1 [i_5]))) * (1360139117388652457 < 1067668746073834200)));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_28 -= ((~(arr_6 [i_0] [i_1] [i_0] [i_10])));
                        var_29 |= ((177 * 0) == -3441907231306551390);
                        var_30 = ((((min(19, 1))) ^ (((!(arr_9 [i_1]))))));
                    }
                    arr_37 [i_1] [i_1] = ((!(((~(!var_1))))));
                }
            }
        }
    }
    var_31 = (((-(max(-3441907231306551390, 4294967294)))));
    #pragma endscop
}
