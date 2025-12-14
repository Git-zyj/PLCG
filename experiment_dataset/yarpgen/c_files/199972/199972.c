/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 -= 52024;
                var_14 = -12;
                arr_4 [i_0] [i_1] = (arr_3 [2]);
                arr_5 [i_0] = 1;
            }
        }
    }
    var_15 = (((max(var_5, 1)) + -var_0));
    var_16 = var_8;
    #pragma endscop
}
