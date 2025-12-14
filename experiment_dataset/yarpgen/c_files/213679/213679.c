/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (max((max(1006632960, (arr_4 [i_2 + 1] [i_1 - 2] [i_2 - 1]))), ((((-127 - 1) / 48075)))));
                    var_15 = var_9;
                    var_16 = (17460 || -1604129583888638209);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = 2951331378;
                                var_18 = (min((arr_5 [i_0] [14] [14]), (max(((41067 ? 1006632960 : 0)), (arr_9 [i_0 + 3] [i_1 - 1] [i_0 + 3] [i_2 + 1])))));
                                var_19 = ((!(((min((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_4]), 41069))))));
                                var_20 = ((((max((arr_1 [i_1 - 2] [i_1]), 63237))) && (((-2095220172 ? 1 : -116)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((max((~-113), (min(1, (1604129583888638209 & 82))))))));
    #pragma endscop
}
