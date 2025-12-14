/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] |= (min((var_9 | 1), (arr_0 [i_0])));
        var_19 += ((((max(-32761, -32761))) && (3748 && 254)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 3] [i_2] = (-32749 ? -32736 : 7124394635428987845);
                                arr_14 [i_0] [i_2] [i_0] [i_3] [i_4] = (arr_12 [i_0] [i_0] [i_1] [8] [i_3] [i_4]);
                            }
                        }
                    }
                    var_20 = var_7;
                }
            }
        }
        var_21 = ((((min(((max((arr_0 [i_0 - 2]), var_14))), (min((arr_0 [i_0]), var_13))))) << (((var_0 / -var_1) - 22445769))));
        arr_15 [i_0] = (((arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((arr_7 [23] [i_0] [23] [i_0 - 2]) | (arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) : (max((!var_2), 0))));
    }
    var_22 = (min(var_22, var_17));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6] [i_6] = 65535;
                arr_23 [i_6] [i_6] = ((-(!var_4)));
                arr_24 [6] [10] |= ((var_17 <= (max(((65522 ? (arr_18 [i_5]) : (arr_18 [i_5]))), ((var_10 ? var_17 : var_18))))));
            }
        }
    }
    var_23 = ((((max((var_11 != 23), var_4))) ? (var_13 + 148) : (~var_13)));
    #pragma endscop
}
