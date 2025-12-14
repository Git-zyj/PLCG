/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((max((--1410649784942403060), ((min((arr_7 [i_0] [11] [i_2 + 2] [i_1]), 1848280241))))))));
                    arr_8 [i_0] [18] [i_2 + 3] [i_2 + 3] = var_7;
                }
            }
        }
    }
    var_12 = (max(var_12, 1));
    #pragma endscop
}
