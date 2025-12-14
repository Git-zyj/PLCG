/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : ((((arr_1 [i_0]) && (arr_0 [i_0])))))))));
        arr_2 [i_0] = ((-27556 ? (((arr_1 [16]) ? var_0 : var_10)) : 32));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((((arr_3 [i_1 + 1] [i_1 + 2]) - (arr_3 [i_1 - 1] [i_1 + 2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = (((arr_8 [i_1]) - ((min((arr_5 [i_0] [i_0] [i_4]), (arr_3 [i_0] [21]))))));
                                arr_13 [i_0] [i_1 + 1] [i_2] = (arr_12 [i_0] [10] [i_0] [i_3] [10] [i_4]);
                                var_15 &= var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, var_4));
    #pragma endscop
}
