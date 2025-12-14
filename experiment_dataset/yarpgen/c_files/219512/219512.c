/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219512
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
                arr_8 [i_0] [i_0] [i_0] = ((((((arr_7 [i_1] [i_0]) ? var_8 : (arr_6 [i_0] [i_0] [i_0])))) ? (((max(var_7, var_1)) / var_2)) : (max(var_12, var_7))));
                var_15 = -var_1;
            }
        }
    }
    var_16 = 0;
    var_17 *= var_10;
    #pragma endscop
}
