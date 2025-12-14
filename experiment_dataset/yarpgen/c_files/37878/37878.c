/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (((min((arr_4 [i_0 - 1] [i_0]), ((1723634725 ? -1806685481 : 15)))) >= -6));
                var_21 = (((arr_3 [i_0] [i_0]) ? 7 : (-7 >= -7)));
                var_22 = var_5;
            }
        }
    }
    var_23 = (((((!var_8) | ((14 ? 10834429248906939335 : 7)))) - 41268));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_19));
                                var_25 = ((max(var_17, ((min((arr_19 [i_2]), -29357))))));
                                var_26 = (max(var_26, var_2));
                                var_27 = (min(var_27, 200));
                            }
                        }
                    }
                }
                arr_22 [i_2] [11] = (max(((-7 ? (arr_14 [i_2] [i_2] [i_3] [i_3]) : 3326772613)), 24268));
            }
        }
    }
    #pragma endscop
}
