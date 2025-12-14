/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 6;i_4 += 1) /* same iter space */
                        {
                            var_11 = (arr_5 [i_2 + 1]);
                            arr_17 [i_0] [i_3] [i_4] = ((2147483647 ? (arr_0 [i_2 - 1] [i_0 + 1]) : var_4));
                            var_12 = (var_4 ? var_9 : ((~(arr_0 [i_0 - 2] [6]))));
                            var_13 += (((((((arr_2 [i_4]) + 2147483647)) << (13690069671994308170 - 13690069671994308170))) > (arr_2 [i_1])));
                        }
                        for (int i_5 = 4; i_5 < 6;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [i_2] [i_0] [i_3] = (arr_5 [i_0 - 2]);
                            var_14 = (arr_8 [i_1 - 2] [i_2 - 3] [i_3] [i_3]);
                            arr_21 [i_0] [i_1] [8] [i_3] |= (arr_7 [i_2] [i_3] [i_5]);
                        }

                        for (int i_6 = 1; i_6 < 6;i_6 += 1)
                        {
                            arr_26 [8] [i_1 - 1] [8] [i_0 - 3] [i_6 + 1] [i_0] &= (((arr_23 [0]) ? (arr_18 [i_0 - 1] [i_2 - 3]) : (((!(arr_24 [i_0] [0] [i_0]))))));
                            var_15 = (arr_11 [i_1 - 2] [i_0 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_16 = (((var_8 ? (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_7]) : 41)));
                            arr_29 [4] &= 2416139656;
                            var_17 = (((arr_2 [i_2 - 3]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 - 1])));
                            arr_30 [i_0] [i_3] = (((((arr_7 [i_0] [i_2] [i_3]) ? var_8 : 384526268))) ? (arr_3 [i_7]) : 19893);
                            var_18 = (min(var_18, ((((var_8 > var_6) ? 1 : 10)))));
                        }
                    }
                }
            }
        }
        var_19 = (arr_4 [i_0] [i_0 - 3] [i_0]);
        arr_31 [i_0] = 1;
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_20 *= (((arr_7 [i_8] [i_8] [i_8]) / (((min((arr_15 [6] [i_8] [i_8]), var_1))))));
        var_21 = var_1;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    arr_42 [i_10] [i_10] [1] = (min((arr_16 [i_9] [i_9] [i_10] [i_9]), (arr_39 [i_10] [i_9] [i_9])));
                    arr_43 [i_10] = (max((min((max(var_6, 8907893280821082247)), ((((arr_3 [i_10]) ? (arr_35 [i_8]) : 1878827622))))), (arr_39 [i_10] [i_9] [i_10])));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_50 [i_8] [i_11] [i_10] [i_9] [i_9] = (((min((max(67106816, 12211196417894940394)), (var_1 / -67106804))) <= (arr_34 [i_12])));
                                var_22 = ((~((985377898 ? ((((arr_18 [i_8] [i_9 - 1]) << (var_3 - 15732996082151719170)))) : ((var_1 ? var_3 : var_3))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
