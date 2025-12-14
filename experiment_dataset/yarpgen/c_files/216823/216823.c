/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (-9223372036854775807 - 1);
                arr_7 [i_1] = -1649173621433147831;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = 3452804686003388852;
        arr_10 [i_2] [i_2] = 97;
        var_18 = (max(var_18, 29635));
        var_19 = -1;
        arr_11 [i_2] |= 0;
    }
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_4] = 0;
                    arr_20 [i_3] = 10014726019737748684;
                    arr_21 [i_3] [i_3 - 2] [i_4] [i_5] = 8512646284237463138;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_26 [i_7] [i_7] = 1;
                    var_20 &= -11840;
                    var_21 = 42478;
                }
            }
        }
        var_22 -= -1112325051;
        arr_27 [i_3] [i_3 - 2] = 28292;
    }
    var_23 |= 252;
    var_24 = 252;
    var_25 = 1;
    #pragma endscop
}
