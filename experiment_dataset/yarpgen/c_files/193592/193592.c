/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((5708 / var_3) ? var_11 : var_14)) + 2147483647)) << (15626 - 15626));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 -= (arr_5 [i_2] [i_1] [0] [i_2]);
                    arr_6 [i_1] [i_1] [i_2] [i_0] = ((((((((min((arr_0 [17]), (arr_4 [i_0] [4])))) <= (-1 - 0))))) - 0));
                    var_22 = (min(var_22, ((((arr_4 [i_0] [i_1]) << ((((~(min((arr_0 [i_2]), 10)))) - 1085499168)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_23 = (arr_0 [i_2]);
                                arr_11 [i_0] [i_1] [i_3] [i_1] = (arr_3 [i_0]);
                                var_24 = (max(((((-18601 + 2147483647) << (24702 - 24702)))), (((max(var_5, (arr_5 [19] [19] [19] [i_3]))) << (((min(87, var_6)) - 79))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 *= -995;
    var_26 -= var_10;
    #pragma endscop
}
