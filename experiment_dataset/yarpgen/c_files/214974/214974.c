/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_1 [9])));
        var_21 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_22 = (((30245 & 2047) % (4164469508255193173 % 2147483647)));
        var_23 = (min(var_23, ((min(-65535, 1)))));
        arr_6 [i_1] = ((((arr_4 [7] [i_1]) ? ((~(arr_0 [i_1] [i_1]))) : 0)) * (((-(arr_2 [i_1 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                var_24 += ((var_12 ? 1 : ((var_6 ? (~var_9) : ((var_16 << (1775606040 - 1775606037)))))));
                arr_15 [i_3] = ((((((arr_9 [i_2]) * (((!(arr_8 [12] [i_2]))))))) ? (arr_7 [i_3] [i_3]) : ((((!(((54 ^ (arr_13 [i_2]))))))))));
            }
        }
    }
    var_25 = (min(var_25, var_11));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_26 = ((((((arr_13 [i_4]) << (((~var_6) - 3696819365168274887))))) ? ((-(arr_18 [i_4] [i_4]))) : ((233513737 ? 2047 : 0))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 = var_0;
                arr_24 [i_4] [i_4] [i_4] [i_4] = ((((((arr_12 [i_4] [i_6]) ? (arr_12 [i_4] [8]) : (arr_12 [i_4] [i_4])))) ? ((max((arr_12 [i_6] [i_4]), (arr_12 [i_6] [i_6])))) : (min((arr_12 [i_4] [i_6]), -2047))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_33 [i_4] [i_4] [5] [i_7] [i_4] = arr_19 [i_4];
                            var_28 = (max((((((max((arr_25 [i_5] [i_5]), (arr_26 [i_5] [i_7] [i_7] [i_9]))) + 2147483647)) << (((((((arr_10 [3] [i_8]) & (arr_25 [i_8] [i_7]))) + 2010730503)) - 23)))), ((-(((arr_32 [i_4] [i_4] [i_5] [i_5] [1] [i_5] [i_9]) & (arr_19 [i_9])))))));
                        }
                    }
                }
                arr_34 [i_7] [i_5] [i_7] = (((37 / 18446744073709551615) & (arr_8 [1] [i_5])));
                arr_35 [i_7] [0] = (arr_18 [i_4] [i_5]);
            }
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        {
                            arr_43 [i_10] = (arr_23 [i_4] [i_4] [i_4]);
                            var_29 = ((!((max((arr_18 [i_11] [i_11]), var_18)))));
                            arr_44 [10] [i_5] [i_5] [i_5] [i_11] [i_10] = ((-(arr_38 [i_12] [i_5] [i_5] [i_10] [i_10])));
                        }
                    }
                }
            }
            var_30 = (((arr_31 [i_4] [i_5] [i_4] [0]) ? ((var_11 & (arr_7 [i_4] [i_4]))) : -4294967295));
        }
        arr_45 [i_4] = ((!((((var_17 ? var_15 : var_9)) > (arr_12 [i_4] [i_4])))));
        var_31 = (max(var_31, (((0 ? 1 : 109)))));
    }
    #pragma endscop
}
