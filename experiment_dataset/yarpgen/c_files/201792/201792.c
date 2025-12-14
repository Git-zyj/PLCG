/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_6;
                var_13 = ((16 >= (min((arr_2 [i_0]), (arr_0 [i_1])))));
            }
        }
    }
    var_14 = ((min(var_8, (4781483459674412118 | var_3))));
    #pragma endscop
}
