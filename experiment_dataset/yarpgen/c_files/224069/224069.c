/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_1 ? var_12 : ((var_17 ? -6936958252821695227 : var_17))))) ? var_8 : var_19));
    var_21 = (min(((6936958252821695236 ? 2807275012602406367 : var_19)), 4387797749579297820));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_9 [i_1] [i_1] [i_1] [1] [1]) ? ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min((arr_2 [i_2]), (arr_10 [4] [i_1] [i_3] [i_4]))) : -var_12))) : (min((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_4] [i_2]) : var_10)), (arr_7 [i_4])))));
                                var_23 = (((arr_1 [i_0] [i_0]) * 2807275012602406363));
                                var_24 = (max(var_24, (arr_2 [i_0])));
                            }
                        }
                    }
                    var_25 = (((((~((991977072 ? var_6 : (-2147483647 - 1)))))) ? (((9223372036854775807 << (8657146242689305568 - 8657146242689305568)))) : 6936958252821695241));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_26 = (max((((arr_10 [9] [i_1] [i_1] [i_5 - 2]) ? (((-(arr_14 [i_0] [i_1] [i_1] [2])))) : ((var_1 ? (arr_13 [i_0] [i_1] [8] [i_5 - 3] [1] [i_1] [i_1]) : var_1)))), var_10));
                                var_27 = (((arr_16 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1]) - ((1591496190 ? 85 : (arr_7 [8])))));
                                arr_19 [i_6] [i_1] [i_1] = (min((2264299652034177312 / 5230577868972288586), 3302990198));
                                var_28 = (~var_15);
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_1] = (min(0, 7));
                }
            }
        }
    }
    #pragma endscop
}
