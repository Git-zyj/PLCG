/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~(var_7 * var_9))));
    var_14 = (min(var_12, var_9));
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (arr_0 [i_0] [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (arr_5 [i_0]);
                    arr_7 [i_0] [i_0] [i_2] = (arr_5 [i_0]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (arr_3 [i_0] [i_1]);
                        var_18 = (max(var_18, (6277763964753009585 || 6277763964753009567)));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_4] [i_2] [i_3] [i_0] [i_1] = (arr_3 [i_2] [8]);
                            var_19 = (((((arr_11 [i_0] [i_1]) | (arr_12 [i_0] [2] [i_3] [i_3]))) == ((((arr_12 [i_0] [i_1] [i_2] [i_3]) ^ (arr_5 [i_0]))))));
                            arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] = (-13092 ^ -6277763964753009550);
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_20 = (arr_0 [i_5 - 2] [i_5 + 1]);
                            var_21 = (max(var_21, (arr_3 [i_0] [i_0])));
                        }
                        var_22 = (max(var_22, ((((((-(arr_15 [i_1] [i_2] [i_2])))) | (arr_15 [i_0] [i_2] [i_2]))))));
                        arr_17 [16] [i_0] [i_2] [i_3] [i_2] = (arr_15 [i_0] [i_0] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [2] [i_2] [i_0] [1] = (arr_8 [i_0] [i_2] [i_2] [i_6 - 1]);
                                var_23 = (arr_15 [i_1] [i_0] [i_6]);
                                var_24 = (arr_8 [i_0] [i_0] [i_2] [i_6]);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_25 = (((((((arr_9 [i_0] [i_8] [i_8] [i_0]) == (arr_9 [i_0] [i_1] [1] [i_8]))))) >= (arr_11 [i_0] [i_1])));
                    arr_26 [i_0] [i_0] = (((arr_22 [i_0] [i_1] [4] [i_0] [i_1]) ? (arr_12 [i_1] [i_1] [i_1] [i_0]) : (((arr_8 [i_0] [i_0] [i_1] [i_1]) ? (arr_25 [i_1] [i_0]) : (arr_11 [i_1] [i_1])))));
                    var_26 = (max(var_26, ((((arr_24 [i_1] [i_8]) == (((arr_3 [i_0] [i_1]) ? (arr_11 [i_0] [i_1]) : (arr_24 [i_0] [i_8]))))))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_27 = (i_0 % 2 == 0) ? ((((((((arr_8 [i_0] [i_1] [1] [i_0]) % (arr_28 [i_0])))) ? (((arr_16 [8] [i_1] [i_1] [i_9]) ^ (arr_5 [i_0]))) : (arr_5 [i_0]))) * ((((((arr_11 [i_0] [i_1]) ^ (arr_10 [i_0] [i_0])))))))) : ((((((((arr_8 [i_0] [i_1] [1] [i_0]) * (arr_28 [i_0])))) ? (((arr_16 [8] [i_1] [i_1] [i_9]) ^ (arr_5 [i_0]))) : (arr_5 [i_0]))) * ((((((arr_11 [i_0] [i_1]) ^ (arr_10 [i_0] [i_0]))))))));
                    var_28 = ((((arr_15 [i_0] [i_0] [i_0]) < (arr_21 [i_0] [i_1] [i_9] [i_1] [i_0] [i_1] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
