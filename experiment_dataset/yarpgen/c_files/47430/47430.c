/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((0 - var_1) == var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((max(137, 1062601474)))) && 7847754197568616012)))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (((var_5 ? ((arr_8 [i_0] [15] [i_2]) : (-1443516267 != var_6)))));
                    arr_11 [i_0] [i_0] = 10335446973821107563;
                }
            }
        }
    }
    #pragma endscop
}
