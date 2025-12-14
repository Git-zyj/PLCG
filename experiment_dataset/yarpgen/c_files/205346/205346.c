/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (((arr_3 [i_0]) | var_8));
                var_19 = (((((var_4 ? var_11 : 0))) / ((min(var_4, (arr_0 [i_1 + 3]))))));
            }
        }
    }
    var_20 ^= var_8;
    var_21 = var_5;
    #pragma endscop
}
