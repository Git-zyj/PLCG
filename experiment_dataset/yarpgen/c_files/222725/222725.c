/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((7255 ^ var_4) ? (-7267 % 255) : ((0 ? var_5 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-7285 ? 0 : 255));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 ^= var_2;

                            for (int i_4 = 2; i_4 < 22;i_4 += 1)
                            {
                                arr_11 [i_3] [i_0] [i_3] [i_3] [i_4 - 2] [i_0 - 3] = (((var_9 ? var_2 : (arr_1 [i_0 - 2]))));
                                arr_12 [4] [i_0] [i_1] [i_1] [i_4] &= ((-7267 ? (min(var_8, -var_3)) : (min((((var_3 ? -3438 : var_7))), (var_9 | 4503599627370495)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                var_12 = var_5;
                                arr_16 [i_5 + 1] [i_0] [i_2] [i_1] [i_0] [i_0] = 7290;
                                var_13 -= 33554431;
                            }
                            var_14 = ((((!(-127 - 1)))) * (((arr_1 [i_0 - 2]) ? var_0 : var_0)));

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_15 = (min((((arr_8 [i_0] [i_0 - 1] [i_2] [i_0]) << var_5)), ((((arr_8 [i_0] [i_0 - 1] [i_2] [i_3]) != var_4)))));
                                var_16 = (max(var_16, (((1 ? (((var_6 ? var_1 : var_6))) : (-7267 * var_4))))));
                                var_17 = (((((~(arr_0 [i_0 + 2] [i_0 + 2])))) ? var_1 : ((-(arr_0 [i_0 - 2] [1])))));
                                var_18 = (min(var_18, ((((var_9 | (arr_3 [i_6])))))));
                            }
                            arr_19 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = 4261412865;
                        }
                    }
                }
            }
        }
    }
    var_19 = (1 * 0);
    #pragma endscop
}
