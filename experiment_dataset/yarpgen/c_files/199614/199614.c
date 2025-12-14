/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_0, (((var_6 || var_7) - ((var_8 ? var_4 : var_1))))));
    var_13 = ((var_0 ? 229 : 0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (((min((arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]), (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]))) & ((max(var_6, (arr_3 [i_1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] = (((((max(var_1, var_0)) - (((max(var_11, var_11)))))) - ((var_1 - (arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 + 1])))));
                                var_14 = (max(var_14, ((((((var_3 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_7))) - (((var_3 - ((min(var_7, var_4)))))))))));
                                arr_15 [i_0] [i_0] [12] [i_1] [i_1] [i_0] [i_0] = ((((min((arr_5 [i_1 + 2] [i_1] [i_4]), (((arr_4 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3] [i_4]) : var_9))))) - -var_5));
                            }
                        }
                    }
                }
            }
        }
        var_15 = (((arr_2 [i_0] [i_0] [i_0]) ? (((((arr_1 [i_0]) << (((arr_8 [i_0] [i_0] [i_0] [i_0] [1]) + 8352349045756379289)))) << (((((var_3 + 9223372036854775807) << (((var_3 + 1296303718450019605) - 12)))) - 7927068318404756183)))) : ((var_11 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_2))));
        var_16 += (((!var_10) ? 0 : var_0));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_17 = (max(var_17, (arr_17 [i_5 + 1] [i_5])));
        var_18 = (min(var_18, (((var_7 - (((arr_16 [i_5]) ? var_1 : var_7)))))));
    }
    #pragma endscop
}
