/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 28987;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 *= ((arr_3 [i_0] [i_0]) ? (1 == 94) : (max(0, var_12)));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    var_16 = (min(var_16, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 |= -var_7;
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = var_3;
                                var_18 = -2147483641;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] = (max(9, 2080181940));
                    arr_20 [i_1] [i_1] [i_1] = ((-(((arr_4 [i_0]) & var_0))));
                }
                arr_21 [i_1] [i_1] = (~((((((arr_7 [i_0] [i_1] [i_1]) < 83))) >> (28987 - 56))));
                var_19 = ((!((max((max(var_2, 61)), (var_7 == 1))))));
            }
        }
    }
    var_20 = (~var_7);
    #pragma endscop
}
