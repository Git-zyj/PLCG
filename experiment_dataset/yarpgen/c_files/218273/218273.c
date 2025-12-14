/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = (~var_6);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((-32748 >= (((max(30, var_13))))))) + var_7)))));
        var_22 = (arr_0 [i_0]);
        arr_3 [i_0] = ((var_12 ? (((-1434413728 / (arr_0 [i_0])))) : (!1)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] = ((var_5 ? var_13 : ((((((arr_0 [i_2]) ? (arr_0 [i_2]) : var_8))) ? (161 || 9) : (((arr_1 [i_1]) ? var_13 : 124))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_23 = (((-125 >= var_12) ? -22 : var_9));
                                arr_17 [i_3] [i_1] [i_3] = (max((var_6 || var_12), (((var_14 ? 2922140601077449842 : var_16)))));
                                var_24 = (min(var_24, ((((-((1 ? -281861277831869343 : 5))))))));
                                arr_18 [i_1] [i_2] [i_1] [i_4] [i_1] = (max((((var_8 || ((min(var_11, (arr_16 [i_1] [6] [i_3] [1] [i_3]))))))), (min(((max((arr_15 [i_2]), var_2))), (arr_4 [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
