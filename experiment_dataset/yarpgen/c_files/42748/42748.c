/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 + ((((var_6 ? 8191 : 9223372036854775807)) / ((min(var_0, var_5)))))));
    var_19 += -8192;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] &= (min(((219 * ((0 ? 1 : 9740608048305567998)))), ((((arr_4 [i_0] [i_0] [7]) * 60)))));
                arr_6 [i_1] = ((((arr_2 [i_1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
