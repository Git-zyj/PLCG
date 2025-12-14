/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_12 ? 1024 : var_7)))));
    var_18 = 4256;
    var_19 = (((((var_1 ? var_5 : 39678))) ? 8804 : 102));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((arr_1 [i_0]) ? (((var_0 != (arr_6 [i_1])))) : (arr_1 [i_1])));

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_20 ^= ((((((var_8 ? (arr_1 [i_0]) : 1)))) ? var_10 : (arr_0 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 &= ((((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_12 [i_0] [i_1] [i_2] [i_3 + 3] [i_0] [i_3 + 3] [i_0]))));
                                var_22 = (arr_6 [i_1]);
                                var_23 *= (arr_12 [i_0] [i_1] [9] [i_3] [i_4] [i_1] [i_2]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = var_9;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_24 &= ((~(((arr_10 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    arr_17 [i_0] [i_5] [i_5] [1] = 25858;
                }

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_25 = (((((~(56731 & var_2)))) ? (arr_1 [i_0]) : var_4));
                    var_26 *= (1 ^ 2018180048);

                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        arr_22 [i_7] [i_7] = var_16;
                        var_27 = (~var_2);
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        var_28 ^= (((((0 ? (arr_8 [i_8] [i_8] [i_6 - 2] [i_6 + 2]) : ((((64521 != (arr_8 [i_0] [i_1] [i_0] [20])))))))) ? (arr_24 [9] [i_1] [i_1] [i_6 - 2]) : (min((arr_11 [i_0] [8] [i_0] [i_6] [i_0] [i_6]), ((((arr_2 [i_0]) ? 82 : (arr_2 [i_6]))))))));
                        var_29 = (arr_10 [i_8] [i_1] [i_1] [i_6 - 1] [i_1] [i_6 - 1]);
                        var_30 -= (min(1023, (arr_15 [i_8 + 2])));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_31 = var_16;
                        var_32 = var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
