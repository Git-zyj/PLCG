/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((var_3 ? (!var_13) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = min((3727565540 % 126), (((((-9223372036854775807 - 1) < -1160159442)) ? var_5 : 10)));
                                arr_13 [i_2] [i_2] [i_2] = ((var_4 ? ((((((2320912604 ? var_0 : var_1))) ? var_5 : (~var_4)))) : ((~(min(var_10, var_8))))));
                                var_17 ^= (((var_4 <= var_13) ? ((var_7 ? (max(var_7, var_2)) : (var_4 != var_2))) : (((var_6 != var_5) ? 0 : var_12))));
                            }
                        }
                    }
                    arr_14 [i_2 - 1] [i_2] [i_2] [1] = var_3;
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
