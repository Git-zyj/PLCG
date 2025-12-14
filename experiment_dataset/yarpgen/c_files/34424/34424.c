/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = var_9;
                                arr_16 [i_2] [i_1] [i_3] [i_0] [i_4] = (max(((var_2 ? (arr_11 [i_3 + 1] [i_1] [i_0 - 1] [i_2 + 1] [i_3 - 2] [i_4 - 2]) : (arr_11 [7] [1] [i_1] [i_2] [i_3 + 1] [i_4 - 2]))), (min(-1253374113482195774, ((max((arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]), -90)))))));
                            }
                        }
                    }
                    arr_17 [1] &= ((((((arr_1 [i_2]) ? ((((arr_3 [10]) / -84))) : (max(var_6, 1511726735))))) ? (arr_3 [1]) : (max((((arr_9 [i_0] [i_1] [i_1] [0] [0]) ? (arr_8 [6]) : -1253374113482195757)), (arr_10 [i_1] [7] [i_1] [i_2])))));
                }
            }
        }
    }
    var_13 = (((((31 ? ((var_9 ? 1731000466 : 18446744073709551611)) : var_3))) ? var_4 : ((var_0 ? (var_10 - 7609) : var_11))));
    #pragma endscop
}
