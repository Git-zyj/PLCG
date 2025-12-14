/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [5] [i_2] = 100;
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (arr_3 [i_1]);
                }
            }
        }
    }
    var_19 = ((((max(((var_16 ? 244 : var_16)), ((max(var_6, var_10)))))) ? (((max((max(var_13, var_6)), 3)))) : (((var_8 ? var_10 : var_7)))));
    #pragma endscop
}
