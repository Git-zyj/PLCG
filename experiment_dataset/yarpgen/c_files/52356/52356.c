/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((max(((min(var_7, var_4))), (max(255, -564157896))))), (min((min(4503599627368448, -8648374339420379438)), ((max(-1401015659, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max(((min((min(var_2, var_2)), ((min(var_5, var_1)))))), (max(((max((arr_2 [i_0]), 0))), (max((arr_0 [i_1]), var_2))))));
                var_12 += (min((min((min(var_1, (arr_3 [i_0]))), ((min(var_6, var_6))))), (min((max(-4611686018427387904, var_2)), (max(var_2, var_8))))));
            }
        }
    }
    #pragma endscop
}
