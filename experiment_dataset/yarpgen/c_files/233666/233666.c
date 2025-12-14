/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((var_10 ? (((arr_5 [i_0] [i_0] [i_0 - 1]) ? var_0 : (arr_5 [i_0] [16] [i_0 + 3]))) : var_3)))));
                    var_12 = 0;
                }
            }
        }
    }
    var_13 = ((((((((var_1 ? var_5 : var_4))) ? ((max(64, 137))) : var_0))) ? ((~(min(14307509491451302692, var_4)))) : (((var_1 | ((7 ? var_6 : 2147483647)))))));
    var_14 = (((((109 ? 268402688 : var_6) / var_2))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = var_2;
                            arr_16 [i_4] [i_4] [i_4] [i_4] = (max(((((((max(146, (arr_11 [i_4] [i_4]))))) ^ var_9))), (arr_5 [i_3] [i_4] [19])));
                            arr_17 [i_3] [i_4] [i_4] [i_3] [i_4] [1] = (((((((var_4 ? var_3 : var_7))))) * -var_1));
                            arr_18 [i_4] = 3184068331;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] [i_4] = (arr_11 [i_4] [i_4]);
                            var_16 = -4026564607;
                            var_17 = (arr_10 [i_7 + 4] [i_4] [i_7 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
