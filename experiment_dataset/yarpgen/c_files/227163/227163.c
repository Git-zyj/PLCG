/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? var_6 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 ^= (arr_7 [i_1] [i_2]);
                    var_13 = (arr_1 [i_1]);

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_14 = (min(var_14, ((((arr_2 [i_0]) ? (arr_4 [i_1] [i_3] [i_1]) : (((arr_1 [i_0 - 4]) ? (arr_6 [i_2 + 1] [i_0]) : var_6)))))));
                            var_15 = (arr_8 [i_2] [i_3] [i_2]);
                            var_16 = (((arr_14 [i_2 - 1] [i_1] [i_3 - 2] [i_0 + 1] [i_0]) ? var_0 : ((((!(arr_3 [i_0 - 3] [i_2])))))));
                        }
                        var_17 = ((!(((~(((arr_4 [i_3] [i_3] [i_3 - 1]) ? (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3]) : (arr_3 [i_0] [i_2]))))))));
                        var_18 = (((((var_1 ? -var_0 : var_5))) ? (((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) != var_9)) ? var_5 : (arr_11 [i_3] [i_2] [i_1] [i_0]))) : (((var_2 ? (arr_6 [i_0] [i_2]) : (arr_5 [i_0] [i_0]))))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_19 = (arr_4 [i_5] [i_2 + 1] [i_1]);
                            var_20 -= ((~(arr_13 [i_0] [i_0 - 3] [i_0])));
                            arr_17 [i_0] [i_2] [i_1] [i_2] [i_3] [i_5] [i_5] = var_7;
                            var_21 -= (-95 & 9695);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_22 ^= arr_9 [i_0] [i_2 + 1] [i_6];
                            var_23 *= var_6;
                            arr_22 [i_6] [i_6] [i_2] [i_1] [i_6] |= (((((arr_9 [i_2 - 1] [i_3 + 1] [i_6]) / (arr_9 [i_0 - 4] [i_1] [i_0 - 2]))) < (arr_9 [i_0 - 4] [i_1] [i_0 + 1])));
                            var_24 ^= (((arr_20 [i_0 - 2]) % (arr_5 [i_0 - 4] [i_3 + 1])));
                            var_25 = (max(var_25, (arr_7 [i_0] [i_0])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        arr_26 [i_0 - 4] [i_2] = ((((((((arr_18 [i_2] [i_2] [i_2]) <= (arr_21 [i_7] [i_2] [i_1] [i_0 + 1]))) ? (arr_5 [i_0] [i_0]) : ((((!(arr_15 [i_0] [i_1] [i_2] [i_7])))))))) ? var_8 : (6978683083285448941 || 99572814)));
                        var_26 &= (arr_9 [i_7 + 1] [i_2 + 1] [i_0 - 2]);
                        var_27 = (min(var_27, var_6));
                        arr_27 [i_2] = (arr_19 [i_0] [i_2 + 1] [i_2] [i_7] [i_7 + 1] [i_7]);
                    }

                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        arr_30 [i_2] = (-(arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1]));
                        var_28 = (min(var_28, ((((((var_6 ? (1 >> 1) : (arr_18 [i_0] [i_1] [i_0])))) ? ((((arr_23 [i_2 - 1] [i_0 - 1] [i_8 + 2] [i_0]) ? (arr_23 [i_2 + 1] [i_0 - 3] [i_8 + 3] [i_0]) : (arr_23 [i_2 + 1] [i_0 - 1] [i_8 + 3] [i_1])))) : (((arr_6 [i_8] [i_1]) ? (arr_12 [i_0] [i_0 - 4] [i_8] [i_8] [i_8]) : (arr_2 [i_0 - 2]))))))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_29 = (arr_0 [i_9]);
                        arr_33 [i_2] [i_1] [i_2] [i_9] = var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            {
                var_30 = (((((56352 ? 1 : 1))) ? (!1479742670) : (((arr_35 [i_10]) ? var_10 : (((arr_35 [i_10]) ? var_9 : (arr_38 [i_10])))))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_31 = (arr_38 [i_10]);
                            var_32 = ((-(arr_40 [i_10] [i_11] [i_12])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
