/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 &= (max((min(((max(var_13, var_4))), (min(var_8, var_14)))), (1117719772939637057 & var_4)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_21 = (~var_10);
                    arr_9 [i_2] [i_1] [i_0] = var_8;
                    arr_10 [i_2] [i_2] [9] = 146;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [3] = ((~(min((((-(arr_3 [i_0] [i_0] [i_0])))), var_6))));
                    arr_14 [i_0] = (max((((arr_12 [i_1] [i_1] [i_3]) ? (min(var_7, var_17)) : ((var_15 ? var_8 : var_7)))), (min(var_17, (!var_12)))));
                    var_22 = ((127 ? 1117719772939637069 : 14198998227732751204));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_21 [6] [i_1] [6] [i_3] [1] [i_4] [i_5 - 3] = max(((138 ? (arr_5 [i_5 - 1] [i_5 + 2] [i_5]) : var_17)), (((min(146, var_18)))));
                                arr_22 [i_0] [i_0] [i_3] [i_4] [i_4] [i_0] = (min((!14198998227732751213), (arr_12 [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                }
                var_23 = (!var_10);
                var_24 = var_4;
            }
        }
    }
    var_25 = 536870911;
    var_26 = ((min((var_15 + var_15), 65)));
    var_27 = ((18998 ? (min((min(2012423471, var_6)), var_10)) : var_12));
    #pragma endscop
}
