/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((arr_3 [i_1]) ? (((((-81 ? var_4 : var_2))) ? var_9 : ((((arr_3 [0]) || var_3))))) : (((!(((var_8 ? 57558 : -16384))))))));
                var_12 &= ((((~(arr_1 [i_1])))) && (((var_1 ? (arr_0 [i_1 - 1]) : ((min(var_4, (arr_2 [i_0] [i_0] [i_0]))))))));
                var_13 = (max(var_13, var_2));
            }
        }
    }
    var_14 = (max(var_14, (((var_2 >> (var_7 - 3386552382))))));
    var_15 = (((!((min(var_5, -16384))))));
    var_16 = (((((((var_3 <= -16408) <= ((-16408 ? var_9 : -4062169091941280856)))))) > (((((var_8 ? 127 : -118))) ? var_9 : ((16407 ? var_2 : var_3))))));
    #pragma endscop
}
