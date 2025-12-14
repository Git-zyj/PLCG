/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(2667888308 | 32256)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (-32767 - 1);
                arr_7 [i_0] [i_0] [i_1] = (((arr_0 [i_0]) * -1));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] [i_4] = (~8975432775857839240);
                                var_21 &= (((arr_14 [i_3] [i_2 + 2] [8] [i_3] [i_4] [1] [8]) | ((min((arr_12 [i_1] [i_2 + 2] [i_1] [i_2 + 2] [i_4] [3]), (arr_12 [i_0] [i_2 + 2] [9] [i_4] [i_4] [i_4]))))));
                                var_22 = ((arr_4 [i_1] [i_1] [i_1]) ^ ((((((((arr_15 [i_4] [i_1] [i_3] [i_2 - 1] [i_2] [i_1] [i_4]) <= 11))) >= (((arr_8 [11]) | 7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
