/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (arr_5 [i_0] [17] [i_0]);

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_12 = (max(var_12, var_4));
                                var_13 = ((!((((var_2 ? var_9 : var_6))))));
                            }
                        }
                    }
                }
                var_14 = (max(((max((arr_5 [i_0] [13] [i_0]), 3524))), ((3319 ? var_2 : (arr_5 [0] [7] [i_0])))));
                var_15 ^= ((+((~(((var_2 + 9223372036854775807) << (91 - 91)))))));
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
