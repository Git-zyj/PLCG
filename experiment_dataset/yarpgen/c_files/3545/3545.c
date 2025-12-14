/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((2505513783538565535 ? 13433 : 1));
                arr_7 [i_1] = ((((((arr_2 [i_1]) ? 163 : (arr_2 [i_0])))) ? -27896 : (((arr_2 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            }
        }
    }
    var_11 = ((((((var_3 ? var_1 : var_9)))) ? (((var_6 ? var_1 : 255))) : var_3));
    #pragma endscop
}
