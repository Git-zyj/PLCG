/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((148 || ((max((133 - var_3), 1023)))));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_17 = (((arr_2 [i_0]) & (arr_10 [i_0] [i_0 + 2] [i_0] [i_0] [i_3] [10])));
                            var_18 = ((((!(arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [8] [i_0 - 1]))) ? (150 > 4294967232) : (((arr_10 [i_0 - 1] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_0 - 1]) - (arr_7 [i_0 + 4] [i_1] [i_1] [i_1 + 1] [i_1])))));
                            arr_12 [i_0] [i_0] [i_3] [i_3] [8] |= (max((((((-(arr_10 [i_0 + 2] [i_1] [i_2] [16] [i_4] [i_4]))) != (arr_2 [i_4])))), (min(7, (arr_11 [i_0] [i_0] [8] [i_4] [16])))));
                        }
                        var_19 += (((arr_7 [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_0 + 1] [i_2]) > (((~(arr_9 [i_3] [i_3] [8] [i_3] [i_3]))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_20 ^= 114;
                            var_21 -= ((-(arr_3 [i_0 + 1] [i_5])));
                            arr_20 [i_0] [16] [i_2] [i_0] [i_6] [i_5] = (arr_1 [i_0] [i_1 - 1]);
                        }
                        var_22 = (max(var_22, (arr_4 [i_0 + 3] [i_0] [i_0] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_23 = ((((min(-1024, (((arr_9 [i_0] [i_2] [i_2] [i_0] [5]) ? (arr_22 [i_0]) : (arr_5 [i_0] [i_0] [i_2] [i_0]))))) + 2147483647)) >> (64 - 62));
                        var_24 = 137;
                        var_25 = (min(var_25, (arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1])));
                        var_26 = (min(var_26, ((max(39, ((((arr_13 [i_1 + 3]) / (arr_6 [i_7] [i_7] [i_1 + 4] [i_7] [i_7])))))))));
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_27 = (arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [15] [i_0 + 2]);

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_30 [i_0] = ((((arr_3 [i_1] [i_0]) + (arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_1 + 3]))));
                            arr_31 [i_0] [i_0] [i_0] = -117;
                        }
                        var_28 = (-1 - 1);
                    }
                    var_29 = (min(var_29, ((min(((((((~(arr_14 [i_0] [13] [i_2] [i_2] [i_1 + 2] [i_0])))) || (((108 << (-788596523 + 788596534))))))), (min((((arr_19 [i_0] [i_1] [i_1 + 1] [16] [i_2]) + (arr_2 [8]))), (arr_21 [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 2]))))))));
                    var_30 = (arr_26 [8] [8] [i_2] [8] [8]);
                }
            }
        }
    }
    var_31 = (min(var_31, var_4));
    var_32 = (~144);
    #pragma endscop
}
