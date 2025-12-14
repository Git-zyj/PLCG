/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((var_18 || var_8), 4191468387347198506));
    var_21 = (min(var_21, (!var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = max(((min((-32767 - 1), 102))), (max((118 == 55146), (var_7 & -32759))));
                                arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_0] [i_3] = (((arr_1 [i_3] [i_3]) << (105 - 102)));
                                arr_17 [i_1] [i_1] [i_4] [i_3] [i_1] = var_12;
                                var_22 = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = ((!((((((8918621700890157365 ? 32767 : 2147483642))) ? ((var_4 ? -120 : (arr_20 [i_0] [i_1] [i_2] [i_1]))) : ((max(3390353635, 1641132369))))))));
                                var_23 = ((((-(max(12, var_14)))) >> ((((var_2 ? (((arr_1 [i_5] [i_5]) ? -102 : var_12)) : -var_17)) + 155))));
                            }
                        }
                    }
                    var_24 = 102;
                    arr_23 [i_0] [i_1] = -125;
                }
            }
        }
    }
    var_25 |= 1;
    #pragma endscop
}
