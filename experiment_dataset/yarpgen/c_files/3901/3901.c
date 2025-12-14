/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 += (((max((arr_8 [i_2 - 1] [i_1] [i_2 + 1]), (arr_8 [i_2 + 1] [i_1] [i_2 + 1])))) && ((((arr_8 [i_2 - 2] [i_2 - 2] [i_2]) & (arr_8 [i_2 - 1] [i_1] [i_2 - 1])))));
                                arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = (max((arr_2 [i_2] [i_3]), (~32750)));
                                var_14 = ((~((-1 ? (3785 - 1) : (!-18)))));
                            }
                        }
                    }
                    var_15 = ((-18 ? ((14 ? -18 : (((-8497956306011438184 + 9223372036854775807) >> 1)))) : (((arr_4 [i_0 + 3]) ? -8497956306011438191 : 1))));
                }
            }
        }
    }
    var_16 = (!var_2);
    var_17 = (max(0, (var_0 - 1)));
    #pragma endscop
}
