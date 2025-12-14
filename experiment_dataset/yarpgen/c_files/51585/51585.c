/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 &= (min((((-6280 ? 23 : 4294967295))), ((var_3 ? ((6280 ? -6280 : 18446744073709551590)) : var_3))));
    var_15 = ((~(min(var_11, (min(6272, 432345564227567616))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 -= (arr_5 [20] [i_1] [i_3 - 1] [i_4 + 1]);
                                arr_13 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 - 1] [i_0] = (min(((+((var_8 ? (arr_5 [i_1] [i_1] [i_2] [16]) : var_9)))), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
