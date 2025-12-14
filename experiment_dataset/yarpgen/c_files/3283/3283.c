/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((max(var_13, (0 << 0))));
    var_15 = max(var_4, 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((1 | 1) << ((min(1, 1))))) << 1));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_16 = (max((((0 == 1) << 1)), (((arr_3 [i_2 + 1] [i_1] [i_1]) + var_0))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (((arr_6 [i_2 + 1]) ? 1 : ((max(0, (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = arr_4 [i_0];
                            var_18 = ((1 == 1) && ((min((arr_11 [i_0] [i_1] [i_2] [i_0] [1]), ((max((arr_8 [i_0] [i_1] [i_2 + 1]), 0)))))));
                            var_19 = ((((var_1 ? (arr_3 [i_2 + 1] [1] [i_2]) : 1))) && (((var_0 >> (((~var_9) + 20))))));
                            var_20 = (max(var_20, (arr_9 [1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = ((1 ? var_6 : (arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_22 ^= 0;
                            var_23 = ((((((arr_8 [i_0] [i_1] [i_2 + 1]) & 1))) ? 1 : (~0)));
                            arr_19 [i_0] [i_1] [i_1] [i_1] [1] = (1 << 1);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [1] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0];
                            var_24 = (min(var_24, ((((arr_17 [i_0] [i_2 + 1] [i_7] [i_7] [i_7] [i_7] [1]) ^ (arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                            arr_24 [i_0] [i_0] [i_0] = 0;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [i_0] [i_5] [i_0] [1] [i_0] = ((1 ? 1 : (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 1])));
                            arr_30 [i_5] [i_5] [i_2 + 1] [i_5] [i_8] [i_0] [1] = -1;
                        }
                    }
                    var_25 = arr_0 [i_0] [i_1];
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [1] [1] [1] [i_0] = ((1 ? 1 : 1));
                    var_26 &= (min(var_13, (max((1 ^ 1), (1 && 1)))));
                    var_27 = 1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_28 = ((((-((min(var_9, 1))))) / (1 & 1)));
                    var_29 *= max(1, (max(var_6, (arr_2 [i_12]))));
                }
            }
        }
    }
    #pragma endscop
}
