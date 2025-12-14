/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((-(((((~(arr_1 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))))))));
                    var_17 = (arr_3 [i_1 + 1] [i_1]);
                }
            }
        }
    }
    var_18 = (max(((((var_14 ? var_14 : var_6)))), ((max(4115905907, var_4)))));
    #pragma endscop
}
