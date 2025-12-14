/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (min(var_4, ((((min(var_0, var_13))) ? var_9 : 16711680))));
    var_21 = (max(var_21, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 ^= (((((((arr_4 [i_1] [i_0] [10]) ? (arr_2 [4]) : (arr_4 [i_0] [3] [i_1])))) ? (((arr_0 [i_1]) ? (arr_2 [i_0]) : (arr_2 [1]))) : (min((arr_2 [i_0]), (arr_4 [i_0] [i_0] [i_0]))))));
                var_23 = (max(var_23, (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (arr_0 [i_0]) : (arr_2 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
