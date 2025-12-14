/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max((((arr_1 [i_0]) ? ((min(895090892, -1120911955))) : (arr_4 [i_1 - 2] [i_2] [i_1 + 1]))), (arr_3 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = ((18101 ? 18109 : -15206));
                                var_14 = ((((min(((((arr_1 [2]) || 47426))), (arr_6 [i_1 - 1] [i_2] [i_1] [15])))) ^ (arr_4 [i_1] [i_2] [i_4 + 2])));
                                var_15 = (max(var_15, 18014793684111346837));
                                var_16 = max((arr_1 [3]), (((!((max(var_5, 8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((max(var_11, 0)));
    var_18 = ((((min((min(var_8, 18090)), (2034181494 && 7961838021584101088)))) ? 7961838021584101088 : ((((var_0 ^ var_2) ^ ((max(var_0, var_9))))))));
    #pragma endscop
}
