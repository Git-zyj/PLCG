/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((var_2 & (arr_0 [i_1 - 1] [i_1]))) + ((((((var_8 ? (arr_1 [6]) : var_8))) ? (var_10 > 1) : (!var_3))))));

                for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, (((((min(1380877349, 1))) ? var_1 : (((var_3 || (arr_5 [i_1 - 1] [i_2 - 3])))))))));
                    arr_9 [i_0] [i_2] [i_2] [3] = 1;
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [10] [i_0] |= ((arr_1 [i_1 - 1]) + (arr_4 [i_1 - 1]));
                    arr_15 [20] |= (-90 < var_8);
                    arr_16 [i_3] [i_1 + 1] [i_1 + 1] [i_3] = ((1 ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_17 += ((4095 <= (~var_7)));
                                var_18 = (max(var_18, ((((arr_4 [i_5 + 1]) > var_2)))));
                            }
                        }
                    }
                }
                var_19 = ((((max((arr_13 [i_1 + 1] [13] [i_1 - 1] [i_1 + 1]), (arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? (((max(var_11, (arr_21 [i_1 - 1] [i_1] [i_1 - 1]))))) : ((1 * (arr_13 [i_1 - 1] [1] [i_1 + 1] [i_1 - 1])))));
                var_20 *= ((1 ? 18446744073709551594 : 1));
            }
        }
    }
    var_21 &= (var_10 > ((var_12 << (-var_13 + 7972))));
    #pragma endscop
}
