/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_9 - var_8) ? ((min(var_6, var_8))) : (arr_0 [i_0] [i_0])))) ? var_7 : (((max(var_5, 0))))));
        var_13 = ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])))) ? (arr_0 [i_0 - 2] [i_0 - 2]) : ((((arr_0 [i_0 - 2] [i_0 - 1]) > (arr_1 [i_0 - 2]))))));
    }
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = (min(((max((arr_7 [i_1] [i_1] [i_3]), (var_10 & var_4)))), (max((arr_1 [i_3 + 1]), ((min(-1, 2047)))))));
                    arr_11 [i_3] [i_1] [i_1] [i_1] = ((!(!var_5)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_15 = ((((max(((((arr_13 [i_5] [i_1] [0] [i_1] [i_1]) || var_11))), (max((arr_6 [i_1] [i_1] [i_1]), var_5))))) ? (max(-var_9, var_5)) : ((min(((var_1 ? var_3 : var_12)), (-16 ^ 0))))));
                                arr_17 [i_4] [i_1] [i_1] = (min((min(-1, (((arr_9 [i_1] [i_4] [i_5]) ? (arr_9 [i_1] [i_4] [i_5]) : (arr_4 [i_3] [9]))))), (((var_11 ? ((-(arr_6 [i_1] [i_2] [i_4]))) : ((var_10 ? (arr_14 [1] [9] [i_2] [i_3] [i_3] [i_4] [i_5]) : var_6)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
