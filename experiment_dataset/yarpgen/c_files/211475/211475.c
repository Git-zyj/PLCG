/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 |= arr_0 [12];
                    var_20 = (i_0 % 2 == 0) ? ((((max((arr_4 [i_0 - 1] [i_0] [i_0]), (min((arr_2 [i_1] [i_0]), var_7)))) % ((((arr_2 [13] [i_0]) << (var_13 - 800))))))) : ((((max((arr_4 [i_0 - 1] [i_0] [i_0]), (min((arr_2 [i_1] [i_0]), var_7)))) % ((((((arr_2 [13] [i_0]) + 2147483647)) << (var_13 - 800)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 &= (arr_4 [i_0 + 1] [7] [8]);
                                var_22 = ((((-(((var_16 < (arr_13 [i_0 - 1] [i_0] [i_0 - 1]))))))) ? 1731 : ((-(var_12 + var_4))));
                                var_23 = ((((((arr_5 [i_0]) / (arr_1 [i_0])))) * (min((min(var_5, -6889742706886531818)), 113))));
                            }
                        }
                    }
                    var_24 = (arr_6 [i_0] [i_0]);
                    var_25 = (max(var_25, 14351));
                }
            }
        }
    }
    #pragma endscop
}
