/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(((-((var_14 ? 2564 : (arr_0 [1] [i_0]))))), (max((arr_1 [i_0 + 3]), var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = ((max((~3905717274), 3905717274)));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] = (arr_3 [3] [i_1]);
                        arr_12 [10] [i_2] [i_3] [i_0] [i_0] = var_2;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_22 [6] [12] [1] [i_5] [i_6] [i_7] = ((+(((((389250021 ? (arr_16 [i_6] [i_5]) : var_1))) ? (arr_21 [16] [i_5] [13] [1] [i_6] [i_5]) : (((arr_4 [i_5] [i_6] [i_7]) ? 1610612736 : var_6))))));
                        arr_23 [i_5] [1] = var_2;
                    }
                }
            }
        }
        arr_24 [i_4] [i_4] &= (max((((arr_6 [i_4]) * (arr_21 [i_4] [1] [i_4] [1] [16] [i_4]))), (arr_21 [12] [1] [i_4] [i_4] [7] [i_4])));
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        var_17 = (min(var_17, (arr_28 [i_8 - 2])));
        var_18 = (62969 < var_0);
    }
    var_19 |= 38381;
    #pragma endscop
}
