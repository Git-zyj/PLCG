/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? (((((var_4 ? var_3 : 9))) ? var_3 : (1 - 1))) : (((((5967379289157057839 ? var_7 : -86)) - (var_3 <= 0))))));
    var_12 = (min((min(var_4, -var_7)), 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (((((~(min((arr_4 [i_0] [i_0] [5]), 2570310904))))) ? ((((max((arr_2 [i_1]), (arr_5 [i_1] [i_1] [i_1])))) ? (((7 ? (arr_1 [i_0]) : (arr_3 [i_1] [i_1] [i_1])))) : (max((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_0]))))) : (((1 / (arr_2 [i_0]))))));
                var_14 &= ((~(((arr_5 [i_0] [i_1] [i_1]) ? (~31) : 1))));
            }
        }
    }
    #pragma endscop
}
