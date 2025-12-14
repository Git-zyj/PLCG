/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((~((var_1 ? var_16 : var_19))))) ? (((var_2 < var_18) ? (((max(var_12, var_3)))) : (max(1, var_10)))) : ((((1 ? 1 : 1)))))))));
    var_21 = var_1;
    var_22 = (max(((max((1 >= var_6), 1))), ((var_15 ? ((-880045619 ? var_4 : var_0)) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((~((var_4 >> ((((-(arr_1 [i_2] [i_0]))) - 4244958195))))));
                    var_23 *= ((-(arr_6 [5] [i_2] [i_2])));
                    var_24 = 0;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_25 = (min(var_25, (((((var_12 ? var_8 : var_1)) - ((((arr_3 [i_0 - 2]) + (arr_3 [i_0 - 1])))))))));
                        var_26 = -880045629;
                    }
                    arr_11 [i_0] [7] [i_2] = (min((((-((max(1, var_5)))))), (max((arr_5 [i_0 - 2] [i_1] [i_2]), (arr_5 [i_2] [0] [i_0])))));
                }
            }
        }
    }
    var_27 = ((((((var_1 ^ 1) + -880045619))) ? (((((var_15 ? 1 : var_0))) ? -var_6 : (min(880045628, 1)))) : (max(-var_12, var_14))));
    #pragma endscop
}
