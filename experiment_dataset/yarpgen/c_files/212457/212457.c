/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 -= (arr_0 [i_2 + 4]);
                    var_19 = ((((min(((((arr_5 [i_2] [i_1 + 2] [i_1] [i_0 + 1]) / (arr_2 [i_1] [i_1])))), (arr_8 [i_0] [i_1 - 2] [i_2])))) < (min((min((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_0]))), (arr_6 [i_0] [i_0])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= (((arr_6 [i_3] [i_3]) * (arr_7 [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_20 |= arr_13 [i_5];
                                var_21 = (((((arr_15 [i_3 - 1]) / (arr_21 [i_3 + 2] [i_3 + 2] [i_5] [i_5] [i_5] [i_5] [i_7 - 3]))) >= (((arr_18 [i_3] [i_3] [i_3 - 3] [i_3]) - (arr_17 [i_4] [i_4] [i_6] [i_7])))));
                                arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7 - 1] = (arr_10 [i_4]);
                            }
                        }
                    }
                    arr_25 [i_3] [i_4 - 2] [i_5] = (arr_6 [i_3 - 3] [i_3 - 3]);
                }
            }
        }
        var_22 = (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3]);
        arr_26 [i_3] = (((arr_0 [i_3 + 1]) < (arr_7 [i_3] [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_23 = (((arr_5 [i_8] [i_8] [i_8] [i_8]) || (arr_10 [i_8 - 1])));
        arr_29 [i_8] [i_8] = (((arr_12 [i_8] [i_8 - 3]) ^ ((((arr_10 [i_8]) | (arr_9 [i_8] [i_8]))))));
    }
    #pragma endscop
}
