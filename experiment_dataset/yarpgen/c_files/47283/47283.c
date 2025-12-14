/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_6 + 2147483647) << (var_9 - 27400)));
    var_13 = (min(var_13, var_9));
    var_14 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [i_2 + 2] [i_3] [i_4 + 1] = (max((((arr_11 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1] [i_2 + 2] [9] [i_2 + 2]) | var_11)), (arr_8 [i_3 + 1] [i_3] [i_3] [i_2 + 2])));
                                arr_13 [i_1] = (var_6 || var_11);
                            }
                        }
                    }
                    var_15 *= (max((var_11 / var_5), (var_5 * 62512)));
                    var_16 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
