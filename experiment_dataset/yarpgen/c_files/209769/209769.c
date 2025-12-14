/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_9 % (((max(28720, 0))))))) ? var_1 : (var_6 & var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((339017909 << (103 - 103)));
                var_14 = ((~((((((arr_1 [i_1]) ? 1477065761 : 1477065754))) ? var_5 : (((arr_0 [12]) ? (arr_0 [i_0]) : 159))))));
                arr_4 [i_0] [i_0] [i_0] = ((((-((max(210, 35))))) + 4));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [0] [i_1] [i_2] [i_0] [i_0] = (((((-32613 ? var_9 : (arr_1 [i_0]))))) ? ((max((((arr_9 [i_3] [i_2] [i_1] [i_0] [i_0 + 2]) ? 169 : (arr_5 [i_0] [i_2] [7] [i_0]))), ((27 ? var_3 : (arr_6 [i_0] [i_1] [i_2] [i_3 - 1])))))) : ((~(((arr_0 [i_0 + 2]) ? 9 : (arr_9 [i_0] [i_0] [i_3] [5] [i_2]))))));
                            var_15 = (arr_0 [i_0]);
                            var_16 = max(var_2, var_11);
                            var_17 = (((((var_2 ? ((min((arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_3]), var_11))) : (!var_10)))) ? ((((((arr_6 [2] [i_1 - 2] [i_1 - 1] [i_1]) + (arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_3] [i_2] [4])))) ? -65531 : (max((arr_0 [i_0]), (arr_9 [i_0] [i_1 - 2] [7] [i_2] [0]))))) : -var_11));
                        }
                    }
                }
                var_18 = 84;
            }
        }
    }
    var_19 = ((22887 ? (((((var_5 ? -1477065755 : var_10))) ? var_2 : (~17252961102167351378))) : (-1477065761 % 43161)));
    #pragma endscop
}
