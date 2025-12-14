/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((arr_4 [i_0] [i_1 - 2]) ? var_1 : (arr_4 [i_0] [i_1]))) | ((~(arr_4 [i_1 - 4] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 -= var_1;
                                arr_13 [i_0] [14] [0] [i_2] [i_3] [i_3] [i_4] &= ((((var_9 - var_9) ? var_2 : ((122 ? var_6 : 6513818632110407286)))) >= ((((var_9 >= (((var_4 ? 96 : (arr_6 [i_2] [i_2] [i_0])))))))));
                                arr_14 [i_1] [i_1 - 1] [i_1] [i_1] = var_5;
                            }
                        }
                    }
                }
                arr_15 [i_0] [14] [i_1] = ((-var_0 != (((((var_2 ? var_3 : var_1))) | (arr_11 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [4])))));
                arr_16 [i_1] [i_1] = var_5;
            }
        }
    }
    #pragma endscop
}
