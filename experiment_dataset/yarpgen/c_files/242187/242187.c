/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = var_4;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_14 ^= ((-((((arr_5 [i_2]) == 6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (6730 % 6730)));
                                var_16 = 1132788787;
                                var_17 = (i_1 % 2 == 0) ? ((1592628973 << (((arr_4 [i_1] [12] [i_1]) - 9361)))) : ((1592628973 << (((((arr_4 [i_1] [12] [i_1]) - 9361)) - 50120))));
                            }
                        }
                    }
                    arr_13 [i_2] [12] [i_0] [i_2] |= ((((((arr_4 [i_2] [i_0 - 1] [i_2]) ? (arr_1 [i_0 - 1]) : (arr_7 [i_2] [i_2] [i_0])))) ^ (((max(1924407561924530030, var_1)) ^ (arr_8 [i_0 - 3] [i_0] [i_0])))));
                    var_18 = (~32217);
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_19 ^= var_5;
                    var_20 = (max(var_20, 3385028620));
                    var_21 ^= 58806;
                    arr_16 [i_1] = (((arr_9 [i_5] [i_1] [i_1] [i_0 + 1]) ? (arr_10 [i_0 - 4] [13] [i_0 - 1] [i_0 - 1]) : ((((arr_0 [i_0 - 3]) == (((arr_2 [i_0] [i_5]) ? 1132788787 : var_12)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_1] [i_6] [10] = ((~((32198 & (arr_6 [i_1] [i_1] [i_7])))));
                            var_22 = (arr_15 [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_23 = (3179137601 == var_0);
    var_24 = ((var_8 * (!var_3)));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_8] = (arr_31 [i_8] [9] [i_10]);
                    var_25 = (max((max(-1132788788, (arr_30 [i_8] [i_8]))), -43));
                    var_26 = (max(var_26, ((((arr_31 [i_10] [i_9] [i_8]) == (arr_28 [i_8]))))));
                }
            }
        }
    }
    #pragma endscop
}
