/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] = (((((!(((204 ? var_9 : var_3)))))) & var_0));
                                var_10 = ((((var_1 & (~61)))) ? var_0 : (((3057337247 || ((max(204, 34)))))));
                                var_11 -= (((min(var_1, (min((arr_5 [i_0] [i_3] [i_4 + 2]), (arr_1 [i_0]))))) & -19300));
                                arr_15 [i_0] [i_0] [i_2] [i_4] = (~var_7);
                                arr_16 [i_0] [i_2] = (min(((var_6 ? (((var_6 ? var_6 : (arr_7 [i_1] [i_2] [i_3])))) : ((52 ? (arr_0 [i_2 + 2] [4]) : var_6)))), -480));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_1] = ((((min((min((arr_7 [i_0] [i_1] [i_1]), 2091)), (arr_9 [i_0] [i_0] [i_0] [i_1])))) ? 203 : (min(var_8, (((var_9 ? 4481034187879716908 : (arr_3 [i_0] [i_1]))))))));
            }
        }
    }
    var_12 = (max(((var_6 ? var_2 : (~var_6))), -1));
    var_13 += ((var_7 ? ((52 ? 500 : var_1)) : var_0));
    var_14 = (var_9 ^ var_3);
    var_15 = (max(22229, (((((var_5 ? var_7 : 63663))) ? (((min(32767, 4096)))) : (max(var_9, var_8))))));
    #pragma endscop
}
