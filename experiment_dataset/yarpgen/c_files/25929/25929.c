/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 |= var_1;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_19 |= var_9;
                                var_20 = (3 + 18446744073709551608);
                                var_21 = (min(var_21, var_6));
                            }
                            arr_11 [i_0] [16] [i_0] &= -0;
                            var_22 = ((((((((var_3 || (arr_2 [i_1]))))) <= (min((arr_5 [i_1] [0] [15]), var_1))))) >> (var_11 - 23804));
                            arr_12 [1] [1] [i_2] [i_2] = min((arr_9 [i_2] [15] [i_2] [i_2 - 3] [i_2] [i_2] [i_3 + 1]), (arr_0 [i_2 + 1]));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_23 += var_3;
                    var_24 |= ((((1483 >> (18446744073709551612 - 18446744073709551606))) & (arr_4 [16] [i_1] [16])));
                }
            }
        }
    }
    var_25 = ((((-var_7 * (min(18446744073709551615, var_13)))) / var_8));
    #pragma endscop
}
