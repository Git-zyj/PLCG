/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((~(var_6 & 9354))) > (arr_2 [i_0] [i_1] [i_1])));
                arr_5 [i_0] [i_0] [i_0] |= 56181;
            }
        }
    }
    var_14 = ((max(var_7, -756826040)));
    #pragma endscop
}
