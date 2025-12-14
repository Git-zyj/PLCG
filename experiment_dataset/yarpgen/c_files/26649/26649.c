/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(var_2, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (~var_9);
                arr_5 [i_0] [i_0] [7] = (arr_4 [i_0] [i_1] [i_0]);
                arr_6 [6] &= 4294967295;

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 *= (arr_12 [i_0] [i_2] [i_2] [i_4]);
                                var_16 = ((~(((arr_4 [i_2 - 3] [i_2 + 2] [i_2 + 3]) ? 4294967295 : var_2))));
                            }
                        }
                    }
                    var_17 ^= ((((~(arr_12 [i_2] [i_2 - 3] [i_2] [i_2 - 2])))) && (arr_13 [5] [i_1] [i_2 + 2]));
                }
                arr_16 [i_0] [i_1] = (max(var_11, (arr_3 [i_1] [i_1] [i_0])));
            }
        }
    }
    var_18 = (max(var_10, (((var_9 ? var_2 : var_7)))));
    #pragma endscop
}
