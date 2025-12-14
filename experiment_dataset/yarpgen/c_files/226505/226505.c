/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((var_4 & var_0) ? 221 : (max(var_4, var_9))))) ? var_11 : ((((var_1 <= 32767) <= (max(96, var_4))))))))));
    var_13 = -var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 ^= (~3664);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_2] [i_1] [i_0] = -3231630593;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_2 [i_1] [i_4]) : 15872)));
                            }
                        }
                    }
                }
                var_15 = (min(var_15, (((~(~96))))));
                var_16 = ((-(9222535869667203746 < 3231630593)));
            }
        }
    }
    var_17 = (max(((var_9 ? (max(var_10, var_2)) : (~var_7))), (((61871 ? var_10 : -7)))));
    #pragma endscop
}
