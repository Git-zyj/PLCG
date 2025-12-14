/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((231 == var_3) ? (min(var_10, var_3)) : (((59498 ? 9223372036854775807 : 205))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (min(4294967295, 9223372036854775807));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (3365912796330830161 / -9161630982032135765);
                                var_20 = (min(var_20, var_2));
                                var_21 -= ((((max(var_1, (arr_11 [i_0 + 1] [i_4] [i_4] [i_4])))) ? ((var_12 ? var_13 : (arr_11 [i_0 + 1] [8] [i_4] [i_3]))) : ((var_12 ? (arr_8 [i_0 + 1] [i_0 + 1]) : (arr_11 [i_0 + 1] [i_1 + 1] [i_4] [i_1 + 1])))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0 - 1] [9] = var_16;
                }
            }
        }
    }
    #pragma endscop
}
