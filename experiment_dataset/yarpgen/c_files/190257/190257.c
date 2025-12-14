/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((min(var_11, var_5)) / var_2)) / ((max((min(var_5, 22555)), 41707)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [1] = (max((((min((arr_5 [i_0] [i_0]), 22546)))), (((min(var_3, -2479615809271478490)) + (arr_3 [i_0])))));
                var_18 = (max(var_18, ((min((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1 + 2]))), (!-31))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = 22546;
                            arr_13 [i_0] [20] [20] [16] = ((max((arr_5 [1] [i_1 + 2]), 22553)));

                            for (int i_4 = 4; i_4 < 20;i_4 += 1)
                            {
                                var_19 ^= (min(var_8, 1));
                                var_20 ^= (min((arr_3 [i_0]), -1713163254));
                                arr_16 [i_1] &= ((var_1 > (((~43) ? ((max(0, var_8))) : -1713163254))));
                                arr_17 [i_0] [i_0] [7] [i_0] [i_0] = min(((((arr_8 [i_0]) && 22579))), 27956);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
