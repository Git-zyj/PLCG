/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (max(var_6, var_3));
                var_10 = (arr_0 [i_1]);
            }
        }
    }
    var_11 = (min(1, -107));
    var_12 = var_5;
    #pragma endscop
}
