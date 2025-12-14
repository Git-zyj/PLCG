/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((8595822332386952258 + var_13) + 9223372036854775807)) << (min(var_6, var_14))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = 0;
                    arr_7 [i_0] [0] [i_0] [i_2] = (((((max(var_1, 78)))) <= (max(16749170403971986424, (-11 | 1048575)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (min((max(10, 3742331008)), var_12))));
                                var_19 = (min(var_19, ((((arr_9 [i_3]) * ((min(var_10, var_1))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [7] [1] [19] = (arr_11 [21] [i_0]);
                    arr_15 [i_0] [i_0] [i_0] = (min(131071, -11));
                }
            }
        }
    }
    var_20 = var_11;
    var_21 = ((3277662107 >> (-5 + 7)));
    #pragma endscop
}
