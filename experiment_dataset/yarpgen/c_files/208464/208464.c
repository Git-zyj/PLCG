/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -67;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((min(-64, var_8)));
                    var_13 = (max(var_13, var_6));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_14 = (max(63, (min(13478174438145716128, (arr_4 [i_2 - 2] [i_3 - 3])))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_15 = ((!(((arr_5 [i_1] [12] [i_0] [i_4 + 1]) > (arr_12 [i_0] [i_1] [4] [i_3] [i_4])))));
                            var_16 = var_1;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = var_1;
                            var_18 = (max(var_18, (((255 ? 16384 : 5774)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_19 *= arr_3 [12];
                            var_20 = arr_13 [i_2] [i_2];
                            var_21 = 1;
                            arr_18 [i_0] [i_1] [i_0] [i_3 + 1] [i_6] = ((-(arr_11 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_6])));
                        }
                        arr_19 [i_0] [i_3 - 3] = ((~((-25238381306563246 ? (((arr_5 [10] [i_1] [i_0] [i_3]) ? (arr_7 [i_1]) : (arr_16 [i_0] [i_0] [1] [i_2 + 1] [i_0] [10]))) : (arr_16 [i_2 + 1] [i_0] [i_2] [i_2 + 1] [i_2] [i_2 - 2])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
