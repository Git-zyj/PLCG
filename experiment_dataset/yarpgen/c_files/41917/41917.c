/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((min(var_7, (arr_0 [i_0 - 2])))) ? (arr_1 [1] [i_0 + 1]) : (128 | 31754)));
                arr_6 [i_0] = ((117 >> (-120 + 139)));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
