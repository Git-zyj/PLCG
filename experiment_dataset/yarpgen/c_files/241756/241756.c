/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((var_14 + 2147483647) >> (var_18 + 23))));
                arr_6 [i_0] [i_1] = 0;
                var_21 = -var_19;
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
