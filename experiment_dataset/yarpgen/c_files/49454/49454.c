/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_3;
                    var_17 &= (((((~(arr_1 [i_0])))) ? (~0) : ((0 ? (arr_3 [i_0]) : ((min(54360, 44719)))))));
                    var_18 = (44714 & 20822);
                }
            }
        }
    }
    var_19 = (((var_8 ? var_2 : (!var_12))));
    #pragma endscop
}
