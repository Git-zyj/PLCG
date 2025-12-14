/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = var_12;
                var_19 = (((min((min(2639363334844487287, 3272100654410705388)), (!var_3))) | ((((max((arr_0 [16]), -32758))) / var_7))));
                var_20 = (max(5669007000799518789, 93));
                var_21 = -5669007000799518803;
            }
        }
    }
    var_22 = ((min(((min(var_1, var_17)), 93))));
    var_23 = var_1;
    var_24 = (min(var_24, 104));
    #pragma endscop
}
