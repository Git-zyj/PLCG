/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (!var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [12] = var_14;
                        var_21 = ((37218 ? var_0 : (arr_3 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = (max(var_22, (arr_3 [20])));
                        var_23 = (arr_7 [i_0] [i_0] [i_2] [i_0] [i_0] [14]);
                        var_24 = var_7;
                        var_25 = (max(var_25, (((((min(((min(63, var_14))), ((var_11 ? -125 : var_4))))) ? ((max((536870911 & var_12), var_17))) : (arr_1 [i_0]))))));
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_26 |= (((((arr_7 [i_0] [12] [12] [i_5 + 1] [i_5 + 1] [14]) || (arr_7 [i_0] [0] [i_0] [i_5 + 1] [i_5] [i_0]))) ? (max((arr_12 [0] [22] [i_0] [i_0] [i_0]), (arr_4 [i_0]))) : var_15));
                        var_27 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] = max((arr_10 [i_2 + 3] [18] [7]), ((((max(var_0, (arr_0 [i_0] [17]))) != ((var_18 ? var_19 : var_18))))));
                    }
                    var_28 = (max(var_28, ((max(var_15, (arr_7 [i_1] [4] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 4]))))));
                }
                var_29 = ((min(19330, ((-(arr_7 [i_0] [12] [i_0] [i_0] [i_1] [i_1]))))));
                var_30 = (((var_18 ? (arr_6 [i_0] [i_0] [i_1]) : 1019031084)));
            }
        }
    }
    #pragma endscop
}
