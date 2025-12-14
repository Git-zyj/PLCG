/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (min((arr_5 [0] [0]), ((((arr_9 [i_0] [i_1]) ? ((var_10 ? -921610788 : (arr_6 [i_0] [i_0]))) : ((min(var_8, var_4))))))));
                    arr_10 [i_0] [i_1] [i_2] = (max(((31 ? (max((arr_5 [i_0] [i_2]), var_11)) : (((var_9 / (arr_8 [i_2] [i_2] [i_0])))))), ((max((max(127, 921610788)), (arr_9 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 |= ((((((((arr_5 [2] [i_4]) ? var_0 : (arr_3 [i_2])))) ? ((max(var_16, 111))) : (((arr_15 [i_1] [8] [8]) ? (arr_15 [i_1] [i_1] [i_2]) : var_2))))) ? (145 <= -59954) : (max(((-(arr_8 [i_1] [i_1] [i_2]))), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((var_0 + 1682337742) - 4)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = (arr_0 [i_1]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] = var_15;
                    arr_18 [i_2] = var_8;
                }
            }
        }
    }
    var_21 = ((-var_1 ? var_14 : (((max(var_8, var_12))))));
    #pragma endscop
}
