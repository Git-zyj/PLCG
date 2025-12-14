/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (arr_3 [i_0 + 3] [i_0] [i_0 + 2]);
                var_12 = ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_3 - 1] = (min((min(((0 ? 13 : var_3)), 113)), ((max((min(var_10, 113)), 1)))));
                                var_13 = (min(var_13, ((max((arr_4 [i_0] [i_0] [1]), ((-((0 ? (arr_9 [i_0 + 3] [i_2]) : (-9223372036854775807 - 1))))))))));
                                arr_13 [i_4 - 1] [i_3 - 2] [i_1] [i_1] [i_0] = ((((((arr_7 [i_4] [i_4 - 2] [i_4 - 1] [i_4]) - (min(-4418433845629123564, (arr_1 [i_0])))))) ? ((max((arr_7 [i_3 - 1] [i_3] [i_3 - 2] [i_3 + 1]), ((var_0 ? (arr_4 [i_0] [i_2] [i_4 - 1]) : 4294967289))))) : ((955523205 ? (arr_5 [i_3 + 1] [i_2 + 1] [i_1]) : (arr_5 [i_3 - 1] [i_2 + 2] [i_2])))));
                                arr_14 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 1] = ((~(((arr_9 [i_0 + 2] [i_1]) << 0))));
                                arr_15 [i_0] [i_4] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_6, var_6));
    #pragma endscop
}
