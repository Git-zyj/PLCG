/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 *= (((arr_3 [i_1 + 3]) ? (max((max((arr_7 [i_0] [i_0] [i_2]), var_9)), ((((arr_4 [i_0] [i_1]) != (arr_5 [18])))))) : (arr_11 [i_1] [i_2] [i_3])));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = ((+(max((arr_5 [i_1 + 2]), var_14))));
                                var_20 = ((+(min((arr_0 [i_1 + 1]), var_3))));
                                var_21 = (min(var_21, (((max(((var_9 ? (arr_4 [i_0] [i_2]) : var_16)), (arr_9 [i_0] [i_0] [i_3] [i_4])))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_22 = var_9;
                        var_23 = (arr_8 [i_5] [i_5] [2] [i_5]);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_24 = var_1;
                            arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = var_11;
                        }
                    }
                }
            }
        }
    }
    var_25 = (~var_0);
    #pragma endscop
}
