/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = 13472317451384159467;
                var_13 = ((arr_0 [i_1]) ? (arr_2 [i_0] [i_0]) : (10375698921098526338 - 10375698921098526332));
            }
        }
    }
    var_14 = (var_5 ? (((13472317451384159452 ? 217304183632331498 : var_4))) : (((~var_11) ? (var_1 & var_10) : ((var_2 ? 18229439890077220108 : 7021269108146920569)))));
    #pragma endscop
}
