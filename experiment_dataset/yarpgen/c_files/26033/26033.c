/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [1] [i_2] [i_2] [i_4] = var_4;
                                var_19 *= (min(((((var_3 * var_8) && (((var_12 ? var_13 : (arr_12 [10] [10]))))))), (min(3065365079, ((max(var_16, var_15)))))));
                                var_20 = (min(var_20, ((min((var_4 - var_2), 0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((((arr_6 [i_1]) ? (arr_12 [i_0] [i_0]) : var_7))) ? var_4 : -84)))));
                                var_22 = (((((var_0 <= (arr_9 [i_5] [i_1] [i_2 + 3] [i_5] [15] [i_2]))) ? 0 : ((var_16 ? (arr_6 [i_2]) : 0)))));
                            }
                        }
                    }
                }
                var_23 = min(65535, (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]), ((min(var_10, (arr_5 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
