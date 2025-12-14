/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = ((((-(!248))) * (var_1 < var_12)));

                            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                var_15 = ((~(((!(arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 2]))))));
                                var_16 = var_6;
                                var_17 ^= ((var_12 / ((var_6 ? var_7 : (arr_6 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 3])))));
                            }
                            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_18 = (((var_6 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_1] [i_2] [11]))));
                                var_19 = (max(13, ((var_12 ? 14 : (min(2046114085, var_7))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 20;i_6 += 1)
                            {
                                var_20 = ((!(arr_9 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6 + 2])));
                                var_21 = -var_7;
                            }
                        }
                    }
                }
                arr_15 [10] = (var_3 % var_8);
            }
        }
    }
    #pragma endscop
}
