/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = ((((((arr_0 [i_0 + 1] [i_0 + 1]) ? (((arr_5 [i_0] [i_1] [i_0]) ? var_8 : 514187610007640333)) : (((arr_1 [i_0] [i_0]) ? (arr_5 [i_1] [i_1] [i_0]) : var_1))))) ? (max(((min(513816435, 2335152512))), (min(17932556463701911270, 1)))) : (arr_3 [i_0] [i_0] [i_0])));
                arr_6 [i_0] [i_0] = (max((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : (arr_3 [i_1 + 3] [i_0 - 1] [i_0]))), (((arr_3 [i_1 - 4] [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))));
                var_21 = (min(var_21, ((((((var_9 ? ((((arr_4 [i_0] [i_1]) ? (arr_1 [i_0] [2]) : (arr_0 [i_0] [i_1])))) : (arr_2 [i_0 - 1])))) && ((min(var_17, (arr_0 [i_0 - 1] [i_0 + 1])))))))));
            }
        }
    }
    var_22 = ((((((var_18 / var_9) ? var_1 : ((max(var_18, var_7)))))) ? (((((var_1 ? var_5 : var_13))) + (var_4 / var_14))) : var_17));
    var_23 = (max((min(85266514, var_13)), ((min(((var_4 ? var_5 : var_7)), var_11)))));
    #pragma endscop
}
