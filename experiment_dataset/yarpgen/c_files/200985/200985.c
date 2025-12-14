/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [2] [i_1] = (min(((((!(arr_3 [i_1] [21] [0]))) ? (((max((arr_2 [i_0] [i_0] [i_0]), 17757)))) : (max(16569636137054073215, var_5)))), (((((arr_1 [9]) ? -2104769417 : var_3))))));
                var_19 = (arr_2 [i_0] [i_1 + 1] [i_0]);
                var_20 = min((((1877107936655478401 ? (var_7 > var_10) : (((arr_2 [i_0] [i_0] [i_0]) + (arr_2 [17] [i_0] [17])))))), (arr_0 [i_1 + 1] [i_0]));
            }
        }
    }
    #pragma endscop
}
