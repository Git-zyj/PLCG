/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max(2765263822, 3508)))));
                var_17 = ((!(3421974794379433058 > var_1)));
                var_18 = (((!5470091248752259142) ? ((16566 - (arr_0 [i_0 - 1]))) : 57194));
            }
        }
    }
    var_19 = var_7;
    var_20 = var_11;
    #pragma endscop
}
