/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((3 <= (((var_14 <= ((var_1 ? 19 : -8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = 12288;
                                var_21 = (max(var_21, (((18446744073709551597 % (((12287 ^ (arr_11 [i_2 - 1] [i_2] [i_2] [i_2 - 3] [i_2])))))))));
                            }
                        }
                    }
                    var_22 = (max(3, (max((arr_7 [i_2] [i_2 - 1]), (arr_7 [i_2] [i_2 - 3])))));
                    arr_14 [i_0] [1] [3] [i_2] = ((arr_5 [i_0] [i_0] [i_2] [i_2]) + ((((var_11 ? 18446744073709551596 : -23)) / -3)));
                    arr_15 [i_0] [i_2] [i_2 - 1] [i_0] = (var_8 + 6875914438028176551);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = ((((0 * ((-1 ? 32756 : (arr_2 [i_1]))))) == -109));
                                arr_22 [i_0] [i_2] [i_2 - 1] = (max(253, var_13));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_26 [19] [i_1] [19] [19] = (arr_12 [1] [i_1] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_14));
                                var_25 = ((var_2 ? 1 : var_2));
                                var_26 = (((48 >= 32045) >> (arr_0 [i_0] [i_0])));
                                var_27 = var_9;
                            }
                        }
                    }
                    arr_31 [i_0] [19] [i_7] [i_0] = (min((arr_19 [i_0] [i_0] [i_0] [i_1] [0] [20]), (arr_17 [i_0] [10] [8] [10])));
                    arr_32 [i_1] = (((max((((var_7 ? var_11 : 33491))), ((29782 * (arr_23 [i_7] [i_0] [i_0]))))) >> (((arr_19 [i_0] [i_0] [i_1] [12] [4] [i_7]) - 1146847648))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_10] = 18446744073709551584;
                    arr_36 [i_0] [i_0] [i_10] [8] = ((var_8 ? (arr_2 [i_10]) : (-23 / -3)));
                    arr_37 [i_0] [i_10] = (arr_27 [i_10] [i_10] [i_1] [i_0]);
                }
                arr_38 [i_1] [i_0] [i_0] = ((((450 > (arr_16 [0] [i_1]))) ? ((min(-68, (arr_16 [16] [i_1])))) : (((arr_16 [4] [i_1]) ? (arr_16 [1] [1]) : -4))));
            }
        }
    }
    #pragma endscop
}
