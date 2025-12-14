/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((!((((arr_3 [i_1]) ? (arr_3 [i_0 - 1]) : (((max((arr_1 [i_0] [i_1]), (arr_4 [16] [i_0] [i_0]))))))))));
                var_18 = (((((((var_6 ? (arr_3 [i_1]) : (arr_3 [i_0])))) * ((var_11 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))) * 10943));
                arr_6 [i_0 + 1] [i_0 + 1] &= ((!(((((4192 ? -116704041 : 10943)) - 14784)))));
            }
        }
    }
    #pragma endscop
}
