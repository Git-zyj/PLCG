/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 -= ((((((arr_2 [i_0] [i_0]) ? var_7 : 1))) || (((var_8 ? (arr_3 [4]) : var_9)))));
                arr_5 [i_0] [i_0] [i_1] = ((((min((arr_3 [i_0]), -28089))) >= (((arr_3 [i_0]) ? (((arr_4 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : var_1)) : (arr_1 [i_0])))));
                arr_6 [i_0] = (min(((-(arr_1 [i_0]))), (arr_3 [i_0])));
            }
        }
    }
    var_11 = ((!(((((max(16, var_3))) ? -1 : 6329)))));
    #pragma endscop
}
