/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((((((!(arr_3 [i_1] [i_1])))) >= 65518))) / (arr_1 [4])));
                var_21 = (65518 >= 4294967295);
            }
        }
    }
    var_22 = ((((((((var_15 ? var_4 : -8412303631303659401))) ? (var_18 > 62157) : var_3))) ? var_16 : (var_11 ^ var_12)));
    var_23 = var_17;
    #pragma endscop
}
