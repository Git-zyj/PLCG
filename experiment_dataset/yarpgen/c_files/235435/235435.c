/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (~18446744073709551615)));
                                var_21 = (max((((!((((-127 - 1) * 0)))))), (-127 - 1)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((((-127 - 1) || 85)));
                            }
                        }
                    }
                    var_22 = (((((-127 - 1) | (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << 0)))) ^ (arr_0 [i_2] [i_1])));
                }
            }
        }
    }
    var_23 = (!var_16);
    var_24 = (min(var_24, (-127 - 1)));
    #pragma endscop
}
