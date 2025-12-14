/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_0 + 2] = ((1890480135 ? (arr_2 [i_0 - 2]) : (1 < 0)));
                                arr_16 [i_4] [i_3 + 1] [i_1] [i_1] [i_0 + 1] = ((((1 ? 1 : 43)) >= ((-(arr_9 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_4])))));
                                var_20 *= (((~2404487177) ? (arr_8 [0]) : (1890480140 >> 1)));
                            }
                            var_21 |= ((!((((arr_12 [i_0] [i_0 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? var_2 : (arr_12 [i_0] [i_0 + 2] [i_0] [i_2] [i_3 + 1] [i_3]))))));
                        }
                    }
                }
                arr_17 [i_1] = var_1;
                arr_18 [i_1] [i_1] = var_1;
                arr_19 [i_0] [i_1] = ((var_7 ? (((min(1, 65517)))) : (((arr_5 [i_0] [i_0] [i_0 + 2]) | (arr_0 [i_0 - 2])))));
                var_22 += ((~((240 ? 1 : var_15))));
            }
        }
    }
    var_23 = (max(-32225, 1));
    var_24 = (6382072084848218623 | var_15);
    var_25 = (max((-var_10 ^ var_15), var_3));
    #pragma endscop
}
