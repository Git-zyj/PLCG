/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 -= ((((-1293763020 <= 0) || 0)) ? 14685473164396942295 : 18446744073709551600);
                var_20 = ((((-(max(18446744073709551613, -27753)))) <= ((((arr_4 [i_0] [i_1] [i_0]) - (0 + 14))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (arr_3 [i_0]);
                            var_22 *= (min((((var_7 ? 4777 : (arr_5 [i_0] [10] [2])))), ((max((arr_2 [i_0]), var_2)))));
                        }
                    }
                }
            }
        }
    }
    var_23 |= ((min(0, var_7)));
    #pragma endscop
}
