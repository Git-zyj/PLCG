/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max(((max(40, var_13))), ((((-(arr_1 [i_0]))) / (((max(56546, 1))))))));
                var_16 = 21;
            }
        }
    }
    var_17 = var_6;
    var_18 = ((var_3 % ((max((var_7 / -18821), 232)))));
    #pragma endscop
}
