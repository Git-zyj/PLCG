/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_1] = 412920422;
                                var_19 = (((arr_7 [0] [i_1 - 2]) ? ((~(arr_7 [i_1 - 2] [i_1 - 2]))) : (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_1])))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_20 = var_8;
                                var_21 ^= (412920424 ^ var_16);
                                var_22 = (min(var_22, ((((arr_17 [i_5] [i_5] [i_2] [i_5] [i_0]) != (((arr_2 [i_5]) ^ (max(3882046884, var_11)))))))));
                                var_23 = ((((((((~(arr_4 [i_3] [i_1] [i_2])))) ? (((arr_2 [i_3]) ? (arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 1] [0] [i_1 - 1] [i_1 + 1]) : 2287724302)) : (var_11 | var_2)))) ? var_13 : (((!(((412920426 ^ (arr_5 [i_2] [i_1])))))))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_24 = var_9;
                                var_25 = ((var_5 ^ ((((arr_19 [i_1 - 3] [i_1 + 1] [1] [5]) << (((arr_9 [5]) - 1257468467)))))));
                            }
                            var_26 = (((arr_20 [i_0] [i_1] [i_1 - 2] [i_1 - 3] [i_3] [i_1 - 3]) | ((((arr_1 [i_0] [6]) >= var_0)))));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_23 [i_1] [3] [i_3] [i_3] [3] [i_3] [i_3] = 4268186335614671241;
                                var_27 = (min(var_27, ((((arr_9 [i_1 + 1]) == (arr_9 [i_1 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
