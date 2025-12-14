/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 *= ((((min(30, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 106 : 30));
                                var_19 = (min(var_19, ((((var_7 ? (max((arr_8 [i_1 - 1] [i_1] [i_1] [i_4] [i_4] [i_4]), var_3)) : ((max((arr_5 [i_1] [i_1]), var_0)))))))));
                                var_20 += var_10;
                                var_21 = ((~(min((arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 2]), 594292903))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1 - 2] [i_0] |= (max((arr_1 [i_2]), 1));
                }
            }
        }
    }
    var_22 = var_16;
    var_23 = var_7;
    #pragma endscop
}
