/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((((max(((~(arr_1 [i_1]))), (arr_4 [i_1])))) ^ (((((~(arr_1 [i_1])))) ? (arr_0 [i_0]) : ((16777215 ? var_1 : 1))))));
                var_12 = ((1 ? (arr_4 [i_1 - 1]) : 65535));
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
