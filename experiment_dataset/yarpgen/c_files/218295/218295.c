/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_0 < ((min(1, 1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((-((+(min((arr_5 [i_0] [i_2] [i_1] [i_0]), -3796758983951830567))))));
                    var_16 &= ((1362947549290985459 ^ (arr_2 [i_0] [i_2])));
                    var_17 += (max((((var_8 | var_5) ? (~1) : (arr_1 [i_0 + 1]))), ((~(arr_1 [12])))));
                }
            }
        }
    }
    #pragma endscop
}
