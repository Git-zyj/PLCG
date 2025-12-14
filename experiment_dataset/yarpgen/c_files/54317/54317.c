/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = ((5733959763888594257 ? 5733959763888594257 : 5733959763888594257));
                            var_12 -= ((!((((var_6 + var_0) ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : (arr_6 [i_0] [i_1] [i_1 + 1] [i_1]))))));
                            arr_11 [i_1] [i_1 - 2] [i_2] [i_3] |= (arr_4 [9]);
                            var_13 = (max(((((((var_9 | (arr_6 [i_0] [i_1] [i_2] [i_3 - 1])))) ? var_2 : (min(-5733959763888594257, 5733959763888594257))))), (max(var_0, (max(5733959763888594256, 144115188075839488))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [9] [i_6] [i_1] [i_4] [1] [1] [i_6] = ((max((arr_7 [i_0] [i_4 - 1] [i_6 + 1] [i_5 - 1]), var_0)));
                                var_14 = ((((var_3 / var_8) * var_1)));
                                var_15 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = -25130;
    #pragma endscop
}
