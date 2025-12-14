/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (((min(((var_7 ? var_12 : var_10)), (((242606310 ? var_7 : var_9))))) / var_5));
    var_18 = ((!((((((30462 ? 60 : var_3))) ? var_7 : (var_12 || var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0]) ? (((arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_1 - 1]) ? (arr_15 [i_2] [i_1 - 1] [i_2] [i_3] [i_4 + 1] [i_2]) : (arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_0]))) : (((((-2431 ? 0 : var_14)) > (min(var_14, (arr_13 [i_2] [i_1] [i_2] [i_4] [3] [2] [i_0]))))))));
                                arr_17 [i_0] [i_0] [i_2] = (((((arr_6 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2]) || var_5)) && ((min((arr_6 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_6 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4]))))));
                                var_19 = (max((min((max((arr_11 [i_0] [i_0] [i_2] [i_3]), (arr_3 [i_0] [i_0]))), (((!(arr_3 [i_0] [i_0])))))), var_2));
                            }
                        }
                    }
                    arr_18 [i_0] = ((((max((arr_12 [i_1 - 1] [i_1 - 1] [i_0] [i_1] [i_1 - 1]), (((arr_7 [i_0] [i_0] [i_0]) ? var_13 : -81))))) || ((max((arr_6 [i_0] [i_1] [i_0] [i_1]), (!var_11))))));
                }
            }
        }
    }
    var_20 = ((!(((((max(var_11, var_13))) ? (max(var_11, var_6)) : 195)))));
    #pragma endscop
}
