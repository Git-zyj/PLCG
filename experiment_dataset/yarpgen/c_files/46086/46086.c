/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1 + 1] = (max(-44201346, 39));
                arr_6 [i_1] = ((((((min(var_18, var_2))))) ? (((-(arr_1 [0] [i_0])))) : 5554280569446397034));
            }
        }
    }
    #pragma endscop
}
