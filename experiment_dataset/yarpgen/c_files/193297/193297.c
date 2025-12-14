/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((max((((arr_6 [i_0]) | (arr_4 [i_0] [i_0] [i_0]))), ((1392117589 ? (arr_3 [i_0] [i_1]) : 2902849693))))))));
                arr_8 [i_0] [16] = (arr_3 [i_0] [i_0]);
                var_17 = arr_2 [i_0] [i_1];
            }
        }
    }
    var_18 = (max((4611686018427387904 & var_13), (((!((max(var_10, var_1))))))));
    #pragma endscop
}
