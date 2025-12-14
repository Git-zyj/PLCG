/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max(((var_6 ? 114 : var_9)), (max(var_1, var_11))))));
    var_13 = (min(116, ((((max(var_4, -1047313889))) ? ((min(var_2, -87))) : (var_5 ^ 0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] &= (~1);
                    var_14 = ((~((((max(-400776593, (arr_3 [i_2]))) < (((41 ? (arr_5 [i_0] [i_1] [i_2]) : 54005))))))));
                }
            }
        }
    }
    #pragma endscop
}
