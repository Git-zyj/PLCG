/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_3, var_0))) ? ((7948072048306848607 >> (64372 - 64371))) : -var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = 1;
                            var_19 -= (max(((219 ? 29265 : 1)), ((-((min(162, (arr_4 [i_1]))))))));
                            var_20 = (max(var_20, (((((((0 <= -57) ? (max(var_1, (arr_5 [10] [10]))) : (arr_4 [i_0 - 1])))) ? var_4 : (arr_2 [1]))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_21 ^= (max(((-135752827 ? (!1) : -27437)), (~64)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 |= (min(var_16, -57));
                                var_23 = (arr_2 [i_0]);
                                var_24 = ((~((~(arr_7 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5])))));
                            }
                        }
                    }
                    var_25 = (max(var_25, 1707933079267069785));
                }
                var_26 ^= (arr_0 [14]);
            }
        }
    }
    #pragma endscop
}
