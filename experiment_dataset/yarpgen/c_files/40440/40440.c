/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_0]);
                arr_4 [i_0] = min(var_7, (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : 116)));
                var_19 = 1241471537;
                var_20 += (arr_3 [i_1] [i_1]);
            }
        }
    }
    var_21 = ((min(var_17, (((var_15 ? var_10 : -23055))))));
    #pragma endscop
}
