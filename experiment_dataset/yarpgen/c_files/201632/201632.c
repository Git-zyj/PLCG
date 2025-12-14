/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((var_7 ? (arr_3 [i_1] [4]) : (((arr_3 [i_1] [i_0]) ? (((1871070704 ? -8178 : (arr_1 [i_0])))) : 71965945))));
                var_10 = (max(-5658798128919764555, var_1));
            }
        }
    }
    var_11 = (((max(((var_8 ? var_4 : 25875)), ((-6743313027349928285 ? -25861 : var_8))))) ? var_5 : var_3);
    #pragma endscop
}
