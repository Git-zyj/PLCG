/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((40 ? -47 : 1)))));
    var_20 = (((((((!1) != -34)))) != 5646023817898475537));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = 255;
                                var_22 = -37;
                                var_23 = (arr_0 [i_3]);
                            }
                        }
                    }
                }
                var_24 *= ((((min((arr_3 [i_0]), (252 != 3666932363)))) << ((((max(var_9, 1))) - 1285637821))));
                var_25 = (arr_11 [16] [i_1] [15] [i_1]);
            }
        }
    }
    #pragma endscop
}
