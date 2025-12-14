/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 &= ((!((((var_4 <= 4342797797521571546) % ((var_1 ? (arr_0 [i_1 - 1]) : (arr_2 [i_0] [4]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = 9223372036854775807;
                                arr_10 [i_3] [i_3] [i_3] = (arr_1 [i_4 + 2]);
                                arr_11 [i_4] [i_1 + 1] [i_2] = (((((((arr_1 [i_2]) ? (arr_1 [i_0]) : var_10)) + 2147483647)) << (((((min((arr_1 [i_4 + 3]), (arr_1 [i_0 - 2]))) + 158987328)) - 4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= (((((~(max(var_13, var_9))))) ? var_14 : (((max(var_15, var_16)) << (((42808 + -6) - 42802))))));
    #pragma endscop
}
