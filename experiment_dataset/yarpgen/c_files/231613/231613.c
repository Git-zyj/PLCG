/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(-2147483640, -2147483640))) ? -2147483640 : (min(-2147483647, ((var_17 ? var_13 : -2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((((arr_3 [i_1 - 2] [i_1 - 2] [14]) ? -2147483640 : -2147483640)), ((((((arr_2 [i_0] [i_1]) ? 2147483639 : var_3)) == (min(-2147483647, var_3)))))));
                var_20 = ((2147483640 ? ((var_14 ? (min(2147483639, -2147483639)) : 2147483646)) : (arr_4 [i_0] [i_0])));
                arr_7 [i_1] [i_0] = (((arr_1 [i_1 - 3]) ? (min(var_3, (arr_2 [i_1 + 1] [i_0]))) : 2147483646));
            }
        }
    }
    var_21 = (max((max(-2147483640, -2147483647)), var_10));
    #pragma endscop
}
