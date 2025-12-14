/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (max((min((max((arr_7 [i_0] [i_1]), 12471428026024838025)), (min(var_18, 5975316047684713591)))), ((max(((max(41249, (arr_5 [i_0] [i_0] [i_0])))), (max((arr_10 [i_0] [i_1] [i_0] [i_3]), 103)))))));
                                var_20 = max((max((max(3324802130631364066, var_12)), (min(23825, 9223372036854775807)))), (min((max((arr_10 [i_4] [i_0] [i_0] [i_0]), var_14)), ((max((arr_5 [i_2] [i_3] [i_4]), -19640))))));
                            }
                        }
                    }
                    var_21 = (min((min((min((arr_0 [i_0] [i_0]), 1)), (min((arr_3 [i_1] [i_2]), (arr_4 [i_0] [i_1]))))), ((max(((min(var_16, (arr_11 [i_0] [i_1] [i_2])))), (min(41717, 123)))))));
                }
            }
        }
    }
    var_22 = (min((max((min(24286, var_13)), ((max(0, var_18))))), ((max(((min(var_5, var_14))), (max(177, 41257)))))));
    var_23 = (max((max((min(4294967289, var_2)), ((min(var_12, var_0))))), ((min((min(var_1, var_10)), (min(41251, var_17)))))));
    #pragma endscop
}
