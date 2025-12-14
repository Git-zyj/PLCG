/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min((arr_1 [i_0]), (arr_1 [1]))))));
                arr_6 [12] = ((!((max((arr_3 [i_1] [i_1] [5]), (arr_4 [2] [i_1]))))));
                arr_7 [i_1] [i_0] [i_0] = ((((((arr_4 [i_0] [i_1]) << (var_11 - 7801840108766150394)))) ? (arr_0 [i_1]) : ((-82 ? 152 : 159))));
            }
        }
    }
    var_14 = var_7;
    var_15 &= (var_3 % ((var_6 - ((var_9 ? var_11 : var_1)))));
    var_16 = ((((((var_12 ? var_2 : var_8)))) & (~-22377)));
    #pragma endscop
}
