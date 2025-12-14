/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 | ((((min(var_10, var_1))) ? (((max(var_11, var_4)))) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(((((min(-1445, 0))) ? (((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (arr_1 [i_0 - 1]))), ((((((arr_2 [i_1]) & (arr_2 [i_1])))) ? (arr_2 [i_0 - 1]) : ((((arr_0 [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_4 [i_0] [i_0] [i_1] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_15 = (((((var_0 ^ var_10) ? ((var_11 ? var_2 : var_12)) : (var_2 & var_5))) + ((42 ? var_4 : var_8))));
    #pragma endscop
}
