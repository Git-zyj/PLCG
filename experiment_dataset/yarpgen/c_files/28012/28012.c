/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, ((max(9223372036854775807, 1704227161)))));
                                var_11 = ((!((((arr_10 [i_0] [1] [i_0] [i_0 + 1] [i_0 - 2]) ? var_5 : var_7)))));
                            }
                        }
                    }
                    var_12 ^= (~(((!(!var_2)))));
                    arr_11 [i_2] [18] [i_2] &= ((!(!var_4)));
                }
            }
        }
    }
    var_13 |= (!0);
    var_14 |= var_1;
    #pragma endscop
}
