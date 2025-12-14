/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((-5 % var_12) ? -3519197567687856153 : -455561833247525577));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [2] [i_2] [i_3] [i_4] = ((((((var_7 ? var_6 : var_3)) < ((14875952164145298329 ? var_4 : (arr_8 [i_0] [i_1] [i_2]))))) ? ((((((arr_0 [i_0] [i_1]) < var_7))) << (((arr_12 [i_2]) + 10405)))) : 1));
                                arr_18 [i_4] [i_3 - 4] [i_1] [i_4] = (((((((arr_10 [i_3 - 2] [i_3 - 1] [i_3] [i_3]) == (arr_10 [12] [i_3 + 1] [i_3 - 1] [8]))))) | (((arr_10 [i_3 - 2] [i_3 - 4] [6] [i_3]) ? (arr_10 [0] [i_3 - 2] [i_3] [i_3]) : -5))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_2] = (((-26 == -117) ? 40896 : -22424));
                    arr_20 [i_0] [i_1] [i_2] = ((-8589 ? ((((var_8 ? 0 : 0)) % (arr_13 [i_0] [2] [3] [i_2] [4] [i_2]))) : (((-(((!(arr_15 [i_0])))))))));
                }
            }
        }
    }
    var_14 = ((var_9 < (min(var_1, (min(0, var_3))))));
    var_15 = (max(var_15, var_13));
    var_16 = (!6953960521020512217);
    #pragma endscop
}
